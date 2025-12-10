// linalg.h

#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef MY_LINEAR_ALGEBRA_LIBRARY_H_
#define MY_LINEAR_ALGEBRA_LIBRARY_H_

struct Vector {
  float *arr;
  size_t dim;
};

struct Matrix {
  float **arr;
  size_t rows;
  size_t cols;
};

typedef struct Vector Vector;
typedef struct Matrix Matrix;

// Vector Utilities
void vector_init(Vector *v, size_t dim, bool random);
void vector_clean(Vector *v);

// Matrix Utilities
void matrix_init(Matrix *M, size_t rows, size_t cols, bool random);
void matrix_clean(Matrix *M);

#endif // MY_LINEAR_ALGEBRA_LIBRARY_H_
