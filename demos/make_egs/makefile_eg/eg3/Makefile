CC=gcc
CFLAGS=-I.
DEPS=hellomake.h

# Compiles each of the object files as separate targets
# $@ -> the file name of the target of the rule
# $< -> the first item in the Dependencies list
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

hellomake: hellomake.o hellofunc.o
	$(CC) -o hellomake hellomake.o hellofunc.o $(CFLAGS)

# Target to clean files created during compilation
clean:
	rm -f *.o hellomake
