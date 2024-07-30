#include "../nfs.h"

using namespace std;

FSINFO3res *
nfsproc3_fsinfo_3_svc(FSINFO3args arg1,  struct svc_req *rqstp)
{

	static FSINFO3res  result;

	/*
	 * insert server code here
	 */

	return(&result);
}