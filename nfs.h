#ifndef _NFS_H_RPCGEN
#define _NFS_H_RPCGEN

#define RPCGEN_VERSION	199506

#include <rpc/rpc.h>
#include <filesystem>

#define NFS3_FHSIZE 64
#define NFS3_COOKIEVERFSIZE 8
#define NFS3_CREATEVERFSIZE 8
#define NFS3_WRITEVERFSIZE 8

typedef u_int64_t uint64;
#ifdef __cplusplus
extern "C" bool_t xdr_uint64(XDR *, uint64*);
#elif __STDC__
extern  bool_t xdr_uint64(XDR *, uint64*);
#else /* Old Style C */
bool_t xdr_uint64();
#endif /* Old Style C */


typedef int64_t int64;
#ifdef __cplusplus
extern "C" bool_t xdr_int64(XDR *, int64*);
#elif __STDC__
extern  bool_t xdr_int64(XDR *, int64*);
#else /* Old Style C */
bool_t xdr_int64();
#endif /* Old Style C */


typedef u_long uint32;
#ifdef __cplusplus
extern "C" bool_t xdr_uint32(XDR *, uint32*);
#elif __STDC__
extern  bool_t xdr_uint32(XDR *, uint32*);
#else /* Old Style C */
bool_t xdr_uint32();
#endif /* Old Style C */


typedef long int32;
#ifdef __cplusplus
extern "C" bool_t xdr_int32(XDR *, int32*);
#elif __STDC__
extern  bool_t xdr_int32(XDR *, int32*);
#else /* Old Style C */
bool_t xdr_int32();
#endif /* Old Style C */


typedef char *filename3;
#ifdef __cplusplus
extern "C" bool_t xdr_filename3(XDR *, filename3*);
#elif __STDC__
extern  bool_t xdr_filename3(XDR *, filename3*);
#else /* Old Style C */
bool_t xdr_filename3();
#endif /* Old Style C */


typedef char *nfspath3;
#ifdef __cplusplus
extern "C" bool_t xdr_nfspath3(XDR *, nfspath3*);
#elif __STDC__
extern  bool_t xdr_nfspath3(XDR *, nfspath3*);
#else /* Old Style C */
bool_t xdr_nfspath3();
#endif /* Old Style C */


typedef uint64 fileid3;
#ifdef __cplusplus
extern "C" bool_t xdr_fileid3(XDR *, fileid3*);
#elif __STDC__
extern  bool_t xdr_fileid3(XDR *, fileid3*);
#else /* Old Style C */
bool_t xdr_fileid3();
#endif /* Old Style C */


typedef uint64 cookie3;
#ifdef __cplusplus
extern "C" bool_t xdr_cookie3(XDR *, cookie3*);
#elif __STDC__
extern  bool_t xdr_cookie3(XDR *, cookie3*);
#else /* Old Style C */
bool_t xdr_cookie3();
#endif /* Old Style C */


typedef char cookieverf3[NFS3_COOKIEVERFSIZE];
#ifdef __cplusplus
extern "C" bool_t xdr_cookieverf3(XDR *, cookieverf3);
#elif __STDC__
extern  bool_t xdr_cookieverf3(XDR *, cookieverf3);
#else /* Old Style C */
bool_t xdr_cookieverf3();
#endif /* Old Style C */


typedef char createverf3[NFS3_CREATEVERFSIZE];
#ifdef __cplusplus
extern "C" bool_t xdr_createverf3(XDR *, createverf3);
#elif __STDC__
extern  bool_t xdr_createverf3(XDR *, createverf3);
#else /* Old Style C */
bool_t xdr_createverf3();
#endif /* Old Style C */


typedef char writeverf3[NFS3_WRITEVERFSIZE];
#ifdef __cplusplus
extern "C" bool_t xdr_writeverf3(XDR *, writeverf3);
#elif __STDC__
extern  bool_t xdr_writeverf3(XDR *, writeverf3);
#else /* Old Style C */
bool_t xdr_writeverf3();
#endif /* Old Style C */


typedef uint32 uid3;
#ifdef __cplusplus
extern "C" bool_t xdr_uid3(XDR *, uid3*);
#elif __STDC__
extern  bool_t xdr_uid3(XDR *, uid3*);
#else /* Old Style C */
bool_t xdr_uid3();
#endif /* Old Style C */


typedef uint32 gid3;
#ifdef __cplusplus
extern "C" bool_t xdr_gid3(XDR *, gid3*);
#elif __STDC__
extern  bool_t xdr_gid3(XDR *, gid3*);
#else /* Old Style C */
bool_t xdr_gid3();
#endif /* Old Style C */


typedef uint64 size3;
#ifdef __cplusplus
extern "C" bool_t xdr_size3(XDR *, size3*);
#elif __STDC__
extern  bool_t xdr_size3(XDR *, size3*);
#else /* Old Style C */
bool_t xdr_size3();
#endif /* Old Style C */


typedef uint64 offset3;
#ifdef __cplusplus
extern "C" bool_t xdr_offset3(XDR *, offset3*);
#elif __STDC__
extern  bool_t xdr_offset3(XDR *, offset3*);
#else /* Old Style C */
bool_t xdr_offset3();
#endif /* Old Style C */


typedef uint32 mode3;
#ifdef __cplusplus
extern "C" bool_t xdr_mode3(XDR *, mode3*);
#elif __STDC__
extern  bool_t xdr_mode3(XDR *, mode3*);
#else /* Old Style C */
bool_t xdr_mode3();
#endif /* Old Style C */


typedef uint32 count3;
#ifdef __cplusplus
extern "C" bool_t xdr_count3(XDR *, count3*);
#elif __STDC__
extern  bool_t xdr_count3(XDR *, count3*);
#else /* Old Style C */
bool_t xdr_count3();
#endif /* Old Style C */


enum nfsstat3 {
	NFS3_OK = 0,
	NFS3ERR_PERM = 1,
	NFS3ERR_NOENT = 2,
	NFS3ERR_IO = 5,
	NFS3ERR_NXIO = 6,
	NFS3ERR_ACCES = 13,
	NFS3ERR_EXIST = 17,
	NFS3ERR_XDEV = 18,
	NFS3ERR_NODEV = 19,
	NFS3ERR_NOTDIR = 20,
	NFS3ERR_ISDIR = 21,
	NFS3ERR_INVAL = 22,
	NFS3ERR_FBIG = 27,
	NFS3ERR_NOSPC = 28,
	NFS3ERR_ROFS = 30,
	NFS3ERR_MLINK = 31,
	NFS3ERR_NAMETOOLONG = 63,
	NFS3ERR_NOTEMPTY = 66,
	NFS3ERR_DQUOT = 69,
	NFS3ERR_STALE = 70,
	NFS3ERR_REMOTE = 71,
	NFS3ERR_BADHANDLE = 10001,
	NFS3ERR_NOT_SYNC = 10002,
	NFS3ERR_BAD_COOKIE = 10003,
	NFS3ERR_NOTSUPP = 10004,
	NFS3ERR_TOOSMALL = 10005,
	NFS3ERR_SERVERFAULT = 10006,
	NFS3ERR_BADTYPE = 10007,
	NFS3ERR_JUKEBOX = 10008,
};
typedef enum nfsstat3 nfsstat3;
#ifdef __cplusplus
extern "C" bool_t xdr_nfsstat3(XDR *, nfsstat3*);
#elif __STDC__
extern  bool_t xdr_nfsstat3(XDR *, nfsstat3*);
#else /* Old Style C */
bool_t xdr_nfsstat3();
#endif /* Old Style C */


enum ftype3 {
	NF3REG = 1,
	NF3DIR = 2,
	NF3BLK = 3,
	NF3CHR = 4,
	NF3LNK = 5,
	NF3SOCK = 6,
	NF3FIFO = 7,
};
typedef enum ftype3 ftype3;
#ifdef __cplusplus
extern "C" bool_t xdr_ftype3(XDR *, ftype3*);
#elif __STDC__
extern  bool_t xdr_ftype3(XDR *, ftype3*);
#else /* Old Style C */
bool_t xdr_ftype3();
#endif /* Old Style C */


struct specdata3 {
	uint32 specdata1;
	uint32 specdata2;
};
typedef struct specdata3 specdata3;
#ifdef __cplusplus
extern "C" bool_t xdr_specdata3(XDR *, specdata3*);
#elif __STDC__
extern  bool_t xdr_specdata3(XDR *, specdata3*);
#else /* Old Style C */
bool_t xdr_specdata3();
#endif /* Old Style C */


struct nfs_fh3 {
	struct {
		u_int data_len;
		char *data_val;
	} data;
};
typedef struct nfs_fh3 nfs_fh3;
#ifdef __cplusplus
extern "C" bool_t xdr_nfs_fh3(XDR *, nfs_fh3*);
#elif __STDC__
extern  bool_t xdr_nfs_fh3(XDR *, nfs_fh3*);
#else /* Old Style C */
bool_t xdr_nfs_fh3();
#endif /* Old Style C */


struct nfstime3 {
	uint32 seconds;
	uint32 nseconds;
};
typedef struct nfstime3 nfstime3;
#ifdef __cplusplus
extern "C" bool_t xdr_nfstime3(XDR *, nfstime3*);
#elif __STDC__
extern  bool_t xdr_nfstime3(XDR *, nfstime3*);
#else /* Old Style C */
bool_t xdr_nfstime3();
#endif /* Old Style C */


struct fattr3 {
	ftype3 type;
	mode3 mode;
	uint32 nlink;
	uid3 uid;
	gid3 gid;
	size3 size;
	size3 used;
	specdata3 rdev;
	uint64 fsid;
	fileid3 fileid;
	nfstime3 atime;
	nfstime3 mtime;
	nfstime3 ctime;
};
typedef struct fattr3 fattr3;
#ifdef __cplusplus
extern "C" bool_t xdr_fattr3(XDR *, fattr3*);
#elif __STDC__
extern  bool_t xdr_fattr3(XDR *, fattr3*);
#else /* Old Style C */
bool_t xdr_fattr3();
#endif /* Old Style C */


