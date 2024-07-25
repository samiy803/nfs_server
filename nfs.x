const NFS3_FHSIZE = 64;
const NFS3_COOKIEVERFSIZE = 8;
const NFS3_CREATEVERFSIZE = 8;
const NFS3_WRITEVERFSIZE = 8;

typedef unsigned hyper uint64;
typedef hyper int64;
typedef unsigned long uint32;
typedef long int32;
typedef string filename3<>;
typedef string nfspath3<>;
typedef uint64 fileid3;
typedef uint64 cookie3;
typedef opaque cookieverf3[NFS3_COOKIEVERFSIZE];
typedef opaque createverf3[NFS3_CREATEVERFSIZE];
typedef opaque writeverf3[NFS3_WRITEVERFSIZE];
typedef uint32 uid3;
typedef uint32 gid3;
typedef uint64 size3;
typedef uint64 offset3;
typedef uint32 mode3;
typedef uint32 count3;

enum nfsstat3 {
  /* Indicates the call completed successfully. */
  NFS3_OK             = 0,

  /* Not owner. The operation was not allowed because the
       caller is either not a privileged user (root) or not the
       owner of the target of the operation. */
  NFS3ERR_PERM        = 1,

   /* No such file or directory. The file or directory name
       specified does not exist. */
  NFS3ERR_NOENT       = 2,

   /* I/O error. A hard error (for example, a disk error)
       occurred while processing the requested operation. */
  NFS3ERR_IO          = 5,

   /* I/O error. No such device or address. */
  NFS3ERR_NXIO        = 6,

  /* Permission denied. The caller does not have the correct
     permission to perform the requested operation. Contrast
     this with NFS3ERR_PERM, which restricts itself to owner
     permission failures. */
  NFS3ERR_ACCES       = 13,

  /* File exists. The file specified already exists. */
  NFS3ERR_EXIST       = 17,

  /* Attempt to do a cross-device hard link. */
  NFS3ERR_XDEV        = 18,

  /* No such device. */
  NFS3ERR_NODEV       = 19,

  /* Not a directory. The caller specified a non-directory in
       a directory operation. */
  NFS3ERR_NOTDIR      = 20,

  /* Is a directory. The caller specified a directory in a
       non-directory operation. */
  NFS3ERR_ISDIR       = 21,

  /* Invalid argument or unsupported argument for an
       operation. Two examples are attempting a READLINK on an
       object other than a symbolic link or attempting to
       SETATTR a time field on a server that does not support
       this operation. */
  NFS3ERR_INVAL       = 22,

  /* File too large. The operation would have caused a file to
       grow beyond the server's limit. */
  NFS3ERR_FBIG        = 27,

  /* No space left on device. The operation would have caused
       the server's file system to exceed its limit. */
  NFS3ERR_NOSPC       = 28,

  /* Read-only file system. A modifying operation was
       attempted on a read-only file system. */
  NFS3ERR_ROFS        = 30,

  /* Too many hard links. */
  NFS3ERR_MLINK       = 31,

  /* The filename in an operation was too long. */
  NFS3ERR_NAMETOOLONG = 63,

  /* An attempt was made to remove a directory that was not empty. */
  NFS3ERR_NOTEMPTY    = 66,

  /* Resource (quota) hard limit exceeded. The user's resource
       limit on the server has been exceeded. */
  NFS3ERR_DQUOT       = 69,

  /* Invalid file handle. The file handle given in the
       arguments was invalid. The file referred to by that file
       handle no longer exists or access to it has been
       revoked. */
  NFS3ERR_STALE       = 70,

  /* Too many levels of remote in path. The file handle given
       in the arguments referred to a file on a non-local file
       system on the server. */
  NFS3ERR_REMOTE      = 71,

  /* Illegal NFS file handle. The file handle failed internal
       consistency checks. */
  NFS3ERR_BADHANDLE   = 10001,

