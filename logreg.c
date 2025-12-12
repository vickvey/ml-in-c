// logreg.c

#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>

// Constants
#define FEAT_SIZE 15

// Trainable weights
float W[15];
float b;

// Hyperparameters
float lr = 0.05f;
size_t n_iters = 1000;
size_t batch_size = 32;

// Model functions
void init_model(float lr, size_t n_iters, size_t batch_size);
void fit(float X[][15], bool label[], size_t batch_size);
bool predict(float x[15]);
void test();

// Training dataset
float X_train[4000][15];
bool y_train[4000];

// Dataset utilities
void read_dataset(char *filename);

int main() {
  // seed
  srand(69);

  init_model(0.01, 1000, 1);

  return 0;
}

// Function definitions
void init_model(float lr, size_t n_iters, size_t batch_size) {
  lr = lr;
  n_iters = n_iters;
  batch_size = batch_size;

  // Fill random values in weights
  for (size_t i = 0; i < 15; i++) {
    W[i] = (float)rand() / (float)RAND_MAX;
  }
  b = (float)rand() / (float)RAND_MAX;
}
