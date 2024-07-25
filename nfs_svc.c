/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "nfs.h"
#include <sys/ioctl.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <rpc/pmap_clnt.h>
#include <string.h>
#include <netdb.h>
#include <signal.h>
#include <sys/ttycom.h>
#ifdef __cplusplus
#include <sysent.h>
#endif /* __cplusplus */
#include <memory.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <syslog.h>

#ifdef __STDC__
#define SIG_PF void(*)(int)
#endif

#ifdef DEBUG
#define RPC_SVC_FG
#endif

#define _RPCSVC_CLOSEDOWN 120
static int _rpcpmstart;		/* Started by a port monitor ? */
static int _rpcfdtype;		/* Whether Stream or Datagram ? */
static int _rpcsvcdirty;	/* Still serving ? */

static
void _msgout(char* msg)
{
#ifdef RPC_SVC_FG
	if (_rpcpmstart)
		syslog(LOG_ERR, "%s", msg);
	else
		(void) fprintf(stderr, "%s\n", msg);
#else
	syslog(LOG_ERR, "%s", msg);
#endif
}

static void closedown(void);

static void
closedown()
{
	if (_rpcsvcdirty == 0) {
		extern fd_set svc_fdset;
		static int size;
		int i, openfd;

		if (_rpcfdtype == SOCK_DGRAM)
			exit(0);
		if (size == 0) {
			size = getdtablesize();
		}
		for (i = 0, openfd = 0; i < size && openfd < 2; i++)
			if (FD_ISSET(i, &svc_fdset))
				openfd++;
		if (openfd <= (_rpcpmstart?0:1))
			exit(0);
	}
	(void) alarm(_RPCSVC_CLOSEDOWN);
}

static void *
_nfsproc3_null_3(void  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_null_3_svc(rqstp));
}

static GETATTR3res *
_nfsproc3_getattr_3(GETATTR3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_getattr_3_svc(*argp, rqstp));
}

static SETATTR3res *
_nfsproc3_setattr_3(SETATTR3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_setattr_3_svc(*argp, rqstp));
}

static LOOKUP3res *
_nfsproc3_lookup_3(LOOKUP3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_lookup_3_svc(*argp, rqstp));
}

static ACCESS3res *
_nfsproc3_access_3(ACCESS3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_access_3_svc(*argp, rqstp));
}

static READLINK3res *
_nfsproc3_readlink_3(READLINK3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_readlink_3_svc(*argp, rqstp));
}

static READ3res *
_nfsproc3_read_3(READ3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_read_3_svc(*argp, rqstp));
}

static WRITE3res *
_nfsproc3_write_3(WRITE3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_write_3_svc(*argp, rqstp));
}

static CREATE3res *
_nfsproc3_create_3(CREATE3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_create_3_svc(*argp, rqstp));
}

static MKDIR3res *
_nfsproc3_mkdir_3(MKDIR3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_mkdir_3_svc(*argp, rqstp));
}

static SYMLINK3res *
_nfsproc3_symlink_3(SYMLINK3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_symlink_3_svc(*argp, rqstp));
}

static MKNOD3res *
_nfsproc3_mknod_3(MKNOD3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_mknod_3_svc(*argp, rqstp));
}

static REMOVE3res *
_nfsproc3_remove_3(REMOVE3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_remove_3_svc(*argp, rqstp));
}

static RMDIR3res *
_nfsproc3_rmdir_3(RMDIR3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_rmdir_3_svc(*argp, rqstp));
}

static RENAME3res *
_nfsproc3_rename_3(RENAME3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_rename_3_svc(*argp, rqstp));
}

static LINK3res *
_nfsproc3_link_3(LINK3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_link_3_svc(*argp, rqstp));
}

static READDIR3res *
_nfsproc3_readdir_3(READDIR3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_readdir_3_svc(*argp, rqstp));
}

static READDIRPLUS3res *
_nfsproc3_readdirplus_3(READDIRPLUS3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_readdirplus_3_svc(*argp, rqstp));
}

static FSSTAT3res *
_nfsproc3_fsstat_3(FSSTAT3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_fsstat_3_svc(*argp, rqstp));
}

static FSINFO3res *
_nfsproc3_fsinfo_3(FSINFO3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_fsinfo_3_svc(*argp, rqstp));
}

static PATHCONF3res *
_nfsproc3_pathconf_3(PATHCONF3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_pathconf_3_svc(*argp, rqstp));
}

static COMMIT3res *
_nfsproc3_commit_3(COMMIT3args  *argp, struct svc_req *rqstp)
{
	return(nfsproc3_commit_3_svc(*argp, rqstp));
}

static void nfs_program_3(struct svc_req *rqstp, SVCXPRT *transp);

