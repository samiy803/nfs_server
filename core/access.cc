#include "../nfs.h"

using namespace std;

ACCESS3res *
nfsproc3_access_3_svc(ACCESS3args arg1,  struct svc_req *rqstp)
{

	static ACCESS3res  result;

	/*
	 * insert server code here
	 */

	return(&result);
}