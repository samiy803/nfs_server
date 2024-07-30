#include "../nfs.h"

using namespace std;

MKNOD3res *
nfsproc3_mknod_3_svc(MKNOD3args arg1,  struct svc_req *rqstp)
{

	static MKNOD3res  result;

	/*
	 * insert server code here
	 */

	return(&result);
}