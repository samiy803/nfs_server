#include "../nfs.h"

using namespace std;

LOOKUP3res *
nfsproc3_lookup_3_svc(LOOKUP3args arg1,  struct svc_req *rqstp)
{

	static LOOKUP3res  result;

	/*
	 * insert server code here
	 */

	return(&result);
}