#include "../nfs.h"

using namespace std;

RENAME3res *
nfsproc3_rename_3_svc(RENAME3args arg1,  struct svc_req *rqstp)
{

	static RENAME3res  result;

	/*
	 * insert server code here
	 */

	return(&result);
}