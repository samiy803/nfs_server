#include "../nfs.h"

using namespace std;

RMDIR3res *
nfsproc3_rmdir_3_svc(RMDIR3args arg1,  struct svc_req *rqstp)
{

	static RMDIR3res  result;

	/*
	 * insert server code here
	 */

	return(&result);
}