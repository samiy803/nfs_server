#include "../nfs.h"

using namespace std;

REMOVE3res *
nfsproc3_remove_3_svc(REMOVE3args arg1,  struct svc_req *rqstp)
{

	static REMOVE3res  result;

	/*
	 * insert server code here
	 */

	return(&result);
}