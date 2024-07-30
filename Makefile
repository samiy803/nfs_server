SERVER = nfs_server

SOURCES = nfs_svc.cc nfs_xdr.cc nfs_server.cc

# Compiler flags
CXX = g++
CXXFLAGS += -g
LDLIBS += 

# Targets
TARGETS = $(SOURCES:.cc=.o)

# Rules
all: $(SERVER)

%.o : %.cc
	$(CXX) -c $(CXXFLAGS) $<


$(SERVER) : $(TARGETS)
	$(CXX) -o $@ $^ $(LDLIBS)

 clean:
		$(RM) -rf $(TARGETS) $(SERVER) *~ *.dSYM