  /* Update synchronization mismatch was detected during a
       SETATTR operation. */
  NFS3ERR_NOT_SYNC    = 10002,

  /* READDIR or READDIRPLUS cookie is stale. */
  NFS3ERR_BAD_COOKIE  = 10003,

  /* Operation is not supported. */
  NFS3ERR_NOTSUPP     = 10004,

  /* Buffer or request is too small. */
  NFS3ERR_TOOSMALL    = 10005,

  /* An error occurred on the server which does not map to any
       of the legal NFS version 3 protocol error values.  The
       client should translate this into an appropriate error.
       UNIX clients may choose to translate this to EIO. */
  NFS3ERR_SERVERFAULT = 10006,

  /* An attempt was made to create an object of a type not
       supported by the server. */
  NFS3ERR_BADTYPE     = 10007,

  /* The server initiated the request, but was not able to
       complete it in a timely fashion. The client should wait
       and then try the request with a new RPC transaction ID.
       For example, this error should be returned from a server
       that supports hierarchical storage and receives a request
       to process a file that has been migrated. In this case,
       the server should start the immigration process and
       respond to client with this error. */
  NFS3ERR_JUKEBOX     = 10008
};

/* The enumeration, ftype3, gives the type of a file. The type,
   NF3REG, is a regular file, NF3DIR is a directory, NF3BLK is a
   block special device file, NF3CHR is a character special device
   file, NF3LNK is a symbolic link, NF3SOCK is a socket, and
   NF3FIFO is a named pipe. Note that the precise enum encoding
   must be followed.
*/
enum ftype3 {
   NF3REG    = 1,
   NF3DIR    = 2,
   NF3BLK    = 3,
   NF3CHR    = 4,
   NF3LNK    = 5,
   NF3SOCK   = 6,
   NF3FIFO   = 7
};

/* The interpretation of the two words depends on the type of file
   system object. For a block special (NF3BLK) or character special
   (NF3CHR) file, specdata1 and specdata2 are the major and minor
   device numbers, respectively.  (This is obviously a
   UNIX-specific interpretation.) For all other file types, these
   two elements should either be set to 0 or the values should be
   agreed upon by the client and server. If the client and server
   do not agree upon the values, the client should treat these
   fields as if they are set to 0. This data field is returned as
   part of the fattr3 structure and so is available from all
   replies returning attributes. Since these fields are otherwise
   unused for objects which are not devices, out of band
   information can be passed from the server to the client.
   However, once again, both the server and the client must agree
   on the values passed.
*/
struct specdata3 {
     uint32     specdata1;
     uint32     specdata2;
};

/* The nfs_fh3 is the variable-length opaque object returned by the
   server on LOOKUP, CREATE, SYMLINK, MKNOD, LINK, or READDIRPLUS
   operations, which is used by the client on subsequent operations
   to reference the file. The file handle contains all the
   information the server needs to distinguish an individual file.
   To the client, the file handle is opaque. The client stores file
   handles for use in a later request and can compare two file
   handles from the same server for equality by doing a
   byte-by-byte comparison, but cannot otherwise interpret the
   contents of file handles. If two file handles from the same
   server are equal, they must refer to the same file, but if they
   are not equal, no conclusions can be drawn. Servers should try
   to maintain a one-to-one correspondence between file handles and
   files, but this is not required. Clients should use file handle
   comparisons only to improve performance, not for correct
   behavior.

   Servers can revoke the access provided by a file handle at any
   time.  If the file handle passed in a call refers to a file
   system object that no longer exists on the server or access for
   that file handle has been revoked, the error, NFS3ERR_STALE,
   should be returned.
*/
struct nfs_fh3 {
   opaque       data<NFS3_FHSIZE>;
};

