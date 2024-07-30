#include "../nfs.h"

using namespace std;

CREATE3res *
nfsproc3_create_3_svc(CREATE3args arg1,  struct svc_req *rqstp)
{

	static CREATE3res  result;

	/*
	 * insert server code here
	 */

	return(&result);
}