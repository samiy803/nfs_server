#include "../nfs.h"

using namespace std;

SYMLINK3res *
nfsproc3_symlink_3_svc(SYMLINK3args arg1,  struct svc_req *rqstp)
{

	static SYMLINK3res  result;

	/*
	 * insert server code here
	 */

	return(&result);
}