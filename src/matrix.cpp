#include "matrix.h"
#include "iostream"

matrix::matrix(int size)
{
    _m = size;
    _n = size;

    elements = new double *[m];
    for (int i = 0; i < m; i++)
        elements[i] = new double[n];

    to_zero();
}

matrix::matrix(int height, int width)
{
    _m = height;
    _n = width;

    elements = new double *[m];
    for (int i = 0; i < m; i++)
        elements[i] = new double[n];

    to_zero();
}

void matrix::print_matrix()
{
    std::cout << "print_matrix: size=(" << m << "," << n << ")" << std::endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            std::cout << elements[i][j] << " ";
        std::cout << std::endl;
    }
}

void matrix::to_zero()
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            elements[i][j] = 0;
}

void matrix::to_ones()
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            elements[i][j] = 1;
}

void matrix::to_uniform(double low, double high)
{
    // Depends on random generation
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            elements[i][j] = (double)rand() / RAND_MAX * (high - low) + low;
}

matrix matrix::transpose()
{
    matrix t_matrix(n, m);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            t_matrix.elements[j][i] = elements[i][j];

    return t_matrix;
}