/* The nfstime3 structure gives the number of seconds and
   nanoseconds since midnight January 1, 1970 Greenwich Mean Time.
   It is used to pass time and date information. The times
   associated with files are all server times except in the case of
   a SETATTR operation where the client can explicitly set the file
   time. A server converts to and from local time when processing
   time values, preserving as much accuracy as possible. If the
   precision of timestamps stored for a file is less than that
   defined by NFS version 3 protocol, loss of precision can occur.
   An adjunct time maintenance protocol is recommended to reduce
   client and server time skew.
*/
struct nfstime3 {
   uint32   seconds;
   uint32   nseconds;
};

/* This structure defines the attributes of a file system object.
   It is returned by most operations on an object; in the case of
   operations that affect two objects (for example, a MKDIR that
   modifies the target directory attributes and defines new
   attributes for the newly created directory), the attributes for
   both may be returned. In some cases, the attributes are returned
   in the structure, wcc_data, which is defined below; in other
   cases the attributes are returned alone.  The main changes from
   the NFS version 2 protocol are that many of the fields have been
   widened and the major/minor device information is now presented
   in a distinct structure rather than being packed into a word.

   The fattr3 structure contains the basic attributes of a file.
   All servers should support this set of attributes even if they
   have to simulate some of the fields. Type is the type of the
   file. Mode is the protection mode bits. Nlink is the number of
   hard links to the file - that is, the number of different names
   for the same file. Uid is the user ID of the owner of the file.
   Gid is the group ID of the group of the file. Size is the size
   of the file in bytes. Used is the number of bytes of disk space
   that the file actually uses (which can be smaller than the size
   because the file may have holes or it may be larger due to
   fragmentation). Rdev describes the device file if the file type
   is NF3CHR or NF3BLK - see specdata3 on page 20. Fsid is the file
   system identifier for the file system. Fileid is a number which
   uniquely identifies the file within its file system (on UNIX
   this would be the inumber). Atime is the time when the file data
   was last accessed. Mtime is the time when the file data was last
   modified.  Ctime is the time when the attributes of the file
   were last changed.  Writing to the file changes the ctime in
   addition to the mtime.

   The mode bits are defined as follows:

      0x00800 Set user ID on execution.
      0x00400 Set group ID on execution.
      0x00200 Save swapped text (not defined in POSIX).
      0x00100 Read permission for owner.
      0x00080 Write permission for owner.
      0x00040 Execute permission for owner on a file. Or lookup
              (search) permission for owner in directory.
      0x00020 Read permission for group.
      0x00010 Write permission for group.
      0x00008 Execute permission for group on a file. Or lookup
              (search) permission for group in directory.
      0x00004 Read permission for others.
      0x00002 Write permission for others.
      0x00001 Execute permission for others on a file. Or lookup
              (search) permission for others in directory.
*/
struct fattr3 {
   ftype3     type;
   mode3      mode;
   uint32     nlink;
   uid3       uid;
   gid3       gid;
   size3      size;
   size3      used;
   specdata3  rdev;
   uint64     fsid;
   fileid3    fileid;
   nfstime3   atime;
   nfstime3   mtime;
   nfstime3   ctime;
};

/*
   This structure is used for returning attributes in those
   operations that are not directly involved with manipulating
   attributes. One of the principles of this revision of the NFS
   protocol is to return the real value from the indicated
   operation and not an error from an incidental operation. The
   post_op_attr structure was designed to allow the server to
   recover from errors encountered while getting attributes.

   This appears to make returning attributes optional. However,
   server implementors are strongly encouraged to make best effort
   to return attributes whenever possible, even when returning an
   error.
*/
union post_op_attr switch (bool attributes_follow) {
case TRUE:
   fattr3   attributes;
case FALSE:
   void;
};


/* This is the subset of pre-operation attributes needed to better
   support the weak cache consistency semantics. Size is the file
   size in bytes of the object before the operation. Mtime is the
   time of last modification of the object before the operation.
   Ctime is the time of last change to the attributes of the object
   before the operation. See discussion in wcc_attr on page 24.

   The use of mtime by clients to detect changes to file system
   objects residing on a server is dependent on the granularity of
   the time base on the server.
*/
struct wcc_attr {
   size3       size;
   nfstime3    mtime;
   nfstime3    ctime;
};


