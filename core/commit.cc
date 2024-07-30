#include "../nfs.h"

using namespace std;

COMMIT3res *
nfsproc3_commit_3_svc(COMMIT3args arg1,  struct svc_req *rqstp)
{

	static COMMIT3res  result;

	/*
	 * insert server code here
	 */

	return(&result);
}