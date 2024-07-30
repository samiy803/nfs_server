#include "../nfs.h"

using namespace std;

READDIR3res *
nfsproc3_readdir_3_svc(READDIR3args arg1,  struct svc_req *rqstp)
{

	static READDIR3res  result;

	/*
	 * insert server code here
	 */

	return(&result);
}