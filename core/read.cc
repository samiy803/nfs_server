#include "../nfs.h"

using namespace std;

READ3res *
nfsproc3_read_3_svc(READ3args arg1,  struct svc_req *rqstp)
{

	static READ3res  result;

	/*
	 * insert server code here
	 */

	return(&result);
}