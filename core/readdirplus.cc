#include "../nfs.h"

using namespace std;

READDIRPLUS3res *
nfsproc3_readdirplus_3_svc(READDIRPLUS3args arg1,  struct svc_req *rqstp)
{

	static READDIRPLUS3res  result;

	/*
	 * insert server code here
	 */

	return(&result);
}