struct post_op_attr {
	bool_t attributes_follow;
	union {
		fattr3 attributes;
	} post_op_attr_u;
};
typedef struct post_op_attr post_op_attr;
#ifdef __cplusplus
extern "C" bool_t xdr_post_op_attr(XDR *, post_op_attr*);
#elif __STDC__
extern  bool_t xdr_post_op_attr(XDR *, post_op_attr*);
#else /* Old Style C */
bool_t xdr_post_op_attr();
#endif /* Old Style C */


struct wcc_attr {
	size3 size;
	nfstime3 mtime;
	nfstime3 ctime;
};
typedef struct wcc_attr wcc_attr;
#ifdef __cplusplus
extern "C" bool_t xdr_wcc_attr(XDR *, wcc_attr*);
#elif __STDC__
extern  bool_t xdr_wcc_attr(XDR *, wcc_attr*);
#else /* Old Style C */
bool_t xdr_wcc_attr();
#endif /* Old Style C */


struct pre_op_attr {
	bool_t attributes_follow;
	union {
		wcc_attr attributes;
	} pre_op_attr_u;
};
typedef struct pre_op_attr pre_op_attr;
#ifdef __cplusplus
extern "C" bool_t xdr_pre_op_attr(XDR *, pre_op_attr*);
#elif __STDC__
extern  bool_t xdr_pre_op_attr(XDR *, pre_op_attr*);
#else /* Old Style C */
bool_t xdr_pre_op_attr();
#endif /* Old Style C */


struct wcc_data {
	pre_op_attr before;
	post_op_attr after;
};
typedef struct wcc_data wcc_data;
#ifdef __cplusplus
extern "C" bool_t xdr_wcc_data(XDR *, wcc_data*);
#elif __STDC__
extern  bool_t xdr_wcc_data(XDR *, wcc_data*);
#else /* Old Style C */
bool_t xdr_wcc_data();
#endif /* Old Style C */


struct post_op_fh3 {
	bool_t handle_follows;
	union {
		nfs_fh3 handle;
	} post_op_fh3_u;
};
typedef struct post_op_fh3 post_op_fh3;
#ifdef __cplusplus
extern "C" bool_t xdr_post_op_fh3(XDR *, post_op_fh3*);
#elif __STDC__
extern  bool_t xdr_post_op_fh3(XDR *, post_op_fh3*);
#else /* Old Style C */
bool_t xdr_post_op_fh3();
#endif /* Old Style C */


enum time_how {
	DONT_CHANGE = 0,
	SET_TO_SERVER_TIME = 1,
	SET_TO_CLIENT_TIME = 2,
};
typedef enum time_how time_how;
#ifdef __cplusplus
extern "C" bool_t xdr_time_how(XDR *, time_how*);
#elif __STDC__
extern  bool_t xdr_time_how(XDR *, time_how*);
#else /* Old Style C */
bool_t xdr_time_how();
#endif /* Old Style C */


struct set_mode3 {
	bool_t set_it;
	union {
		mode3 mode;
	} set_mode3_u;
};
typedef struct set_mode3 set_mode3;
#ifdef __cplusplus
extern "C" bool_t xdr_set_mode3(XDR *, set_mode3*);
#elif __STDC__
extern  bool_t xdr_set_mode3(XDR *, set_mode3*);
#else /* Old Style C */
bool_t xdr_set_mode3();
#endif /* Old Style C */


struct set_uid3 {
	bool_t set_it;
	union {
		uid3 uid;
	} set_uid3_u;
};
typedef struct set_uid3 set_uid3;
#ifdef __cplusplus
extern "C" bool_t xdr_set_uid3(XDR *, set_uid3*);
#elif __STDC__
extern  bool_t xdr_set_uid3(XDR *, set_uid3*);
#else /* Old Style C */
bool_t xdr_set_uid3();
#endif /* Old Style C */


struct set_gid3 {
	bool_t set_it;
	union {
		gid3 gid;
	} set_gid3_u;
};
typedef struct set_gid3 set_gid3;
#ifdef __cplusplus
extern "C" bool_t xdr_set_gid3(XDR *, set_gid3*);
#elif __STDC__
extern  bool_t xdr_set_gid3(XDR *, set_gid3*);
#else /* Old Style C */
bool_t xdr_set_gid3();
#endif /* Old Style C */


struct set_size3 {
	bool_t set_it;
	union {
		size3 size;
	} set_size3_u;
};
typedef struct set_size3 set_size3;
#ifdef __cplusplus
extern "C" bool_t xdr_set_size3(XDR *, set_size3*);
#elif __STDC__
extern  bool_t xdr_set_size3(XDR *, set_size3*);
#else /* Old Style C */
bool_t xdr_set_size3();
#endif /* Old Style C */


struct set_atime {
	time_how set_it;
	union {
		nfstime3 atime;
	} set_atime_u;
};
typedef struct set_atime set_atime;
#ifdef __cplusplus
extern "C" bool_t xdr_set_atime(XDR *, set_atime*);
#elif __STDC__
extern  bool_t xdr_set_atime(XDR *, set_atime*);
#else /* Old Style C */
bool_t xdr_set_atime();
#endif /* Old Style C */


struct set_mtime {
	time_how set_it;
	union {
		nfstime3 mtime;
	} set_mtime_u;
};
typedef struct set_mtime set_mtime;
#ifdef __cplusplus
extern "C" bool_t xdr_set_mtime(XDR *, set_mtime*);
#elif __STDC__
extern  bool_t xdr_set_mtime(XDR *, set_mtime*);
#else /* Old Style C */
bool_t xdr_set_mtime();
#endif /* Old Style C */


struct sattr3 {
	set_mode3 mode;
	set_uid3 uid;
	set_gid3 gid;
	set_size3 size;
	set_atime atime;
	set_mtime mtime;
};
typedef struct sattr3 sattr3;
#ifdef __cplusplus
extern "C" bool_t xdr_sattr3(XDR *, sattr3*);
#elif __STDC__
extern  bool_t xdr_sattr3(XDR *, sattr3*);
#else /* Old Style C */
bool_t xdr_sattr3();
#endif /* Old Style C */


struct diropargs3 {
	nfs_fh3 dir;
	filename3 name;
};
typedef struct diropargs3 diropargs3;
#ifdef __cplusplus
extern "C" bool_t xdr_diropargs3(XDR *, diropargs3*);
#elif __STDC__
extern  bool_t xdr_diropargs3(XDR *, diropargs3*);
#else /* Old Style C */
bool_t xdr_diropargs3();
#endif /* Old Style C */


struct GETATTR3args {
	nfs_fh3 object;
};
typedef struct GETATTR3args GETATTR3args;
#ifdef __cplusplus
extern "C" bool_t xdr_GETATTR3args(XDR *, GETATTR3args*);
#elif __STDC__
extern  bool_t xdr_GETATTR3args(XDR *, GETATTR3args*);
#else /* Old Style C */
bool_t xdr_GETATTR3args();
#endif /* Old Style C */


struct GETATTR3resok {
	fattr3 obj_attributes;
};
typedef struct GETATTR3resok GETATTR3resok;
#ifdef __cplusplus
extern "C" bool_t xdr_GETATTR3resok(XDR *, GETATTR3resok*);
#elif __STDC__
extern  bool_t xdr_GETATTR3resok(XDR *, GETATTR3resok*);
#else /* Old Style C */
bool_t xdr_GETATTR3resok();
#endif /* Old Style C */


struct GETATTR3res {
	nfsstat3 status;
	union {
		GETATTR3resok resok;
	} GETATTR3res_u;
};
typedef struct GETATTR3res GETATTR3res;
#ifdef __cplusplus
extern "C" bool_t xdr_GETATTR3res(XDR *, GETATTR3res*);
#elif __STDC__
extern  bool_t xdr_GETATTR3res(XDR *, GETATTR3res*);
#else /* Old Style C */
bool_t xdr_GETATTR3res();
#endif /* Old Style C */


struct sattrguard3 {
	bool_t check;
	union {
		nfstime3 obj_ctime;
	} sattrguard3_u;
};
typedef struct sattrguard3 sattrguard3;
#ifdef __cplusplus
extern "C" bool_t xdr_sattrguard3(XDR *, sattrguard3*);
#elif __STDC__
extern  bool_t xdr_sattrguard3(XDR *, sattrguard3*);
#else /* Old Style C */
bool_t xdr_sattrguard3();
#endif /* Old Style C */


struct SETATTR3args {
	nfs_fh3 object;
	sattr3 new_attributes;
	sattrguard3 guard;
};
typedef struct SETATTR3args SETATTR3args;
#ifdef __cplusplus
extern "C" bool_t xdr_SETATTR3args(XDR *, SETATTR3args*);
#elif __STDC__
extern  bool_t xdr_SETATTR3args(XDR *, SETATTR3args*);
#else /* Old Style C */
bool_t xdr_SETATTR3args();
#endif /* Old Style C */


struct SETATTR3resok {
	wcc_data obj_wcc;
};
typedef struct SETATTR3resok SETATTR3resok;
#ifdef __cplusplus
extern "C" bool_t xdr_SETATTR3resok(XDR *, SETATTR3resok*);
#elif __STDC__
extern  bool_t xdr_SETATTR3resok(XDR *, SETATTR3resok*);
#else /* Old Style C */
bool_t xdr_SETATTR3resok();
#endif /* Old Style C */


struct SETATTR3resfail {
	wcc_data obj_wcc;
};
typedef struct SETATTR3resfail SETATTR3resfail;
#ifdef __cplusplus
extern "C" bool_t xdr_SETATTR3resfail(XDR *, SETATTR3resfail*);
#elif __STDC__
extern  bool_t xdr_SETATTR3resfail(XDR *, SETATTR3resfail*);
#else /* Old Style C */
bool_t xdr_SETATTR3resfail();
#endif /* Old Style C */


