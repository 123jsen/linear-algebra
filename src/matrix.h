#pragma once

class matrix
{
    // private properties
    int _m;
    int _n;

public:
    // public properties
    double **elements;

    // getters, see https://stackoverflow.com/questions/5424042/class-variables-public-access-read-only-but-private-access-read-write
    const int& m = _m;
    const int& n = _n;

    // constructors
    matrix(int size = 3);
    matrix(int height, int width);

    // instance methods
    void print_matrix();
    void to_zero();
    matrix transpose();
};