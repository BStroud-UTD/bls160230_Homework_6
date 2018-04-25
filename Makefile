# Name:  Blake Stroud
# NetID: bls160230
# Email: bls160230@utdallas.edu

CXX = g++
CXXFLAGS = -Wall -g
CPPFLAGS = -I/scratch/perkins/include
LDFLAGS = -L/scratch/perkins/lib
LDLIBS = -lcdk -lcurses

#

EXECFILE = program6

OBJS = program6.o matrix.o file.o

all: $(EXECFILE)

clean:
	rm -f $(OBJS) $(EXECFILE) *.P *~ *\#*

$(EXECFILE) : $(OBJS)
	$(CXX) -o $@ $(OBJS) $(LDFLAGS) $(LDLIBS)