struct SETATTR3res {
	nfsstat3 status;
	union {
		SETATTR3resok resok;
		SETATTR3resfail resfail;
	} SETATTR3res_u;
};
typedef struct SETATTR3res SETATTR3res;
#ifdef __cplusplus
extern "C" bool_t xdr_SETATTR3res(XDR *, SETATTR3res*);
#elif __STDC__
extern  bool_t xdr_SETATTR3res(XDR *, SETATTR3res*);
#else /* Old Style C */
bool_t xdr_SETATTR3res();
#endif /* Old Style C */


struct LOOKUP3args {
	diropargs3 what;
};
typedef struct LOOKUP3args LOOKUP3args;
#ifdef __cplusplus
extern "C" bool_t xdr_LOOKUP3args(XDR *, LOOKUP3args*);
#elif __STDC__
extern  bool_t xdr_LOOKUP3args(XDR *, LOOKUP3args*);
#else /* Old Style C */
bool_t xdr_LOOKUP3args();
#endif /* Old Style C */


struct LOOKUP3resok {
	nfs_fh3 object;
	post_op_attr obj_attributes;
	post_op_attr dir_attributes;
};
typedef struct LOOKUP3resok LOOKUP3resok;
#ifdef __cplusplus
extern "C" bool_t xdr_LOOKUP3resok(XDR *, LOOKUP3resok*);
#elif __STDC__
extern  bool_t xdr_LOOKUP3resok(XDR *, LOOKUP3resok*);
#else /* Old Style C */
bool_t xdr_LOOKUP3resok();
#endif /* Old Style C */


struct LOOKUP3resfail {
	post_op_attr dir_attributes;
};
typedef struct LOOKUP3resfail LOOKUP3resfail;
#ifdef __cplusplus
extern "C" bool_t xdr_LOOKUP3resfail(XDR *, LOOKUP3resfail*);
#elif __STDC__
extern  bool_t xdr_LOOKUP3resfail(XDR *, LOOKUP3resfail*);
#else /* Old Style C */
bool_t xdr_LOOKUP3resfail();
#endif /* Old Style C */


struct LOOKUP3res {
	nfsstat3 status;
	union {
		LOOKUP3resok resok;
		LOOKUP3resfail resfail;
	} LOOKUP3res_u;
};
typedef struct LOOKUP3res LOOKUP3res;
#ifdef __cplusplus
extern "C" bool_t xdr_LOOKUP3res(XDR *, LOOKUP3res*);
#elif __STDC__
extern  bool_t xdr_LOOKUP3res(XDR *, LOOKUP3res*);
#else /* Old Style C */
bool_t xdr_LOOKUP3res();
#endif /* Old Style C */

#define ACCESS3_READ 0x0001
#define ACCESS3_LOOKUP 0x0002
#define ACCESS3_MODIFY 0x0004
#define ACCESS3_EXTEND 0x0008
#define ACCESS3_DELETE 0x0010
#define ACCESS3_EXECUTE 0x0020

struct ACCESS3args {
	nfs_fh3 object;
	uint32 access;
};
typedef struct ACCESS3args ACCESS3args;
#ifdef __cplusplus
extern "C" bool_t xdr_ACCESS3args(XDR *, ACCESS3args*);
#elif __STDC__
extern  bool_t xdr_ACCESS3args(XDR *, ACCESS3args*);
#else /* Old Style C */
bool_t xdr_ACCESS3args();
#endif /* Old Style C */


struct ACCESS3resok {
	post_op_attr obj_attributes;
	uint32 access;
};
typedef struct ACCESS3resok ACCESS3resok;
#ifdef __cplusplus
extern "C" bool_t xdr_ACCESS3resok(XDR *, ACCESS3resok*);
#elif __STDC__
extern  bool_t xdr_ACCESS3resok(XDR *, ACCESS3resok*);
#else /* Old Style C */
bool_t xdr_ACCESS3resok();
#endif /* Old Style C */


struct ACCESS3resfail {
	post_op_attr obj_attributes;
};
typedef struct ACCESS3resfail ACCESS3resfail;
#ifdef __cplusplus
extern "C" bool_t xdr_ACCESS3resfail(XDR *, ACCESS3resfail*);
#elif __STDC__
extern  bool_t xdr_ACCESS3resfail(XDR *, ACCESS3resfail*);
#else /* Old Style C */
bool_t xdr_ACCESS3resfail();
#endif /* Old Style C */


struct ACCESS3res {
	nfsstat3 status;
	union {
		ACCESS3resok resok;
		ACCESS3resfail resfail;
	} ACCESS3res_u;
};
typedef struct ACCESS3res ACCESS3res;
#ifdef __cplusplus
extern "C" bool_t xdr_ACCESS3res(XDR *, ACCESS3res*);
#elif __STDC__
extern  bool_t xdr_ACCESS3res(XDR *, ACCESS3res*);
#else /* Old Style C */
bool_t xdr_ACCESS3res();
#endif /* Old Style C */


struct READLINK3args {
	nfs_fh3 symlink;
};
typedef struct READLINK3args READLINK3args;
#ifdef __cplusplus
extern "C" bool_t xdr_READLINK3args(XDR *, READLINK3args*);
#elif __STDC__
extern  bool_t xdr_READLINK3args(XDR *, READLINK3args*);
#else /* Old Style C */
bool_t xdr_READLINK3args();
#endif /* Old Style C */


struct READLINK3resok {
	post_op_attr symlink_attributes;
	nfspath3 data;
};
typedef struct READLINK3resok READLINK3resok;
#ifdef __cplusplus
extern "C" bool_t xdr_READLINK3resok(XDR *, READLINK3resok*);
#elif __STDC__
extern  bool_t xdr_READLINK3resok(XDR *, READLINK3resok*);
#else /* Old Style C */
bool_t xdr_READLINK3resok();
#endif /* Old Style C */


struct READLINK3resfail {
	post_op_attr symlink_attributes;
};
typedef struct READLINK3resfail READLINK3resfail;
#ifdef __cplusplus
extern "C" bool_t xdr_READLINK3resfail(XDR *, READLINK3resfail*);
#elif __STDC__
extern  bool_t xdr_READLINK3resfail(XDR *, READLINK3resfail*);
#else /* Old Style C */
bool_t xdr_READLINK3resfail();
#endif /* Old Style C */


struct READLINK3res {
	nfsstat3 status;
	union {
		READLINK3resok resok;
		READLINK3resfail resfail;
	} READLINK3res_u;
};
typedef struct READLINK3res READLINK3res;
#ifdef __cplusplus
extern "C" bool_t xdr_READLINK3res(XDR *, READLINK3res*);
#elif __STDC__
extern  bool_t xdr_READLINK3res(XDR *, READLINK3res*);
#else /* Old Style C */
bool_t xdr_READLINK3res();
#endif /* Old Style C */


struct READ3args {
	nfs_fh3 file;
	offset3 offset;
	count3 count;
};
typedef struct READ3args READ3args;
#ifdef __cplusplus
extern "C" bool_t xdr_READ3args(XDR *, READ3args*);
#elif __STDC__
extern  bool_t xdr_READ3args(XDR *, READ3args*);
#else /* Old Style C */
bool_t xdr_READ3args();
#endif /* Old Style C */


struct READ3resok {
	post_op_attr file_attributes;
	count3 count;
	bool_t eof;
	struct {
		u_int data_len;
		char *data_val;
	} data;
};
typedef struct READ3resok READ3resok;
#ifdef __cplusplus
extern "C" bool_t xdr_READ3resok(XDR *, READ3resok*);
#elif __STDC__
extern  bool_t xdr_READ3resok(XDR *, READ3resok*);
#else /* Old Style C */
bool_t xdr_READ3resok();
#endif /* Old Style C */


struct READ3resfail {
	post_op_attr file_attributes;
};
typedef struct READ3resfail READ3resfail;
#ifdef __cplusplus
extern "C" bool_t xdr_READ3resfail(XDR *, READ3resfail*);
#elif __STDC__
extern  bool_t xdr_READ3resfail(XDR *, READ3resfail*);
#else /* Old Style C */
bool_t xdr_READ3resfail();
#endif /* Old Style C */


struct READ3res {
	nfsstat3 status;
	union {
		READ3resok resok;
		READ3resfail resfail;
	} READ3res_u;
};
typedef struct READ3res READ3res;
#ifdef __cplusplus
extern "C" bool_t xdr_READ3res(XDR *, READ3res*);
#elif __STDC__
extern  bool_t xdr_READ3res(XDR *, READ3res*);
#else /* Old Style C */
bool_t xdr_READ3res();
#endif /* Old Style C */


enum stable_how {
	UNSTABLE = 0,
	DATA_SYNC = 1,
	FILE_SYNC = 2,
};
typedef enum stable_how stable_how;
#ifdef __cplusplus
extern "C" bool_t xdr_stable_how(XDR *, stable_how*);
#elif __STDC__
extern  bool_t xdr_stable_how(XDR *, stable_how*);
#else /* Old Style C */
bool_t xdr_stable_how();
#endif /* Old Style C */


struct WRITE3args {
	nfs_fh3 file;
	offset3 offset;
	count3 count;
	stable_how stable;
	struct {
		u_int data_len;
		char *data_val;
	} data;
};
typedef struct WRITE3args WRITE3args;
#ifdef __cplusplus
extern "C" bool_t xdr_WRITE3args(XDR *, WRITE3args*);
#elif __STDC__
extern  bool_t xdr_WRITE3args(XDR *, WRITE3args*);
#else /* Old Style C */
bool_t xdr_WRITE3args();
#endif /* Old Style C */


struct WRITE3resok {
	wcc_data file_wcc;
	count3 count;
	stable_how committed;
	writeverf3 verf;
};
typedef struct WRITE3resok WRITE3resok;
#ifdef __cplusplus
extern "C" bool_t xdr_WRITE3resok(XDR *, WRITE3resok*);
#elif __STDC__
extern  bool_t xdr_WRITE3resok(XDR *, WRITE3resok*);
#else /* Old Style C */
bool_t xdr_WRITE3resok();
#endif /* Old Style C */


struct WRITE3resfail {
	wcc_data file_wcc;
};
typedef struct WRITE3resfail WRITE3resfail;
#ifdef __cplusplus
extern "C" bool_t xdr_WRITE3resfail(XDR *, WRITE3resfail*);
#elif __STDC__
extern  bool_t xdr_WRITE3resfail(XDR *, WRITE3resfail*);
#else /* Old Style C */
bool_t xdr_WRITE3resfail();
#endif /* Old Style C */