/* When a client performs an operation that modifies the state of a
   file or directory on the server, it cannot immediately determine
   from the post-operation attributes whether the operation just
   performed was the only operation on the object since the last
   time the client received the attributes for the object. This is
   important, since if an intervening operation has changed the
   object, the client will need to invalidate any cached data for
   the object (except for the data that it just wrote).

   To deal with this, the notion of weak cache consistency data or
   wcc_data is introduced. A wcc_data structure consists of certain
   key fields from the object attributes before the operation,
   together with the object attributes after the operation. This
   information allows the client to manage its cache more
   accurately than in NFS version 2 protocol implementations. The
   term, weak cache consistency, emphasizes the fact that this
   mechanism does not provide the strict server-client consistency
   that a cache consistency protocol would provide.

   In order to support the weak cache consistency model, the server
   will need to be able to get the pre-operation attributes of the
   object, perform the intended modify operation, and then get the
   post-operation attributes atomically. If there is a window for
   the object to get modified between the operation and either of
   the get attributes operations, then the client will not be able
   to determine whether it was the only entity to modify the
   object. Some information will have been lost, thus weakening the
   weak cache consistency guarantees.
*/
union pre_op_attr switch (bool attributes_follow) {
case TRUE:
     wcc_attr  attributes;
case FALSE:
     void;
};
struct wcc_data {
   pre_op_attr    before;
   post_op_attr   after;
};

/* One of the principles of this revision of the NFS protocol is to
   return the real value from the indicated operation and not an
   error from an incidental operation. The post_op_fh3 structure
   was designed to allow the server to recover from errors
   encountered while constructing a file handle.

   This is the structure used to return a file handle from the
   CREATE, MKDIR, SYMLINK, MKNOD, and READDIRPLUS requests. In each
   case, the client can get the file handle by issuing a LOOKUP
   request after a successful return from one of the listed
   operations. Returning the file handle is an optimization so that
   the client is not forced to immediately issue a LOOKUP request
   to get the file handle.
*/
union post_op_fh3 switch (bool handle_follows) {
case TRUE:
     nfs_fh3  handle;
case FALSE:
     void;
};


enum time_how {
   DONT_CHANGE        = 0,
   SET_TO_SERVER_TIME = 1,
   SET_TO_CLIENT_TIME = 2
};
union set_mode3 switch (bool set_it) {
case TRUE:
   mode3    mode;
default:
   void;
};
union set_uid3 switch (bool set_it) {
case TRUE:
   uid3     uid;
default:
   void;
};
union set_gid3 switch (bool set_it) {
case TRUE:
   gid3     gid;
default:
   void;
};
union set_size3 switch (bool set_it) {
case TRUE:
   size3    size;
default:
   void;
};
union set_atime switch (time_how set_it) {
case SET_TO_CLIENT_TIME:
   nfstime3  atime;
default:
   void;
};
union set_mtime switch (time_how set_it) {
case SET_TO_CLIENT_TIME:
   nfstime3  mtime;
default:
   void;
};
/* The sattr3 structure contains the file attributes that can be
   set from the client. The fields are the same as the similarly
   named fields in the fattr3 structure. In the NFS version 3
   protocol, the settable attributes are described by a structure
   containing a set of discriminated unions. Each union indicates
   whether the corresponding attribute is to be updated, and if so,
   how.

   There are two forms of discriminated unions used. In setting the
   mode, uid, gid, or size, the discriminated union is switched on
   a boolean, set_it; if it is TRUE, a value of the appropriate
   type is then encoded.

   In setting the atime or mtime, the union is switched on an
   enumeration type, set_it. If set_it has the value DONT_CHANGE,
   the corresponding attribute is unchanged. If it has the value,
   SET_TO_SERVER_TIME, the corresponding attribute is set by the
   server to its local time; no data is provided by the client.
   Finally, if set_it has the value, SET_TO_CLIENT_TIME, the
   attribute is set to the time passed by the client in an nfstime3
   structure. (See FSINFO on page 86, which addresses the issue of
   time granularity).
*/
struct sattr3 {
   set_mode3   mode;
   set_uid3    uid;
   set_gid3    gid;
   set_size3   size;
   set_atime   atime;
   set_mtime   mtime;
};

