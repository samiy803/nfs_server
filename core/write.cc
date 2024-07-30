#include "../nfs.h"

using namespace std;

WRITE3res *
nfsproc3_write_3_svc(WRITE3args arg1,  struct svc_req *rqstp)
{

	static WRITE3res  result;

	/*
	 * insert server code here
	 */

	return(&result);
}