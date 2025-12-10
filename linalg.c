// linalg.c

#include "linalg.h"
#include <assert.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>

void vector_init(Vector *v, size_t dim, bool random) {
  v->arr = malloc(sizeof(float) * dim);
  assert(v->arr);
  v->dim = dim;
  if (random) {
    for (size_t i = 0; i < dim; i++) {
      v->arr[i] = (float)rand() / RAND_MAX;
    }
  }
  puts("Vector Initialized Successfully!");
}

void vector_clean(Vector *v) {
  if (v->arr != NULL)
    free(v->arr);
  v->dim = 0;
  puts("Vector Cleaned Successfully!");
}

void matrix_init(Matrix *M, size_t rows, size_t cols, bool random) {
  M->rows = rows;
  M->cols = cols;

  float *data = malloc(rows * cols * sizeof(float));
  assert(data);
  M->arr = malloc(rows * sizeof(float *));
  assert(M->arr);

  for (size_t i = 0; i < rows; i++)
    M->arr[i] = data + i * cols; // set row pointers

  if (random) {
    for (size_t i = 0; i < rows * cols; i++)
      data[i] = (float)rand() / RAND_MAX;
  }

  puts("Matrix Initialized Successfully!");
}

void matrix_clean(Matrix *M) {
  free(M->arr[0]);
  free(M->arr);
}