struct WRITE3res {
	nfsstat3 status;
	union {
		WRITE3resok resok;
		WRITE3resfail resfail;
	} WRITE3res_u;
};
typedef struct WRITE3res WRITE3res;
#ifdef __cplusplus
extern "C" bool_t xdr_WRITE3res(XDR *, WRITE3res*);
#elif __STDC__
extern  bool_t xdr_WRITE3res(XDR *, WRITE3res*);
#else /* Old Style C */
bool_t xdr_WRITE3res();
#endif /* Old Style C */


enum createmode3 {
	UNCHECKED = 0,
	GUARDED = 1,
	EXCLUSIVE = 2,
};
typedef enum createmode3 createmode3;
#ifdef __cplusplus
extern "C" bool_t xdr_createmode3(XDR *, createmode3*);
#elif __STDC__
extern  bool_t xdr_createmode3(XDR *, createmode3*);
#else /* Old Style C */
bool_t xdr_createmode3();
#endif /* Old Style C */


struct createhow3 {
	createmode3 mode;
	union {
		sattr3 obj_attributes;
		createverf3 verf;
	} createhow3_u;
};
typedef struct createhow3 createhow3;
#ifdef __cplusplus
extern "C" bool_t xdr_createhow3(XDR *, createhow3*);
#elif __STDC__
extern  bool_t xdr_createhow3(XDR *, createhow3*);
#else /* Old Style C */
bool_t xdr_createhow3();
#endif /* Old Style C */


struct CREATE3args {
	diropargs3 where;
	createhow3 how;
};
typedef struct CREATE3args CREATE3args;
#ifdef __cplusplus
extern "C" bool_t xdr_CREATE3args(XDR *, CREATE3args*);
#elif __STDC__
extern  bool_t xdr_CREATE3args(XDR *, CREATE3args*);
#else /* Old Style C */
bool_t xdr_CREATE3args();
#endif /* Old Style C */


struct CREATE3resok {
	post_op_fh3 obj;
	post_op_attr obj_attributes;
	wcc_data dir_wcc;
};
typedef struct CREATE3resok CREATE3resok;
#ifdef __cplusplus
extern "C" bool_t xdr_CREATE3resok(XDR *, CREATE3resok*);
#elif __STDC__
extern  bool_t xdr_CREATE3resok(XDR *, CREATE3resok*);
#else /* Old Style C */
bool_t xdr_CREATE3resok();
#endif /* Old Style C */


struct CREATE3resfail {
	wcc_data dir_wcc;
};
typedef struct CREATE3resfail CREATE3resfail;
#ifdef __cplusplus
extern "C" bool_t xdr_CREATE3resfail(XDR *, CREATE3resfail*);
#elif __STDC__
extern  bool_t xdr_CREATE3resfail(XDR *, CREATE3resfail*);
#else /* Old Style C */
bool_t xdr_CREATE3resfail();
#endif /* Old Style C */


struct CREATE3res {
	nfsstat3 status;
	union {
		CREATE3resok resok;
		CREATE3resfail resfail;
	} CREATE3res_u;
};
typedef struct CREATE3res CREATE3res;
#ifdef __cplusplus
extern "C" bool_t xdr_CREATE3res(XDR *, CREATE3res*);
#elif __STDC__
extern  bool_t xdr_CREATE3res(XDR *, CREATE3res*);
#else /* Old Style C */
bool_t xdr_CREATE3res();
#endif /* Old Style C */


struct MKDIR3args {
	diropargs3 where;
	sattr3 attributes;
};
typedef struct MKDIR3args MKDIR3args;
#ifdef __cplusplus
extern "C" bool_t xdr_MKDIR3args(XDR *, MKDIR3args*);
#elif __STDC__
extern  bool_t xdr_MKDIR3args(XDR *, MKDIR3args*);
#else /* Old Style C */
bool_t xdr_MKDIR3args();
#endif /* Old Style C */


struct MKDIR3resok {
	post_op_fh3 obj;
	post_op_attr obj_attributes;
	wcc_data dir_wcc;
};
typedef struct MKDIR3resok MKDIR3resok;
#ifdef __cplusplus
extern "C" bool_t xdr_MKDIR3resok(XDR *, MKDIR3resok*);
#elif __STDC__
extern  bool_t xdr_MKDIR3resok(XDR *, MKDIR3resok*);
#else /* Old Style C */
bool_t xdr_MKDIR3resok();
#endif /* Old Style C */


struct MKDIR3resfail {
	wcc_data dir_wcc;
};
typedef struct MKDIR3resfail MKDIR3resfail;
#ifdef __cplusplus
extern "C" bool_t xdr_MKDIR3resfail(XDR *, MKDIR3resfail*);
#elif __STDC__
extern  bool_t xdr_MKDIR3resfail(XDR *, MKDIR3resfail*);
#else /* Old Style C */
bool_t xdr_MKDIR3resfail();
#endif /* Old Style C */


struct MKDIR3res {
	nfsstat3 status;
	union {
		MKDIR3resok resok;
		MKDIR3resfail resfail;
	} MKDIR3res_u;
};
typedef struct MKDIR3res MKDIR3res;
#ifdef __cplusplus
extern "C" bool_t xdr_MKDIR3res(XDR *, MKDIR3res*);
#elif __STDC__
extern  bool_t xdr_MKDIR3res(XDR *, MKDIR3res*);
#else /* Old Style C */
bool_t xdr_MKDIR3res();
#endif /* Old Style C */


struct symlinkdata3 {
	sattr3 symlink_attributes;
	nfspath3 symlink_data;
};
typedef struct symlinkdata3 symlinkdata3;
#ifdef __cplusplus
extern "C" bool_t xdr_symlinkdata3(XDR *, symlinkdata3*);
#elif __STDC__
extern  bool_t xdr_symlinkdata3(XDR *, symlinkdata3*);
#else /* Old Style C */
bool_t xdr_symlinkdata3();
#endif /* Old Style C */


struct SYMLINK3args {
	diropargs3 where;
	symlinkdata3 symlink;
};
typedef struct SYMLINK3args SYMLINK3args;
#ifdef __cplusplus
extern "C" bool_t xdr_SYMLINK3args(XDR *, SYMLINK3args*);
#elif __STDC__
extern  bool_t xdr_SYMLINK3args(XDR *, SYMLINK3args*);
#else /* Old Style C */
bool_t xdr_SYMLINK3args();
#endif /* Old Style C */


struct SYMLINK3resok {
	post_op_fh3 obj;
	post_op_attr obj_attributes;
	wcc_data dir_wcc;
};
typedef struct SYMLINK3resok SYMLINK3resok;
#ifdef __cplusplus
extern "C" bool_t xdr_SYMLINK3resok(XDR *, SYMLINK3resok*);
#elif __STDC__
extern  bool_t xdr_SYMLINK3resok(XDR *, SYMLINK3resok*);
#else /* Old Style C */
bool_t xdr_SYMLINK3resok();
#endif /* Old Style C */


struct SYMLINK3resfail {
	wcc_data dir_wcc;
};
typedef struct SYMLINK3resfail SYMLINK3resfail;
#ifdef __cplusplus
extern "C" bool_t xdr_SYMLINK3resfail(XDR *, SYMLINK3resfail*);
#elif __STDC__
extern  bool_t xdr_SYMLINK3resfail(XDR *, SYMLINK3resfail*);
#else /* Old Style C */
bool_t xdr_SYMLINK3resfail();
#endif /* Old Style C */


struct SYMLINK3res {
	nfsstat3 status;
	union {
		SYMLINK3resok resok;
		SYMLINK3resfail resfail;
	} SYMLINK3res_u;
};
typedef struct SYMLINK3res SYMLINK3res;
#ifdef __cplusplus
extern "C" bool_t xdr_SYMLINK3res(XDR *, SYMLINK3res*);
#elif __STDC__
extern  bool_t xdr_SYMLINK3res(XDR *, SYMLINK3res*);
#else /* Old Style C */
bool_t xdr_SYMLINK3res();
#endif /* Old Style C */


struct devicedata3 {
	sattr3 dev_attributes;
	specdata3 spec;
};
typedef struct devicedata3 devicedata3;
#ifdef __cplusplus
extern "C" bool_t xdr_devicedata3(XDR *, devicedata3*);
#elif __STDC__
extern  bool_t xdr_devicedata3(XDR *, devicedata3*);
#else /* Old Style C */
bool_t xdr_devicedata3();
#endif /* Old Style C */


struct mknoddata3 {
	ftype3 type;
	union {
		devicedata3 device;
		sattr3 pipe_attributes;
	} mknoddata3_u;
};
typedef struct mknoddata3 mknoddata3;
#ifdef __cplusplus
extern "C" bool_t xdr_mknoddata3(XDR *, mknoddata3*);
#elif __STDC__
extern  bool_t xdr_mknoddata3(XDR *, mknoddata3*);
#else /* Old Style C */
bool_t xdr_mknoddata3();
#endif /* Old Style C */


struct MKNOD3args {
	diropargs3 where;
	mknoddata3 what;
};
typedef struct MKNOD3args MKNOD3args;
#ifdef __cplusplus
extern "C" bool_t xdr_MKNOD3args(XDR *, MKNOD3args*);
#elif __STDC__
extern  bool_t xdr_MKNOD3args(XDR *, MKNOD3args*);
#else /* Old Style C */
bool_t xdr_MKNOD3args();
#endif /* Old Style C */


struct MKNOD3resok {
	post_op_fh3 obj;
	post_op_attr obj_attributes;
	wcc_data dir_wcc;
};
typedef struct MKNOD3resok MKNOD3resok;
#ifdef __cplusplus
extern "C" bool_t xdr_MKNOD3resok(XDR *, MKNOD3resok*);
#elif __STDC__
extern  bool_t xdr_MKNOD3resok(XDR *, MKNOD3resok*);
#else /* Old Style C */
bool_t xdr_MKNOD3resok();
#endif /* Old Style C */


