#include "../nfs.h"

using namespace std;

GETATTR3res *
nfsproc3_getattr_3_svc(GETATTR3args arg1,  struct svc_req *rqstp)
{

	static GETATTR3res  result;

	/*
	 * insert server code here
	 */

	return(&result);
}