static void
nfs_program_3(struct svc_req *rqstp, SVCXPRT *transp)
{
	union {
		GETATTR3args nfsproc3_getattr_3_arg;
		SETATTR3args nfsproc3_setattr_3_arg;
		LOOKUP3args nfsproc3_lookup_3_arg;
		ACCESS3args nfsproc3_access_3_arg;
		READLINK3args nfsproc3_readlink_3_arg;
		READ3args nfsproc3_read_3_arg;
		WRITE3args nfsproc3_write_3_arg;
		CREATE3args nfsproc3_create_3_arg;
		MKDIR3args nfsproc3_mkdir_3_arg;
		SYMLINK3args nfsproc3_symlink_3_arg;
		MKNOD3args nfsproc3_mknod_3_arg;
		REMOVE3args nfsproc3_remove_3_arg;
		RMDIR3args nfsproc3_rmdir_3_arg;
		RENAME3args nfsproc3_rename_3_arg;
		LINK3args nfsproc3_link_3_arg;
		READDIR3args nfsproc3_readdir_3_arg;
		READDIRPLUS3args nfsproc3_readdirplus_3_arg;
		FSSTAT3args nfsproc3_fsstat_3_arg;
		FSINFO3args nfsproc3_fsinfo_3_arg;
		PATHCONF3args nfsproc3_pathconf_3_arg;
		COMMIT3args nfsproc3_commit_3_arg;
	} argument;
	char *result;
	xdrproc_t xdr_argument, xdr_result;
	char *(*local)(char *, struct svc_req *);

	_rpcsvcdirty = 1;
	switch (rqstp->rq_proc) {
	case NFSPROC3_NULL:
		xdr_argument = (xdrproc_t) xdr_void;
		xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_null_3;
		break;

	case NFSPROC3_GETATTR:
		xdr_argument = (xdrproc_t) xdr_GETATTR3args;
		xdr_result = (xdrproc_t) xdr_GETATTR3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_getattr_3;
		break;

	case NFSPROC3_SETATTR:
		xdr_argument = (xdrproc_t) xdr_SETATTR3args;
		xdr_result = (xdrproc_t) xdr_SETATTR3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_setattr_3;
		break;

	case NFSPROC3_LOOKUP:
		xdr_argument = (xdrproc_t) xdr_LOOKUP3args;
		xdr_result = (xdrproc_t) xdr_LOOKUP3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_lookup_3;
		break;

	case NFSPROC3_ACCESS:
		xdr_argument = (xdrproc_t) xdr_ACCESS3args;
		xdr_result = (xdrproc_t) xdr_ACCESS3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_access_3;
		break;

	case NFSPROC3_READLINK:
		xdr_argument = (xdrproc_t) xdr_READLINK3args;
		xdr_result = (xdrproc_t) xdr_READLINK3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_readlink_3;
		break;

	case NFSPROC3_READ:
		xdr_argument = (xdrproc_t) xdr_READ3args;
		xdr_result = (xdrproc_t) xdr_READ3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_read_3;
		break;

	case NFSPROC3_WRITE:
		xdr_argument = (xdrproc_t) xdr_WRITE3args;
		xdr_result = (xdrproc_t) xdr_WRITE3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_write_3;
		break;

	case NFSPROC3_CREATE:
		xdr_argument = (xdrproc_t) xdr_CREATE3args;
		xdr_result = (xdrproc_t) xdr_CREATE3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_create_3;
		break;

	case NFSPROC3_MKDIR:
		xdr_argument = (xdrproc_t) xdr_MKDIR3args;
		xdr_result = (xdrproc_t) xdr_MKDIR3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_mkdir_3;
		break;

	case NFSPROC3_SYMLINK:
		xdr_argument = (xdrproc_t) xdr_SYMLINK3args;
		xdr_result = (xdrproc_t) xdr_SYMLINK3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_symlink_3;
		break;

	case NFSPROC3_MKNOD:
		xdr_argument = (xdrproc_t) xdr_MKNOD3args;
		xdr_result = (xdrproc_t) xdr_MKNOD3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_mknod_3;
		break;

	case NFSPROC3_REMOVE:
		xdr_argument = (xdrproc_t) xdr_REMOVE3args;
		xdr_result = (xdrproc_t) xdr_REMOVE3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_remove_3;
		break;

	case NFSPROC3_RMDIR:
		xdr_argument = (xdrproc_t) xdr_RMDIR3args;
		xdr_result = (xdrproc_t) xdr_RMDIR3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_rmdir_3;
		break;

	case NFSPROC3_RENAME:
		xdr_argument = (xdrproc_t) xdr_RENAME3args;
		xdr_result = (xdrproc_t) xdr_RENAME3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_rename_3;
		break;

	case NFSPROC3_LINK:
		xdr_argument = (xdrproc_t) xdr_LINK3args;
		xdr_result = (xdrproc_t) xdr_LINK3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_link_3;
		break;

	case NFSPROC3_READDIR:
		xdr_argument = (xdrproc_t) xdr_READDIR3args;
		xdr_result = (xdrproc_t) xdr_READDIR3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_readdir_3;
		break;

	case NFSPROC3_READDIRPLUS:
		xdr_argument = (xdrproc_t) xdr_READDIRPLUS3args;
		xdr_result = (xdrproc_t) xdr_READDIRPLUS3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_readdirplus_3;
		break;

	case NFSPROC3_FSSTAT:
		xdr_argument = (xdrproc_t) xdr_FSSTAT3args;
		xdr_result = (xdrproc_t) xdr_FSSTAT3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_fsstat_3;
		break;

	case NFSPROC3_FSINFO:
		xdr_argument = (xdrproc_t) xdr_FSINFO3args;
		xdr_result = (xdrproc_t) xdr_FSINFO3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_fsinfo_3;
		break;

	case NFSPROC3_PATHCONF:
		xdr_argument = (xdrproc_t) xdr_PATHCONF3args;
		xdr_result = (xdrproc_t) xdr_PATHCONF3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_pathconf_3;
		break;

	case NFSPROC3_COMMIT:
		xdr_argument = (xdrproc_t) xdr_COMMIT3args;
		xdr_result = (xdrproc_t) xdr_COMMIT3res;
		local = (char *(*)(char *, struct svc_req *)) _nfsproc3_commit_3;
		break;

	default:
		svcerr_noproc(transp);
		_rpcsvcdirty = 0;
		return;
	}
	(void) memset((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs(transp, xdr_argument, (caddr_t) &argument)) {
		svcerr_decode(transp);
		_rpcsvcdirty = 0;
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, (xdrproc_t) xdr_result, result)) {
		svcerr_systemerr(transp);
	}
	if (!svc_freeargs(transp, xdr_argument, (caddr_t) &argument)) {
		_msgout("unable to free arguments");
		exit(1);
	}
	_rpcsvcdirty = 0;
	return;
}