struct MKNOD3resfail {
	wcc_data dir_wcc;
};
typedef struct MKNOD3resfail MKNOD3resfail;
#ifdef __cplusplus
extern "C" bool_t xdr_MKNOD3resfail(XDR *, MKNOD3resfail*);
#elif __STDC__
extern  bool_t xdr_MKNOD3resfail(XDR *, MKNOD3resfail*);
#else /* Old Style C */
bool_t xdr_MKNOD3resfail();
#endif /* Old Style C */


struct MKNOD3res {
	nfsstat3 status;
	union {
		MKNOD3resok resok;
		MKNOD3resfail resfail;
	} MKNOD3res_u;
};
typedef struct MKNOD3res MKNOD3res;
#ifdef __cplusplus
extern "C" bool_t xdr_MKNOD3res(XDR *, MKNOD3res*);
#elif __STDC__
extern  bool_t xdr_MKNOD3res(XDR *, MKNOD3res*);
#else /* Old Style C */
bool_t xdr_MKNOD3res();
#endif /* Old Style C */


struct REMOVE3args {
	diropargs3 object;
};
typedef struct REMOVE3args REMOVE3args;
#ifdef __cplusplus
extern "C" bool_t xdr_REMOVE3args(XDR *, REMOVE3args*);
#elif __STDC__
extern  bool_t xdr_REMOVE3args(XDR *, REMOVE3args*);
#else /* Old Style C */
bool_t xdr_REMOVE3args();
#endif /* Old Style C */


struct REMOVE3resok {
	wcc_data dir_wcc;
};
typedef struct REMOVE3resok REMOVE3resok;
#ifdef __cplusplus
extern "C" bool_t xdr_REMOVE3resok(XDR *, REMOVE3resok*);
#elif __STDC__
extern  bool_t xdr_REMOVE3resok(XDR *, REMOVE3resok*);
#else /* Old Style C */
bool_t xdr_REMOVE3resok();
#endif /* Old Style C */


struct REMOVE3resfail {
	wcc_data dir_wcc;
};
typedef struct REMOVE3resfail REMOVE3resfail;
#ifdef __cplusplus
extern "C" bool_t xdr_REMOVE3resfail(XDR *, REMOVE3resfail*);
#elif __STDC__
extern  bool_t xdr_REMOVE3resfail(XDR *, REMOVE3resfail*);
#else /* Old Style C */
bool_t xdr_REMOVE3resfail();
#endif /* Old Style C */


struct REMOVE3res {
	nfsstat3 status;
	union {
		REMOVE3resok resok;
		REMOVE3resfail resfail;
	} REMOVE3res_u;
};
typedef struct REMOVE3res REMOVE3res;
#ifdef __cplusplus
extern "C" bool_t xdr_REMOVE3res(XDR *, REMOVE3res*);
#elif __STDC__
extern  bool_t xdr_REMOVE3res(XDR *, REMOVE3res*);
#else /* Old Style C */
bool_t xdr_REMOVE3res();
#endif /* Old Style C */


struct RMDIR3args {
	diropargs3 object;
};
typedef struct RMDIR3args RMDIR3args;
#ifdef __cplusplus
extern "C" bool_t xdr_RMDIR3args(XDR *, RMDIR3args*);
#elif __STDC__
extern  bool_t xdr_RMDIR3args(XDR *, RMDIR3args*);
#else /* Old Style C */
bool_t xdr_RMDIR3args();
#endif /* Old Style C */


struct RMDIR3resok {
	wcc_data dir_wcc;
};
typedef struct RMDIR3resok RMDIR3resok;
#ifdef __cplusplus
extern "C" bool_t xdr_RMDIR3resok(XDR *, RMDIR3resok*);
#elif __STDC__
extern  bool_t xdr_RMDIR3resok(XDR *, RMDIR3resok*);
#else /* Old Style C */
bool_t xdr_RMDIR3resok();
#endif /* Old Style C */


struct RMDIR3resfail {
	wcc_data dir_wcc;
};
typedef struct RMDIR3resfail RMDIR3resfail;
#ifdef __cplusplus
extern "C" bool_t xdr_RMDIR3resfail(XDR *, RMDIR3resfail*);
#elif __STDC__
extern  bool_t xdr_RMDIR3resfail(XDR *, RMDIR3resfail*);
#else /* Old Style C */
bool_t xdr_RMDIR3resfail();
#endif /* Old Style C */


struct RMDIR3res {
	nfsstat3 status;
	union {
		RMDIR3resok resok;
		RMDIR3resfail resfail;
	} RMDIR3res_u;
};
typedef struct RMDIR3res RMDIR3res;
#ifdef __cplusplus
extern "C" bool_t xdr_RMDIR3res(XDR *, RMDIR3res*);
#elif __STDC__
extern  bool_t xdr_RMDIR3res(XDR *, RMDIR3res*);
#else /* Old Style C */
bool_t xdr_RMDIR3res();
#endif /* Old Style C */


struct RENAME3args {
	diropargs3 from;
	diropargs3 to;
};
typedef struct RENAME3args RENAME3args;
#ifdef __cplusplus
extern "C" bool_t xdr_RENAME3args(XDR *, RENAME3args*);
#elif __STDC__
extern  bool_t xdr_RENAME3args(XDR *, RENAME3args*);
#else /* Old Style C */
bool_t xdr_RENAME3args();
#endif /* Old Style C */


struct RENAME3resok {
	wcc_data fromdir_wcc;
	wcc_data todir_wcc;
};
typedef struct RENAME3resok RENAME3resok;
#ifdef __cplusplus
extern "C" bool_t xdr_RENAME3resok(XDR *, RENAME3resok*);
#elif __STDC__
extern  bool_t xdr_RENAME3resok(XDR *, RENAME3resok*);
#else /* Old Style C */
bool_t xdr_RENAME3resok();
#endif /* Old Style C */


struct RENAME3resfail {
	wcc_data fromdir_wcc;
	wcc_data todir_wcc;
};
typedef struct RENAME3resfail RENAME3resfail;
#ifdef __cplusplus
extern "C" bool_t xdr_RENAME3resfail(XDR *, RENAME3resfail*);
#elif __STDC__
extern  bool_t xdr_RENAME3resfail(XDR *, RENAME3resfail*);
#else /* Old Style C */
bool_t xdr_RENAME3resfail();
#endif /* Old Style C */


struct RENAME3res {
	nfsstat3 status;
	union {
		RENAME3resok resok;
		RENAME3resfail resfail;
	} RENAME3res_u;
};
typedef struct RENAME3res RENAME3res;
#ifdef __cplusplus
extern "C" bool_t xdr_RENAME3res(XDR *, RENAME3res*);
#elif __STDC__
extern  bool_t xdr_RENAME3res(XDR *, RENAME3res*);
#else /* Old Style C */
bool_t xdr_RENAME3res();
#endif /* Old Style C */


struct LINK3args {
	nfs_fh3 file;
	diropargs3 link;
};
typedef struct LINK3args LINK3args;
#ifdef __cplusplus
extern "C" bool_t xdr_LINK3args(XDR *, LINK3args*);
#elif __STDC__
extern  bool_t xdr_LINK3args(XDR *, LINK3args*);
#else /* Old Style C */
bool_t xdr_LINK3args();
#endif /* Old Style C */


struct LINK3resok {
	post_op_attr file_attributes;
	wcc_data linkdir_wcc;
};
typedef struct LINK3resok LINK3resok;
#ifdef __cplusplus
extern "C" bool_t xdr_LINK3resok(XDR *, LINK3resok*);
#elif __STDC__
extern  bool_t xdr_LINK3resok(XDR *, LINK3resok*);
#else /* Old Style C */
bool_t xdr_LINK3resok();
#endif /* Old Style C */


struct LINK3resfail {
	post_op_attr file_attributes;
	wcc_data linkdir_wcc;
};
typedef struct LINK3resfail LINK3resfail;
#ifdef __cplusplus
extern "C" bool_t xdr_LINK3resfail(XDR *, LINK3resfail*);
#elif __STDC__
extern  bool_t xdr_LINK3resfail(XDR *, LINK3resfail*);
#else /* Old Style C */
bool_t xdr_LINK3resfail();
#endif /* Old Style C */


struct LINK3res {
	nfsstat3 status;
	union {
		LINK3resok resok;
		LINK3resfail resfail;
	} LINK3res_u;
};
typedef struct LINK3res LINK3res;
#ifdef __cplusplus
extern "C" bool_t xdr_LINK3res(XDR *, LINK3res*);
#elif __STDC__
extern  bool_t xdr_LINK3res(XDR *, LINK3res*);
#else /* Old Style C */
bool_t xdr_LINK3res();
#endif /* Old Style C */


struct READDIR3args {
	nfs_fh3 dir;
	cookie3 cookie;
	cookieverf3 cookieverf;
	count3 count;
};
typedef struct READDIR3args READDIR3args;
#ifdef __cplusplus
extern "C" bool_t xdr_READDIR3args(XDR *, READDIR3args*);
#elif __STDC__
extern  bool_t xdr_READDIR3args(XDR *, READDIR3args*);
#else /* Old Style C */
bool_t xdr_READDIR3args();
#endif /* Old Style C */


struct entry3 {
	fileid3 fileid;
	filename3 name;
	cookie3 cookie;
	struct entry3 *nextentry;
};
typedef struct entry3 entry3;
#ifdef __cplusplus
extern "C" bool_t xdr_entry3(XDR *, entry3*);
#elif __STDC__
extern  bool_t xdr_entry3(XDR *, entry3*);
#else /* Old Style C */
bool_t xdr_entry3();
#endif /* Old Style C */


struct dirlist3 {
	entry3 *entries;
	bool_t eof;
};
typedef struct dirlist3 dirlist3;
#ifdef __cplusplus
extern "C" bool_t xdr_dirlist3(XDR *, dirlist3*);
#elif __STDC__
extern  bool_t xdr_dirlist3(XDR *, dirlist3*);
#else /* Old Style C */
bool_t xdr_dirlist3();
#endif /* Old Style C */