/* The diropargs3 structure is used in directory operations. The
   file handle, dir, identifies the directory in which to
   manipulate or access the file, name. See additional comments in
   File name component handling on page 101.
*/
struct diropargs3 {
   nfs_fh3     dir;
   filename3   name;
};

/* The following data types are for arguments and responses. */

/* GETATTR */
struct GETATTR3args {
   nfs_fh3  object;
};

struct GETATTR3resok {
   fattr3   obj_attributes;
};

union GETATTR3res switch (nfsstat3 status) {
case NFS3_OK:
   GETATTR3resok  resok;
default:
   void;
};

/* SETATTR */
union sattrguard3 switch (bool check) {
case TRUE:
   nfstime3  obj_ctime;
case FALSE:
   void;
};

struct SETATTR3args {
   nfs_fh3      object;
   sattr3       new_attributes;
   sattrguard3  guard;
};

struct SETATTR3resok {
   wcc_data  obj_wcc;
};

struct SETATTR3resfail {
   wcc_data  obj_wcc;
};
union SETATTR3res switch (nfsstat3 status) {
case NFS3_OK:
   SETATTR3resok   resok;
default:
   SETATTR3resfail resfail;
};

/* LOOKUP */
struct LOOKUP3args {
     diropargs3  what;
};

struct LOOKUP3resok {
     nfs_fh3      object;
     post_op_attr obj_attributes;
     post_op_attr dir_attributes;
};

struct LOOKUP3resfail {
     post_op_attr dir_attributes;
};

union LOOKUP3res switch (nfsstat3 status) {
case NFS3_OK:
     LOOKUP3resok    resok;
default:
     LOOKUP3resfail  resfail;
};


/* ACCESS */
const ACCESS3_READ    = 0x0001;
const ACCESS3_LOOKUP  = 0x0002;
const ACCESS3_MODIFY  = 0x0004;
const ACCESS3_EXTEND  = 0x0008;
const ACCESS3_DELETE  = 0x0010;
const ACCESS3_EXECUTE = 0x0020;

struct ACCESS3args {
     nfs_fh3  object;
     uint32   access;
};

struct ACCESS3resok {
     post_op_attr   obj_attributes;
     uint32         access;
};

struct ACCESS3resfail {
     post_op_attr   obj_attributes;
};

union ACCESS3res switch (nfsstat3 status) {
case NFS3_OK:
     ACCESS3resok   resok;
default:
     ACCESS3resfail resfail;
};


/* READLINK */
struct READLINK3args {
     nfs_fh3  symlink;
};

struct READLINK3resok {
     post_op_attr   symlink_attributes;
     nfspath3       data;
};

struct READLINK3resfail {
     post_op_attr   symlink_attributes;
};

union READLINK3res switch (nfsstat3 status) {
case NFS3_OK:
     READLINK3resok   resok;
default:
     READLINK3resfail resfail;
};


/* READ */
struct READ3args {
     nfs_fh3  file;
     offset3  offset;
     count3   count;
};

struct READ3resok {
     post_op_attr   file_attributes;
     count3         count;
     bool           eof;
     opaque         data<>;
};

struct READ3resfail {
     post_op_attr   file_attributes;
};

