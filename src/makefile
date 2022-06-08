# Usage:
# make build  		# build the main program
# make dev    		# create sandbox file that is not commited to git

CC := g++ -Wall					# compiler to be used
files: matrix.o linpack.o 		# list of object files

dev: ${files}
	${CC} matrix.o linpack.o dev.cpp -o dev

build: ${files}
	${CC} matrix.o linpack.o main.cpp -o main

matrix.o : matrix.cpp
	${CC} matrix.cpp -c

linpack.o : linpack.cpp
	${CC} linpack.cpp -c