#include "../nfs.h"

using namespace std;

LINK3res *
nfsproc3_link_3_svc(LINK3args arg1,  struct svc_req *rqstp)
{

	static LINK3res  result;

	/*
	 * insert server code here
	 */

	return(&result);
}