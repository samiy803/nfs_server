#include "../nfs.h"

using namespace std;

/*
SYNOPSIS

    READLINK3res NFSPROC3_READLINK(READLINK3args) = 5;

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

DESCRIPTION

    Procedure READLINK reads the data associated with a
    symbolic link.  The data is an ASCII string that is opaque
    to the server.  That is, whether created by the NFS
    version 3 protocol software from a client or created
    locally on the server, the data in a symbolic link is not
    interpreted when created, but is simply stored. On entry,
    the arguments in READLINK3args are:

    symlink
        The file handle for a symbolic link (file system object
        of type NF3LNK).

    On successful return, READLINK3res.status is NFS3_OK and
    READLINK3res.resok contains:

    data
        The data associated with the symbolic link.

    symlink_attributes
        The post-operation attributes for the symbolic link.

    Otherwise, READLINK3res.status contains the error on
    failure and READLINK3res.resfail contains the following:

    symlink_attributes
        The post-operation attributes for the symbolic link.

IMPLEMENTATION

    A symbolic link is nominally a pointer to another file.
    The data is not necessarily interpreted by the server,
    just stored in the file.  It is possible for a client
    implementation to store a path name that is not meaningful
    to the server operating system in a symbolic link.  A
    READLINK operation returns the data to the client for
    interpretation. If different implementations want to share
    access to symbolic links, then they must agree on the
    interpretation of the data in the symbolic link.

    The READLINK operation is only allowed on objects of type,
    NF3LNK.  The server should return the error,
    NFS3ERR_INVAL, if the object is not of type, NF3LNK.
    (Note: The X/Open XNFS Specification for the NFS version 2
    protocol defined the error status in this case as
    NFSERR_NXIO. This is inconsistent with existing server
    practice.)

ERRORS

    NFS3ERR_IO
    NFS3ERR_INVAL
    NFS3ERR_ACCES
    NFS3ERR_STALE
    NFS3ERR_BADHANDLE
    NFS3ERR_NOTSUPP
    NFS3ERR_SERVERFAULT

SEE ALSO

    READLINK, SYMLINK.
*/
READLINK3res *
nfsproc3_readlink_3_svc(READLINK3args arg1,  struct svc_req *rqstp)
{

	static READLINK3res  result;

	/*
	 * insert server code here
	 */

	return(&result);
}