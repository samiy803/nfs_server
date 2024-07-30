#include "../nfs.h"

using namespace std;

SETATTR3res *
nfsproc3_setattr_3_svc(SETATTR3args arg1,  struct svc_req *rqstp)
{

	static SETATTR3res  result;

	/*
	 * insert server code here
	 */

	return(&result);
}