union READ3res switch (nfsstat3 status) {
case NFS3_OK:
     READ3resok   resok;
default:
     READ3resfail resfail;
};



/* WRTIE */
enum stable_how {
     UNSTABLE  = 0,
     DATA_SYNC = 1,
     FILE_SYNC = 2
};

struct WRITE3args {
     nfs_fh3     file;
     offset3     offset;
     count3      count;
     stable_how  stable;
     opaque      data<>;
};

struct WRITE3resok {
     wcc_data    file_wcc;
     count3      count;
     stable_how  committed;
     writeverf3  verf;
};

struct WRITE3resfail {
     wcc_data    file_wcc;
};

union WRITE3res switch (nfsstat3 status) {
case NFS3_OK:
     WRITE3resok    resok;
default:
     WRITE3resfail  resfail;
};


/* CREATE */
enum createmode3 {
     UNCHECKED = 0,
     GUARDED   = 1,
     EXCLUSIVE = 2
};

union createhow3 switch (createmode3 mode) {
case UNCHECKED:
case GUARDED:
     sattr3       obj_attributes;
case EXCLUSIVE:
     createverf3  verf;
};

struct CREATE3args {
     diropargs3   where;
     createhow3   how;
};

struct CREATE3resok {
     post_op_fh3   obj;
     post_op_attr  obj_attributes;
     wcc_data      dir_wcc;
};

struct CREATE3resfail {
     wcc_data      dir_wcc;
};

union CREATE3res switch (nfsstat3 status) {
case NFS3_OK:
     CREATE3resok    resok;
default:
     CREATE3resfail  resfail;
};

/* MKDIR */
struct MKDIR3args {
     diropargs3   where;
     sattr3       attributes;
};

struct MKDIR3resok {
     post_op_fh3   obj;
     post_op_attr  obj_attributes;
     wcc_data      dir_wcc;
};

struct MKDIR3resfail {
     wcc_data      dir_wcc;
};

union MKDIR3res switch (nfsstat3 status) {
case NFS3_OK:
     MKDIR3resok   resok;
default:
     MKDIR3resfail resfail;
};


/* SYMLINK */
struct symlinkdata3 {
     sattr3    symlink_attributes;
     nfspath3  symlink_data;
};

struct SYMLINK3args {
     diropargs3    where;
     symlinkdata3  symlink;
};

struct SYMLINK3resok {
     post_op_fh3   obj;
     post_op_attr  obj_attributes;
     wcc_data      dir_wcc;
};

struct SYMLINK3resfail {
     wcc_data      dir_wcc;
};

union SYMLINK3res switch (nfsstat3 status) {
case NFS3_OK:
     SYMLINK3resok   resok;
default:
     SYMLINK3resfail resfail;
};


/* MKNOD */
struct devicedata3 {
     sattr3     dev_attributes;
     specdata3  spec;
};

union mknoddata3 switch (ftype3 type) {
case NF3CHR:
case NF3BLK:
     devicedata3  device;
case NF3SOCK:
case NF3FIFO:
     sattr3       pipe_attributes;
default:
     void;
};

struct MKNOD3args {
     diropargs3   where;
     mknoddata3   what;
};
struct MKNOD3resok {
     post_op_fh3   obj;
     post_op_attr  obj_attributes;
     wcc_data      dir_wcc;
};

struct MKNOD3resfail {
     wcc_data      dir_wcc;
};

union MKNOD3res switch (nfsstat3 status) {
case NFS3_OK:
     MKNOD3resok   resok;
default:
     MKNOD3resfail resfail;
};


/* REMOVE */
struct REMOVE3args {
     diropargs3  object;
};

struct REMOVE3resok {
     wcc_data    dir_wcc;
};

struct REMOVE3resfail {
     wcc_data    dir_wcc;
};

union REMOVE3res switch (nfsstat3 status) {
case NFS3_OK:
     REMOVE3resok   resok;
default:
     REMOVE3resfail resfail;
};