struct READDIR3resok {
	post_op_attr dir_attributes;
	cookieverf3 cookieverf;
	dirlist3 reply;
};
typedef struct READDIR3resok READDIR3resok;
#ifdef __cplusplus
extern "C" bool_t xdr_READDIR3resok(XDR *, READDIR3resok*);
#elif __STDC__
extern  bool_t xdr_READDIR3resok(XDR *, READDIR3resok*);
#else /* Old Style C */
bool_t xdr_READDIR3resok();
#endif /* Old Style C */


struct READDIR3resfail {
	post_op_attr dir_attributes;
};
typedef struct READDIR3resfail READDIR3resfail;
#ifdef __cplusplus
extern "C" bool_t xdr_READDIR3resfail(XDR *, READDIR3resfail*);
#elif __STDC__
extern  bool_t xdr_READDIR3resfail(XDR *, READDIR3resfail*);
#else /* Old Style C */
bool_t xdr_READDIR3resfail();
#endif /* Old Style C */


struct READDIR3res {
	nfsstat3 status;
	union {
		READDIR3resok resok;
		READDIR3resfail resfail;
	} READDIR3res_u;
};
typedef struct READDIR3res READDIR3res;
#ifdef __cplusplus
extern "C" bool_t xdr_READDIR3res(XDR *, READDIR3res*);
#elif __STDC__
extern  bool_t xdr_READDIR3res(XDR *, READDIR3res*);
#else /* Old Style C */
bool_t xdr_READDIR3res();
#endif /* Old Style C */


struct READDIRPLUS3args {
	nfs_fh3 dir;
	cookie3 cookie;
	cookieverf3 cookieverf;
	count3 dircount;
	count3 maxcount;
};
typedef struct READDIRPLUS3args READDIRPLUS3args;
#ifdef __cplusplus
extern "C" bool_t xdr_READDIRPLUS3args(XDR *, READDIRPLUS3args*);
#elif __STDC__
extern  bool_t xdr_READDIRPLUS3args(XDR *, READDIRPLUS3args*);
#else /* Old Style C */
bool_t xdr_READDIRPLUS3args();
#endif /* Old Style C */


struct entryplus3 {
	fileid3 fileid;
	filename3 name;
	cookie3 cookie;
	post_op_attr name_attributes;
	post_op_fh3 name_handle;
	struct entryplus3 *nextentry;
};
typedef struct entryplus3 entryplus3;
#ifdef __cplusplus
extern "C" bool_t xdr_entryplus3(XDR *, entryplus3*);
#elif __STDC__
extern  bool_t xdr_entryplus3(XDR *, entryplus3*);
#else /* Old Style C */
bool_t xdr_entryplus3();
#endif /* Old Style C */


struct dirlistplus3 {
	entryplus3 *entries;
	bool_t eof;
};
typedef struct dirlistplus3 dirlistplus3;
#ifdef __cplusplus
extern "C" bool_t xdr_dirlistplus3(XDR *, dirlistplus3*);
#elif __STDC__
extern  bool_t xdr_dirlistplus3(XDR *, dirlistplus3*);
#else /* Old Style C */
bool_t xdr_dirlistplus3();
#endif /* Old Style C */


struct READDIRPLUS3resok {
	post_op_attr dir_attributes;
	cookieverf3 cookieverf;
	dirlistplus3 reply;
};
typedef struct READDIRPLUS3resok READDIRPLUS3resok;
#ifdef __cplusplus
extern "C" bool_t xdr_READDIRPLUS3resok(XDR *, READDIRPLUS3resok*);
#elif __STDC__
extern  bool_t xdr_READDIRPLUS3resok(XDR *, READDIRPLUS3resok*);
#else /* Old Style C */
bool_t xdr_READDIRPLUS3resok();
#endif /* Old Style C */


struct READDIRPLUS3resfail {
	post_op_attr dir_attributes;
};
typedef struct READDIRPLUS3resfail READDIRPLUS3resfail;
#ifdef __cplusplus
extern "C" bool_t xdr_READDIRPLUS3resfail(XDR *, READDIRPLUS3resfail*);
#elif __STDC__
extern  bool_t xdr_READDIRPLUS3resfail(XDR *, READDIRPLUS3resfail*);
#else /* Old Style C */
bool_t xdr_READDIRPLUS3resfail();
#endif /* Old Style C */


struct READDIRPLUS3res {
	nfsstat3 status;
	union {
		READDIRPLUS3resok resok;
		READDIRPLUS3resfail resfail;
	} READDIRPLUS3res_u;
};
typedef struct READDIRPLUS3res READDIRPLUS3res;
#ifdef __cplusplus
extern "C" bool_t xdr_READDIRPLUS3res(XDR *, READDIRPLUS3res*);
#elif __STDC__
extern  bool_t xdr_READDIRPLUS3res(XDR *, READDIRPLUS3res*);
#else /* Old Style C */
bool_t xdr_READDIRPLUS3res();
#endif /* Old Style C */


struct FSSTAT3args {
	nfs_fh3 fsroot;
};
typedef struct FSSTAT3args FSSTAT3args;
#ifdef __cplusplus
extern "C" bool_t xdr_FSSTAT3args(XDR *, FSSTAT3args*);
#elif __STDC__
extern  bool_t xdr_FSSTAT3args(XDR *, FSSTAT3args*);
#else /* Old Style C */
bool_t xdr_FSSTAT3args();
#endif /* Old Style C */


struct FSSTAT3resok {
	post_op_attr obj_attributes;
	size3 tbytes;
	size3 fbytes;
	size3 abytes;
	size3 tfiles;
	size3 ffiles;
	size3 afiles;
	uint32 invarsec;
};
typedef struct FSSTAT3resok FSSTAT3resok;
#ifdef __cplusplus
extern "C" bool_t xdr_FSSTAT3resok(XDR *, FSSTAT3resok*);
#elif __STDC__
extern  bool_t xdr_FSSTAT3resok(XDR *, FSSTAT3resok*);
#else /* Old Style C */
bool_t xdr_FSSTAT3resok();
#endif /* Old Style C */


struct FSSTAT3resfail {
	post_op_attr obj_attributes;
};
typedef struct FSSTAT3resfail FSSTAT3resfail;
#ifdef __cplusplus
extern "C" bool_t xdr_FSSTAT3resfail(XDR *, FSSTAT3resfail*);
#elif __STDC__
extern  bool_t xdr_FSSTAT3resfail(XDR *, FSSTAT3resfail*);
#else /* Old Style C */
bool_t xdr_FSSTAT3resfail();
#endif /* Old Style C */


struct FSSTAT3res {
	nfsstat3 status;
	union {
		FSSTAT3resok resok;
		FSSTAT3resfail resfail;
	} FSSTAT3res_u;
};
typedef struct FSSTAT3res FSSTAT3res;
#ifdef __cplusplus
extern "C" bool_t xdr_FSSTAT3res(XDR *, FSSTAT3res*);
#elif __STDC__
extern  bool_t xdr_FSSTAT3res(XDR *, FSSTAT3res*);
#else /* Old Style C */
bool_t xdr_FSSTAT3res();
#endif /* Old Style C */

#define FSF3_LINK 0x0001
#define FSF3_SYMLINK 0x0002
#define FSF3_HOMOGENEOUS 0x0008
#define FSF3_CANSETTIME 0x0010

struct FSINFO3args {
	nfs_fh3 fsroot;
};
typedef struct FSINFO3args FSINFO3args;
#ifdef __cplusplus
extern "C" bool_t xdr_FSINFO3args(XDR *, FSINFO3args*);
#elif __STDC__
extern  bool_t xdr_FSINFO3args(XDR *, FSINFO3args*);
#else /* Old Style C */
bool_t xdr_FSINFO3args();
#endif /* Old Style C */


struct FSINFO3resok {
	post_op_attr obj_attributes;
	uint32 rtmax;
	uint32 rtpref;
	uint32 rtmult;
	uint32 wtmax;
	uint32 wtpref;
	uint32 wtmult;
	uint32 dtpref;
	size3 maxfilesize;
	nfstime3 time_delta;
	uint32 properties;
};
typedef struct FSINFO3resok FSINFO3resok;
#ifdef __cplusplus
extern "C" bool_t xdr_FSINFO3resok(XDR *, FSINFO3resok*);
#elif __STDC__
extern  bool_t xdr_FSINFO3resok(XDR *, FSINFO3resok*);
#else /* Old Style C */
bool_t xdr_FSINFO3resok();
#endif /* Old Style C */


struct FSINFO3resfail {
	post_op_attr obj_attributes;
};
typedef struct FSINFO3resfail FSINFO3resfail;
#ifdef __cplusplus
extern "C" bool_t xdr_FSINFO3resfail(XDR *, FSINFO3resfail*);
#elif __STDC__
extern  bool_t xdr_FSINFO3resfail(XDR *, FSINFO3resfail*);
#else /* Old Style C */
bool_t xdr_FSINFO3resfail();
#endif /* Old Style C */


struct FSINFO3res {
	nfsstat3 status;
	union {
		FSINFO3resok resok;
		FSINFO3resfail resfail;
	} FSINFO3res_u;
};
typedef struct FSINFO3res FSINFO3res;
#ifdef __cplusplus
extern "C" bool_t xdr_FSINFO3res(XDR *, FSINFO3res*);
#elif __STDC__
extern  bool_t xdr_FSINFO3res(XDR *, FSINFO3res*);
#else /* Old Style C */
bool_t xdr_FSINFO3res();
#endif /* Old Style C */


struct PATHCONF3args {
	nfs_fh3 object;
};
typedef struct PATHCONF3args PATHCONF3args;
#ifdef __cplusplus
extern "C" bool_t xdr_PATHCONF3args(XDR *, PATHCONF3args*);
#elif __STDC__
extern  bool_t xdr_PATHCONF3args(XDR *, PATHCONF3args*);
#else /* Old Style C */
bool_t xdr_PATHCONF3args();
#endif /* Old Style C */


