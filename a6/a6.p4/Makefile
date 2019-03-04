CC = g++
CFLAGS = -Wall

OBJA = fraction.h fraction.cpp testArithmetic.cpp

OBJE = fraction.h fraction.cpp testException.cpp

OBJI = fraction.h fraction.cpp testIO.cpp

OBJR = fraction.h fraction.cpp testRelation.cpp

all: test-all

test-all: testArithmetic testException testIO testRelation

testArithmetic: $(OBJA)
	$(CC) $(CFLAGS) -o testArithmetic $(OBJA)

testException: $(OBJE)
	$(CC) $(CFLAGS) -o testException $(OBJE)

testIO: $(OBJI)
	$(CC) $(CFLAGS) -o testIO $(OBJI)

testRelation: $(OBJR)
	$(CC) $(CFLAGS) -o testRelation $(OBJR)

clean:
	rm -f testArithmetic *.o	rm -f testIO *.o	rm -f testException *.o	rm -f testRelation *.o