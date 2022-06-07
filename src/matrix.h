class matrix
{
    // private properties
    int m;
    int n;

public:
    // public properties
    double **elements;

    // constructors
    matrix(int size);
    matrix(int height, int width);

    // instance methods
    void print_matrix();
    void to_zero();
};