struct PATHCONF3resok {
	post_op_attr obj_attributes;
	uint32 linkmax;
	uint32 name_max;
	bool_t no_trunc;
	bool_t chown_restricted;
	bool_t case_insensitive;
	bool_t case_preserving;
};
typedef struct PATHCONF3resok PATHCONF3resok;
#ifdef __cplusplus
extern "C" bool_t xdr_PATHCONF3resok(XDR *, PATHCONF3resok*);
#elif __STDC__
extern  bool_t xdr_PATHCONF3resok(XDR *, PATHCONF3resok*);
#else /* Old Style C */
bool_t xdr_PATHCONF3resok();
#endif /* Old Style C */


struct PATHCONF3resfail {
	post_op_attr obj_attributes;
};
typedef struct PATHCONF3resfail PATHCONF3resfail;
#ifdef __cplusplus
extern "C" bool_t xdr_PATHCONF3resfail(XDR *, PATHCONF3resfail*);
#elif __STDC__
extern  bool_t xdr_PATHCONF3resfail(XDR *, PATHCONF3resfail*);
#else /* Old Style C */
bool_t xdr_PATHCONF3resfail();
#endif /* Old Style C */


struct PATHCONF3res {
	nfsstat3 status;
	union {
		PATHCONF3resok resok;
		PATHCONF3resfail resfail;
	} PATHCONF3res_u;
};
typedef struct PATHCONF3res PATHCONF3res;
#ifdef __cplusplus
extern "C" bool_t xdr_PATHCONF3res(XDR *, PATHCONF3res*);
#elif __STDC__
extern  bool_t xdr_PATHCONF3res(XDR *, PATHCONF3res*);
#else /* Old Style C */
bool_t xdr_PATHCONF3res();
#endif /* Old Style C */


struct COMMIT3args {
	nfs_fh3 file;
	offset3 offset;
	count3 count;
};
typedef struct COMMIT3args COMMIT3args;
#ifdef __cplusplus
extern "C" bool_t xdr_COMMIT3args(XDR *, COMMIT3args*);
#elif __STDC__
extern  bool_t xdr_COMMIT3args(XDR *, COMMIT3args*);
#else /* Old Style C */
bool_t xdr_COMMIT3args();
#endif /* Old Style C */


struct COMMIT3resok {
	wcc_data file_wcc;
	writeverf3 verf;
};
typedef struct COMMIT3resok COMMIT3resok;
#ifdef __cplusplus
extern "C" bool_t xdr_COMMIT3resok(XDR *, COMMIT3resok*);
#elif __STDC__
extern  bool_t xdr_COMMIT3resok(XDR *, COMMIT3resok*);
#else /* Old Style C */
bool_t xdr_COMMIT3resok();
#endif /* Old Style C */


struct COMMIT3resfail {
	wcc_data file_wcc;
};
typedef struct COMMIT3resfail COMMIT3resfail;
#ifdef __cplusplus
extern "C" bool_t xdr_COMMIT3resfail(XDR *, COMMIT3resfail*);
#elif __STDC__
extern  bool_t xdr_COMMIT3resfail(XDR *, COMMIT3resfail*);
#else /* Old Style C */
bool_t xdr_COMMIT3resfail();
#endif /* Old Style C */


struct COMMIT3res {
	nfsstat3 status;
	union {
		COMMIT3resok resok;
		COMMIT3resfail resfail;
	} COMMIT3res_u;
};
typedef struct COMMIT3res COMMIT3res;
#ifdef __cplusplus
extern "C" bool_t xdr_COMMIT3res(XDR *, COMMIT3res*);
#elif __STDC__
extern  bool_t xdr_COMMIT3res(XDR *, COMMIT3res*);
#else /* Old Style C */
bool_t xdr_COMMIT3res();
#endif /* Old Style C */


#define NFS_PROGRAM ((rpc_uint)100003)
#define NFS_V3 ((rpc_uint)3)

#ifdef __cplusplus
#define NFSPROC3_NULL ((rpc_uint)0)
extern "C" void * nfsproc3_null_3(CLIENT *);
extern "C" void * nfsproc3_null_3_svc(struct svc_req *);
#define NFSPROC3_GETATTR ((rpc_uint)1)
extern "C" GETATTR3res * nfsproc3_getattr_3(GETATTR3args , CLIENT *);
extern "C" GETATTR3res * nfsproc3_getattr_3_svc(GETATTR3args , struct svc_req *);
#define NFSPROC3_SETATTR ((rpc_uint)2)
extern "C" SETATTR3res * nfsproc3_setattr_3(SETATTR3args , CLIENT *);
extern "C" SETATTR3res * nfsproc3_setattr_3_svc(SETATTR3args , struct svc_req *);
#define NFSPROC3_LOOKUP ((rpc_uint)3)
extern "C" LOOKUP3res * nfsproc3_lookup_3(LOOKUP3args , CLIENT *);
extern "C" LOOKUP3res * nfsproc3_lookup_3_svc(LOOKUP3args , struct svc_req *);
#define NFSPROC3_ACCESS ((rpc_uint)4)
extern "C" ACCESS3res * nfsproc3_access_3(ACCESS3args , CLIENT *);
extern "C" ACCESS3res * nfsproc3_access_3_svc(ACCESS3args , struct svc_req *);
#define NFSPROC3_READLINK ((rpc_uint)5)
extern "C" READLINK3res * nfsproc3_readlink_3(READLINK3args , CLIENT *);
extern "C" READLINK3res * nfsproc3_readlink_3_svc(READLINK3args , struct svc_req *);
#define NFSPROC3_READ ((rpc_uint)6)
extern "C" READ3res * nfsproc3_read_3(READ3args , CLIENT *);
extern "C" READ3res * nfsproc3_read_3_svc(READ3args , struct svc_req *);
#define NFSPROC3_WRITE ((rpc_uint)7)
extern "C" WRITE3res * nfsproc3_write_3(WRITE3args , CLIENT *);
extern "C" WRITE3res * nfsproc3_write_3_svc(WRITE3args , struct svc_req *);
#define NFSPROC3_CREATE ((rpc_uint)8)
extern "C" CREATE3res * nfsproc3_create_3(CREATE3args , CLIENT *);
extern "C" CREATE3res * nfsproc3_create_3_svc(CREATE3args , struct svc_req *);
#define NFSPROC3_MKDIR ((rpc_uint)9)
extern "C" MKDIR3res * nfsproc3_mkdir_3(MKDIR3args , CLIENT *);
extern "C" MKDIR3res * nfsproc3_mkdir_3_svc(MKDIR3args , struct svc_req *);
#define NFSPROC3_SYMLINK ((rpc_uint)10)
extern "C" SYMLINK3res * nfsproc3_symlink_3(SYMLINK3args , CLIENT *);
extern "C" SYMLINK3res * nfsproc3_symlink_3_svc(SYMLINK3args , struct svc_req *);
#define NFSPROC3_MKNOD ((rpc_uint)11)
extern "C" MKNOD3res * nfsproc3_mknod_3(MKNOD3args , CLIENT *);
extern "C" MKNOD3res * nfsproc3_mknod_3_svc(MKNOD3args , struct svc_req *);
#define NFSPROC3_REMOVE ((rpc_uint)12)
extern "C" REMOVE3res * nfsproc3_remove_3(REMOVE3args , CLIENT *);
extern "C" REMOVE3res * nfsproc3_remove_3_svc(REMOVE3args , struct svc_req *);
#define NFSPROC3_RMDIR ((rpc_uint)13)
extern "C" RMDIR3res * nfsproc3_rmdir_3(RMDIR3args , CLIENT *);
extern "C" RMDIR3res * nfsproc3_rmdir_3_svc(RMDIR3args , struct svc_req *);
#define NFSPROC3_RENAME ((rpc_uint)14)
extern "C" RENAME3res * nfsproc3_rename_3(RENAME3args , CLIENT *);
extern "C" RENAME3res * nfsproc3_rename_3_svc(RENAME3args , struct svc_req *);
#define NFSPROC3_LINK ((rpc_uint)15)
extern "C" LINK3res * nfsproc3_link_3(LINK3args , CLIENT *);
extern "C" LINK3res * nfsproc3_link_3_svc(LINK3args , struct svc_req *);
#define NFSPROC3_READDIR ((rpc_uint)16)
extern "C" READDIR3res * nfsproc3_readdir_3(READDIR3args , CLIENT *);
extern "C" READDIR3res * nfsproc3_readdir_3_svc(READDIR3args , struct svc_req *);
#define NFSPROC3_READDIRPLUS ((rpc_uint)17)
extern "C" READDIRPLUS3res * nfsproc3_readdirplus_3(READDIRPLUS3args , CLIENT *);
extern "C" READDIRPLUS3res * nfsproc3_readdirplus_3_svc(READDIRPLUS3args , struct svc_req *);
#define NFSPROC3_FSSTAT ((rpc_uint)18)
extern "C" FSSTAT3res * nfsproc3_fsstat_3(FSSTAT3args , CLIENT *);
extern "C" FSSTAT3res * nfsproc3_fsstat_3_svc(FSSTAT3args , struct svc_req *);
#define NFSPROC3_FSINFO ((rpc_uint)19)
extern "C" FSINFO3res * nfsproc3_fsinfo_3(FSINFO3args , CLIENT *);
extern "C" FSINFO3res * nfsproc3_fsinfo_3_svc(FSINFO3args , struct svc_req *);
#define NFSPROC3_PATHCONF ((rpc_uint)20)
extern "C" PATHCONF3res * nfsproc3_pathconf_3(PATHCONF3args , CLIENT *);
extern "C" PATHCONF3res * nfsproc3_pathconf_3_svc(PATHCONF3args , struct svc_req *);
#define NFSPROC3_COMMIT ((rpc_uint)21)
extern "C" COMMIT3res * nfsproc3_commit_3(COMMIT3args , CLIENT *);
extern "C" COMMIT3res * nfsproc3_commit_3_svc(COMMIT3args , struct svc_req *);

