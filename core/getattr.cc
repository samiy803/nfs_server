#include "../nfs.h"

using namespace std;

/*
SYNOPSIS

    GETATTR3res NFSPROC3_GETATTR(GETATTR3args) = 1;

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

DESCRIPTION

    Procedure GETATTR retrieves the attributes for a specified
    file system object. The object is identified by the file
    handle that the server returned as part of the response
    from a LOOKUP, CREATE, MKDIR, SYMLINK, MKNOD, or
    READDIRPLUS procedure (or from the MOUNT service,
    described elsewhere). On entry, the arguments in
    GETATTR3args are:

    object
        The file handle of an object whose attributes are to be
        retrieved.

    On successful return, GETATTR3res.status is NFS3_OK and
    GETATTR3res.resok contains:

    obj_attributes
        The attributes for the object.

    Otherwise, GETATTR3res.status contains the error on failure and
    no other results are returned.

IMPLEMENTATION

    The attributes of file system objects is a point of major
    disagreement between different operating systems. Servers
    should make a best attempt to support all of the
    attributes in the fattr3 structure so that clients can
    count on this as a common ground. Some mapping may be
    required to map local attributes to those in the fattr3
    structure.

    Today, most client NFS version 3 protocol implementations
    implement a time-bounded attribute caching scheme to
    reduce over-the-wire attribute checks.

ERRORS

    NFS3ERR_IO
    NFS3ERR_STALE
    NFS3ERR_BADHANDLE
    NFS3ERR_SERVERFAULT

SEE ALSO

    ACCESS.
*/
GETATTR3res *
nfsproc3_getattr_3_svc(GETATTR3args arg1,  struct svc_req *rqstp)
{

	static GETATTR3res  result;

	/*
	 * insert server code here
	 */

	return(&result);
}
