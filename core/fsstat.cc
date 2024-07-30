#include "../nfs.h"

using namespace std;

FSSTAT3res *
nfsproc3_fsstat_3_svc(FSSTAT3args arg1,  struct svc_req *rqstp)
{

	static FSSTAT3res  result;

	/*
	 * insert server code here
	 */

	return(&result);
}