#include "../nfs.h"

using namespace std;

MKDIR3res *
nfsproc3_mkdir_3_svc(MKDIR3args arg1,  struct svc_req *rqstp)
{

	static MKDIR3res  result;

	/*
	 * insert server code here
	 */

	return(&result);
}