#elif __STDC__
#define NFSPROC3_NULL ((rpc_uint)0)
extern  void * nfsproc3_null_3(CLIENT *);
extern  void * nfsproc3_null_3_svc(struct svc_req *);
#define NFSPROC3_GETATTR ((rpc_uint)1)
extern  GETATTR3res * nfsproc3_getattr_3(GETATTR3args , CLIENT *);
extern  GETATTR3res * nfsproc3_getattr_3_svc(GETATTR3args , struct svc_req *);
#define NFSPROC3_SETATTR ((rpc_uint)2)
extern  SETATTR3res * nfsproc3_setattr_3(SETATTR3args , CLIENT *);
extern  SETATTR3res * nfsproc3_setattr_3_svc(SETATTR3args , struct svc_req *);
#define NFSPROC3_LOOKUP ((rpc_uint)3)
extern  LOOKUP3res * nfsproc3_lookup_3(LOOKUP3args , CLIENT *);
extern  LOOKUP3res * nfsproc3_lookup_3_svc(LOOKUP3args , struct svc_req *);
#define NFSPROC3_ACCESS ((rpc_uint)4)
extern  ACCESS3res * nfsproc3_access_3(ACCESS3args , CLIENT *);
extern  ACCESS3res * nfsproc3_access_3_svc(ACCESS3args , struct svc_req *);
#define NFSPROC3_READLINK ((rpc_uint)5)
extern  READLINK3res * nfsproc3_readlink_3(READLINK3args , CLIENT *);
extern  READLINK3res * nfsproc3_readlink_3_svc(READLINK3args , struct svc_req *);
#define NFSPROC3_READ ((rpc_uint)6)
extern  READ3res * nfsproc3_read_3(READ3args , CLIENT *);
extern  READ3res * nfsproc3_read_3_svc(READ3args , struct svc_req *);
#define NFSPROC3_WRITE ((rpc_uint)7)
extern  WRITE3res * nfsproc3_write_3(WRITE3args , CLIENT *);
extern  WRITE3res * nfsproc3_write_3_svc(WRITE3args , struct svc_req *);
#define NFSPROC3_CREATE ((rpc_uint)8)
extern  CREATE3res * nfsproc3_create_3(CREATE3args , CLIENT *);
extern  CREATE3res * nfsproc3_create_3_svc(CREATE3args , struct svc_req *);
#define NFSPROC3_MKDIR ((rpc_uint)9)
extern  MKDIR3res * nfsproc3_mkdir_3(MKDIR3args , CLIENT *);
extern  MKDIR3res * nfsproc3_mkdir_3_svc(MKDIR3args , struct svc_req *);
#define NFSPROC3_SYMLINK ((rpc_uint)10)
extern  SYMLINK3res * nfsproc3_symlink_3(SYMLINK3args , CLIENT *);
extern  SYMLINK3res * nfsproc3_symlink_3_svc(SYMLINK3args , struct svc_req *);
#define NFSPROC3_MKNOD ((rpc_uint)11)
extern  MKNOD3res * nfsproc3_mknod_3(MKNOD3args , CLIENT *);
extern  MKNOD3res * nfsproc3_mknod_3_svc(MKNOD3args , struct svc_req *);
#define NFSPROC3_REMOVE ((rpc_uint)12)
extern  REMOVE3res * nfsproc3_remove_3(REMOVE3args , CLIENT *);
extern  REMOVE3res * nfsproc3_remove_3_svc(REMOVE3args , struct svc_req *);
#define NFSPROC3_RMDIR ((rpc_uint)13)
extern  RMDIR3res * nfsproc3_rmdir_3(RMDIR3args , CLIENT *);
extern  RMDIR3res * nfsproc3_rmdir_3_svc(RMDIR3args , struct svc_req *);
#define NFSPROC3_RENAME ((rpc_uint)14)
extern  RENAME3res * nfsproc3_rename_3(RENAME3args , CLIENT *);
extern  RENAME3res * nfsproc3_rename_3_svc(RENAME3args , struct svc_req *);
#define NFSPROC3_LINK ((rpc_uint)15)
extern  LINK3res * nfsproc3_link_3(LINK3args , CLIENT *);
extern  LINK3res * nfsproc3_link_3_svc(LINK3args , struct svc_req *);
#define NFSPROC3_READDIR ((rpc_uint)16)
extern  READDIR3res * nfsproc3_readdir_3(READDIR3args , CLIENT *);
extern  READDIR3res * nfsproc3_readdir_3_svc(READDIR3args , struct svc_req *);
#define NFSPROC3_READDIRPLUS ((rpc_uint)17)
extern  READDIRPLUS3res * nfsproc3_readdirplus_3(READDIRPLUS3args , CLIENT *);
extern  READDIRPLUS3res * nfsproc3_readdirplus_3_svc(READDIRPLUS3args , struct svc_req *);
#define NFSPROC3_FSSTAT ((rpc_uint)18)
extern  FSSTAT3res * nfsproc3_fsstat_3(FSSTAT3args , CLIENT *);
extern  FSSTAT3res * nfsproc3_fsstat_3_svc(FSSTAT3args , struct svc_req *);
#define NFSPROC3_FSINFO ((rpc_uint)19)
extern  FSINFO3res * nfsproc3_fsinfo_3(FSINFO3args , CLIENT *);
extern  FSINFO3res * nfsproc3_fsinfo_3_svc(FSINFO3args , struct svc_req *);
#define NFSPROC3_PATHCONF ((rpc_uint)20)
extern  PATHCONF3res * nfsproc3_pathconf_3(PATHCONF3args , CLIENT *);
extern  PATHCONF3res * nfsproc3_pathconf_3_svc(PATHCONF3args , struct svc_req *);
#define NFSPROC3_COMMIT ((rpc_uint)21)
extern  COMMIT3res * nfsproc3_commit_3(COMMIT3args , CLIENT *);
extern  COMMIT3res * nfsproc3_commit_3_svc(COMMIT3args , struct svc_req *);

#else /* Old Style C */
#define NFSPROC3_NULL ((rpc_uint)0)
extern  void * nfsproc3_null_3();
extern  void * nfsproc3_null_3_svc();
#define NFSPROC3_GETATTR ((rpc_uint)1)
extern  GETATTR3res * nfsproc3_getattr_3();
extern  GETATTR3res * nfsproc3_getattr_3_svc();
#define NFSPROC3_SETATTR ((rpc_uint)2)
extern  SETATTR3res * nfsproc3_setattr_3();
extern  SETATTR3res * nfsproc3_setattr_3_svc();
#define NFSPROC3_LOOKUP ((rpc_uint)3)
extern  LOOKUP3res * nfsproc3_lookup_3();
extern  LOOKUP3res * nfsproc3_lookup_3_svc();
#define NFSPROC3_ACCESS ((rpc_uint)4)
extern  ACCESS3res * nfsproc3_access_3();
extern  ACCESS3res * nfsproc3_access_3_svc();
#define NFSPROC3_READLINK ((rpc_uint)5)
extern  READLINK3res * nfsproc3_readlink_3();
extern  READLINK3res * nfsproc3_readlink_3_svc();
#define NFSPROC3_READ ((rpc_uint)6)
extern  READ3res * nfsproc3_read_3();
extern  READ3res * nfsproc3_read_3_svc();
#define NFSPROC3_WRITE ((rpc_uint)7)
extern  WRITE3res * nfsproc3_write_3();
extern  WRITE3res * nfsproc3_write_3_svc();
#define NFSPROC3_CREATE ((rpc_uint)8)
extern  CREATE3res * nfsproc3_create_3();
extern  CREATE3res * nfsproc3_create_3_svc();
#define NFSPROC3_MKDIR ((rpc_uint)9)
extern  MKDIR3res * nfsproc3_mkdir_3();
extern  MKDIR3res * nfsproc3_mkdir_3_svc();
#define NFSPROC3_SYMLINK ((rpc_uint)10)
extern  SYMLINK3res * nfsproc3_symlink_3();
extern  SYMLINK3res * nfsproc3_symlink_3_svc();
#define NFSPROC3_MKNOD ((rpc_uint)11)
extern  MKNOD3res * nfsproc3_mknod_3();
extern  MKNOD3res * nfsproc3_mknod_3_svc();
#define NFSPROC3_REMOVE ((rpc_uint)12)
extern  REMOVE3res * nfsproc3_remove_3();
extern  REMOVE3res * nfsproc3_remove_3_svc();
#define NFSPROC3_RMDIR ((rpc_uint)13)
extern  RMDIR3res * nfsproc3_rmdir_3();
extern  RMDIR3res * nfsproc3_rmdir_3_svc();
#define NFSPROC3_RENAME ((rpc_uint)14)
extern  RENAME3res * nfsproc3_rename_3();
extern  RENAME3res * nfsproc3_rename_3_svc();
#define NFSPROC3_LINK ((rpc_uint)15)
extern  LINK3res * nfsproc3_link_3();
extern  LINK3res * nfsproc3_link_3_svc();
#define NFSPROC3_READDIR ((rpc_uint)16)
extern  READDIR3res * nfsproc3_readdir_3();
extern  READDIR3res * nfsproc3_readdir_3_svc();
#define NFSPROC3_READDIRPLUS ((rpc_uint)17)
extern  READDIRPLUS3res * nfsproc3_readdirplus_3();
extern  READDIRPLUS3res * nfsproc3_readdirplus_3_svc();
#define NFSPROC3_FSSTAT ((rpc_uint)18)
extern  FSSTAT3res * nfsproc3_fsstat_3();
extern  FSSTAT3res * nfsproc3_fsstat_3_svc();
#define NFSPROC3_FSINFO ((rpc_uint)19)
extern  FSINFO3res * nfsproc3_fsinfo_3();
extern  FSINFO3res * nfsproc3_fsinfo_3_svc();
#define NFSPROC3_PATHCONF ((rpc_uint)20)
extern  PATHCONF3res * nfsproc3_pathconf_3();
extern  PATHCONF3res * nfsproc3_pathconf_3_svc();
#define NFSPROC3_COMMIT ((rpc_uint)21)
extern  COMMIT3res * nfsproc3_commit_3();
extern  COMMIT3res * nfsproc3_commit_3_svc();
#endif /* Old Style C */

#endif /* !_NFS_H_RPCGEN */
