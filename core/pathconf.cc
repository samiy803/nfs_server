#include "../nfs.h"

using namespace std;

PATHCONF3res *
nfsproc3_pathconf_3_svc(PATHCONF3args arg1,  struct svc_req *rqstp)
{

	static PATHCONF3res  result;

	/*
	 * insert server code here
	 */

	return(&result);
}