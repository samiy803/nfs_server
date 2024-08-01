#include "../nfs.h"

using namespace std;

/*
SYNOPSIS

    LINK3res NFSPROC3_LINK(LINK3args) = 15;

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

DESCRIPTION

    Procedure LINK creates a hard link from file to link.name,
    in the directory, link.dir. file and link.dir must reside
    on the same file system and server. On entry, the
    arguments in LINK3args are:

    file
        The file handle for the existing file system object.

    link
        The location of the link to be created:

        link.dir
        The file handle for the directory in which the link
        is to be created.

        link.name
        The name that is to be associated with the created
        link. Refer to General comments on filenames on page
        17.

    On successful return, LINK3res.status is NFS3_OK and
    LINK3res.resok contains:

    file_attributes
        The post-operation attributes of the file system object
        identified by file.

    linkdir_wcc
        Weak cache consistency data for the directory,
        link.dir.

    Otherwise, LINK3res.status contains the error on failure
    and LINK3res.resfail contains the following:

    file_attributes
        The post-operation attributes of the file system object
        identified by file.

    linkdir_wcc
        Weak cache consistency data for the directory,
        link.dir.
IMPLEMENTATION

    Changes to any property of the hard-linked files are
    reflected in all of the linked files. When a hard link is
    made to a file, the attributes for the file should have a
    value for nlink that is one greater than the value before
    the LINK.

    The comments under RENAME regarding object and target
    residing on the same file system apply here as well. The
    comments regarding the target name applies as well. Refer
    to General comments on filenames on page 30.

ERRORS

    NFS3ERR_IO
    NFS3ERR_ACCES
    NFS3ERR_EXIST
    NFS3ERR_XDEV
    NFS3ERR_NOTDIR
    NFS3ERR_INVAL
    NFS3ERR_NOSPC
    NFS3ERR_ROFS
    NFS3ERR_MLINK
    NFS3ERR_NAMETOOLONG
    NFS3ERR_DQUOT
    NFS3ERR_STALE
    NFS3ERR_BADHANDLE
    NFS3ERR_NOTSUPP
    NFS3ERR_SERVERFAULT

SEE ALSO

    SYMLINK, RENAME and FSINFO.
*/
LINK3res *
nfsproc3_link_3_svc(LINK3args arg1,  struct svc_req *rqstp)
{

	static LINK3res  result;

	/*
	 * insert server code here
	 */

	return(&result);
}