int main( int argc, char* argv[] );

int
main( int argc, char* argv[] )
{
	SVCXPRT *transp = NULL;
	int sock;
	int proto = 0;
	struct sockaddr_in saddr;
	int asize = sizeof (saddr);

	if (getsockname(0, (struct sockaddr *)&saddr, &asize) == 0) {
		int ssize = sizeof (int);

		if (saddr.sin_family != AF_INET)
			exit(1);
		if (getsockopt(0, SOL_SOCKET, SO_TYPE,
				(char *)&_rpcfdtype, &ssize) == -1)
			exit(1);
		sock = 0;
		_rpcpmstart = 1;
		proto = 0;
		openlog("nfs", LOG_PID, LOG_DAEMON);
	} else {
#ifndef RPC_SVC_FG
		int size;
		int pid, i;

		pid = fork();
		if (pid < 0) {
			perror("cannot fork");
			exit(1);
		}
		if (pid)
			exit(0);
		size = getdtablesize();
		for (i = 0; i < size; i++)
			(void) close(i);
		i = open("/dev/console", 2);
		(void) dup2(i, 1);
		(void) dup2(i, 2);
		i = open("/dev/tty", 2);
		if (i >= 0) {
			(void) ioctl(i, TIOCNOTTY, (char *)NULL);
			(void) close(i);
		}
		openlog("nfs", LOG_PID, LOG_DAEMON);
#endif
		sock = RPC_ANYSOCK;
		(void) pmap_unset(NFS_PROGRAM, NFS_V3);
	}

	if ((_rpcfdtype == 0) || (_rpcfdtype == SOCK_DGRAM)) {
		transp = svcudp_create(sock);
		if (transp == NULL) {
			_msgout("cannot create udp service.");
			exit(1);
		}
		if (!_rpcpmstart)
			proto = IPPROTO_UDP;
		if (!svc_register(transp, NFS_PROGRAM, NFS_V3, nfs_program_3, proto)) {
			_msgout("unable to register (NFS_PROGRAM, NFS_V3, udp).");
			exit(1);
		}
	}

	if ((_rpcfdtype == 0) || (_rpcfdtype == SOCK_STREAM)) {
		if (_rpcpmstart)
			transp = svcfd_create(sock, 0, 0);
		else
			transp = svctcp_create(sock, 0, 0);
		if (transp == NULL) {
			_msgout("cannot create tcp service.");
			exit(1);
		}
		if (!_rpcpmstart)
			proto = IPPROTO_TCP;
		if (!svc_register(transp, NFS_PROGRAM, NFS_V3, nfs_program_3, proto)) {
			_msgout("unable to register (NFS_PROGRAM, NFS_V3, tcp).");
			exit(1);
		}
	}

	if (transp == (SVCXPRT *)NULL) {
		_msgout("could not create a handle");
		exit(1);
	}
	if (_rpcpmstart) {
		(void) signal(SIGALRM, (SIG_PF) closedown);
		(void) alarm(_RPCSVC_CLOSEDOWN);
	}
	svc_run();
	_msgout("svc_run returned");
	exit(1);
	/* NOTREACHED */
}
