#include "../nfs.h"

using namespace std;

READLINK3res *
nfsproc3_readlink_3_svc(READLINK3args arg1,  struct svc_req *rqstp)
{

	static READLINK3res  result;

	/*
	 * insert server code here
	 */

	return(&result);
}