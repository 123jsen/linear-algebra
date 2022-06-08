#include "matrix.h"
#include <iostream>

int main(int argc, char *argv[])
{
    matrix A;
    A.print_matrix();
    A.transpose().print_matrix();
}