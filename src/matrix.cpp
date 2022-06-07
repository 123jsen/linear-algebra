#include "matrix.h"
#include "iostream"

matrix::matrix(int size)
{
    m = size;
    n = size;

    elements = new double *[m];
    for (int i = 0; i < m; i++)
        elements[i] = new double[n];

    to_zero();
}

matrix::matrix(int height, int width)
{
    m = height;
    n = width;

    elements = new double *[m];
    for (int i = 0; i < m; i++)
        elements[i] = new double[n];

    to_zero();
}

void matrix::print_matrix() {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            std::cout << elements[i][j] << " ";
        std::cout << std::endl;
    }
        
}

void matrix::to_zero() {
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            elements[i][j] = 0;
}