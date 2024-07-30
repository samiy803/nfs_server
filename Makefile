SERVER = nfs_server

SOURCES = nfs_svc.cc nfs_xdr.cc $(shell find core -name "*.cc")

# Compiler flags
CXX = g++
CXXFLAGS += -g
LDLIBS += 

# Targets
TARGETS = $(SOURCES:.cc=.o)

# Rules
all: $(SERVER)

%.o : %.cc
	$(CXX) -o $@ -c $< $(CXXFLAGS) 


$(SERVER) : $(TARGETS)
	$(CXX) -o $@ $^ $(LDLIBS)

 clean:
		$(RM) -rf $(TARGETS) $(SERVER) *~ *.dSYM
