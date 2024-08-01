#include "../nfs.h"

using namespace std;

/*
SYNOPSIS

    void NFSPROC3_NULL(void) = 0;

DESCRIPTION

    Procedure NULL does not do any work. It is made available to
    allow server response testing and timing.

IMPLEMENTATION

    It is important that this procedure do no work at all so
    that it can be used to measure the overhead of processing
    a service request. By convention, the NULL procedure
    should never require any authentication. A server may
    choose to ignore this convention, in a more secure
    implementation, where responding to the NULL procedure
    call acknowledges the existence of a resource to an
    unauthenticated client.

ERRORS

    Since the NULL procedure takes no NFS version 3 protocol
    arguments and returns no NFS version 3 protocol response,
    it can not return an NFS version 3 protocol error.
    However, it is possible that some server implementations
    may return RPC errors based on security and authentication
    requirements.
*/
void *nfsproc3_null_3_svc(struct svc_req *rqstp)
{
	return nullptr;
}