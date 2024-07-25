SERVER = nfs_server

SOURCES.x = nfs.x

TARGETS = nfs.h nfs_xdr.c nfs_svc.c

# Compiler flags
CC = gcc
CFLAGS += -g
LDLIBS += 
RPCGENFLAGS = -N -C

# Targets

all : $(CLIENT) $(SERVER)

$(TARGETS) : $(SOURCES.x)
	rpcgen $(RPCGENFLAGS) $(SOURCES.x)

$(SERVER) : $(TARGETS)
	$(CC) -o $(SERVER) $(CFLAGS) nfs_svc.c nfs_xdr.c $(SERVER).c $(LDLIBS)

 clean:
		$(RM) -rf $(CLIENT) $(SERVER) $(TARGETS) *.dSYM