/* RMDIR */
struct RMDIR3args {
     diropargs3  object;
};
struct RMDIR3resok {
     wcc_data    dir_wcc;
};
struct RMDIR3resfail {
     wcc_data    dir_wcc;
};
union RMDIR3res switch (nfsstat3 status) {
case NFS3_OK:
     RMDIR3resok   resok;
default:
     RMDIR3resfail resfail;
};


/* RENAME */
struct RENAME3args {
     diropargs3   from;
     diropargs3   to;
};

struct RENAME3resok {
     wcc_data     fromdir_wcc;
     wcc_data     todir_wcc;
};

struct RENAME3resfail {
     wcc_data     fromdir_wcc;
     wcc_data     todir_wcc;
};

union RENAME3res switch (nfsstat3 status) {
case NFS3_OK:
     RENAME3resok   resok;
default:
     RENAME3resfail resfail;
};

/* LINK */
struct LINK3args {
     nfs_fh3     file;
     diropargs3  link;
};

struct LINK3resok {
     post_op_attr   file_attributes;
     wcc_data       linkdir_wcc;
};

struct LINK3resfail {
     post_op_attr   file_attributes;
     wcc_data       linkdir_wcc;
};

union LINK3res switch (nfsstat3 status) {
case NFS3_OK:

     LINK3resok    resok;
default:
     LINK3resfail  resfail;
};

/* READDIR */
struct READDIR3args {
     nfs_fh3      dir;
     cookie3      cookie;
     cookieverf3  cookieverf;
     count3       count;
};
struct entry3 {
     fileid3      fileid;
     filename3    name;
     cookie3      cookie;
     entry3       *nextentry;
};

struct dirlist3 {
     entry3       *entries;
     bool         eof;
};

struct READDIR3resok {
     post_op_attr dir_attributes;
     cookieverf3  cookieverf;
     dirlist3     reply;
};

struct READDIR3resfail {
     post_op_attr dir_attributes;
};

union READDIR3res switch (nfsstat3 status) {
case NFS3_OK:
     READDIR3resok   resok;
default:
     READDIR3resfail resfail;
};


/* READDIRPLUS */
struct READDIRPLUS3args {
     nfs_fh3      dir;
     cookie3      cookie;
     cookieverf3  cookieverf;
     count3       dircount;
     count3       maxcount;
};

struct entryplus3 {
     fileid3      fileid;
     filename3    name;
     cookie3      cookie;
     post_op_attr name_attributes;
     post_op_fh3  name_handle;
     entryplus3   *nextentry;
};

struct dirlistplus3 {
     entryplus3   *entries;
     bool         eof;
};

struct READDIRPLUS3resok {
     post_op_attr dir_attributes;
     cookieverf3  cookieverf;
     dirlistplus3 reply;
};


struct READDIRPLUS3resfail {
     post_op_attr dir_attributes;
};

union READDIRPLUS3res switch (nfsstat3 status) {
case NFS3_OK:
     READDIRPLUS3resok   resok;
default:
     READDIRPLUS3resfail resfail;
};

/* FSSTAT */
struct FSSTAT3args {
     nfs_fh3   fsroot;
};

struct FSSTAT3resok {
     post_op_attr obj_attributes;
     size3        tbytes;
     size3        fbytes;
     size3        abytes;
     size3        tfiles;
     size3        ffiles;
     size3        afiles;
     uint32       invarsec;
};

struct FSSTAT3resfail {
     post_op_attr obj_attributes;
};

union FSSTAT3res switch (nfsstat3 status) {
case NFS3_OK:
     FSSTAT3resok   resok;
default:
     FSSTAT3resfail resfail;
};

/* FSINFO */
const FSF3_LINK        = 0x0001;
const FSF3_SYMLINK     = 0x0002;
const FSF3_HOMOGENEOUS = 0x0008;
const FSF3_CANSETTIME  = 0x0010;

