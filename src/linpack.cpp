#include "matrix.h"
#include "linpack.h"
#include <iostream>

matrix linpack::matmul(matrix A, matrix B)
{
    if (A.n != B.m)
        throw std::invalid_argument("Matrix sizes do not match for matmul");

    matrix C(A.m, B.n);

    // usual matmul taught in math class does not utilize cache spatial locality
    for (int k = 0; k < A.n; k++)
    {
        for (int i = 0; i < A.m; i++)
        {
            double r = A.elements[i][k];
            for (int j = 0; j < B.n; j++)
                C.elements[i][j] += r * B.elements[k][j];
        }
    }

    return C;
}