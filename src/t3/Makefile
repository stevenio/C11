P=gsl_erf
OBJECTS=
#gslpath=/opt/local/
gslpath=$(HOME)/Install/gsl
CFLAGS= -g -Wall -O3 -I$(gslpath)/include/gsl
LDLIBS= -L$(gslpath)/lib -lgsl -lgslcblas -lm
#LDLIBS= -L$(gslpath)/lib -lgslcblas -lgsl -lm
#LDLIBS= -L$(gslpath)/lib -lgsl
CC=gcc --std=gnu99
#CC=clang --std=gnu99


$(P): $(OBJECTS)

clean:
	rm $(P)