struct FSINFO3args {
     nfs_fh3   fsroot;
};

struct FSINFO3resok {
     post_op_attr obj_attributes;
     uint32       rtmax;
     uint32       rtpref;
     uint32       rtmult;
     uint32       wtmax;
     uint32       wtpref;
     uint32       wtmult;
     uint32       dtpref;
     size3        maxfilesize;
     nfstime3     time_delta;
     uint32       properties;
};

struct FSINFO3resfail {
     post_op_attr obj_attributes;
};

union FSINFO3res switch (nfsstat3 status) {
case NFS3_OK:
     FSINFO3resok   resok;
default:
     FSINFO3resfail resfail;
};

/* PATHCONF */
struct PATHCONF3args {
     nfs_fh3   object;
};

struct PATHCONF3resok {
     post_op_attr obj_attributes;
     uint32       linkmax;
     uint32       name_max;
     bool         no_trunc;
     bool         chown_restricted;
     bool         case_insensitive;
     bool         case_preserving;
};

struct PATHCONF3resfail {
     post_op_attr obj_attributes;
};

union PATHCONF3res switch (nfsstat3 status) {
case NFS3_OK:
     PATHCONF3resok   resok;
default:
     PATHCONF3resfail resfail;
};

/* COMMIT */
struct COMMIT3args {
     nfs_fh3    file;
     offset3    offset;
     count3     count;
};

struct COMMIT3resok {
     wcc_data   file_wcc;
     writeverf3 verf;
};

struct COMMIT3resfail {
     wcc_data   file_wcc;
};

union COMMIT3res switch (nfsstat3 status) {
case NFS3_OK:
     COMMIT3resok   resok;
default:
     COMMIT3resfail resfail;
};



program NFS_PROGRAM {
   version NFS_V3 {
      void
       NFSPROC3_NULL(void)                    = 0;

      GETATTR3res
       NFSPROC3_GETATTR(GETATTR3args)         = 1;

      SETATTR3res
       NFSPROC3_SETATTR(SETATTR3args)         = 2;

      LOOKUP3res
       NFSPROC3_LOOKUP(LOOKUP3args)           = 3;

      ACCESS3res
       NFSPROC3_ACCESS(ACCESS3args)           = 4;

      READLINK3res
       NFSPROC3_READLINK(READLINK3args)       = 5;

      READ3res
       NFSPROC3_READ(READ3args)               = 6;

      WRITE3res
       NFSPROC3_WRITE(WRITE3args)             = 7;

      CREATE3res
       NFSPROC3_CREATE(CREATE3args)           = 8;

      MKDIR3res
       NFSPROC3_MKDIR(MKDIR3args)             = 9;

      SYMLINK3res
       NFSPROC3_SYMLINK(SYMLINK3args)         = 10;

      MKNOD3res
       NFSPROC3_MKNOD(MKNOD3args)             = 11;

      REMOVE3res
       NFSPROC3_REMOVE(REMOVE3args)           = 12;

      RMDIR3res
       NFSPROC3_RMDIR(RMDIR3args)             = 13;

      RENAME3res
       NFSPROC3_RENAME(RENAME3args)           = 14;

      LINK3res
       NFSPROC3_LINK(LINK3args)               = 15;

      READDIR3res
       NFSPROC3_READDIR(READDIR3args)         = 16;

      READDIRPLUS3res
       NFSPROC3_READDIRPLUS(READDIRPLUS3args) = 17;

      FSSTAT3res
       NFSPROC3_FSSTAT(FSSTAT3args)           = 18;

      FSINFO3res
       NFSPROC3_FSINFO(FSINFO3args)           = 19;

      PATHCONF3res
       NFSPROC3_PATHCONF(PATHCONF3args)       = 20;

      COMMIT3res
       NFSPROC3_COMMIT(COMMIT3args)           = 21;

   } = 3;
} = 100003;
