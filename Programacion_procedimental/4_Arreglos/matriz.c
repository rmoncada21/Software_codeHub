#include <stdio.h>
#include <stdlib.h>

void print_matrix1(const size_t rows, const size_t cols, double matrix[rows][cols]);
void print_matrix(const size_t rows, const size_t cols, double** matrix);
void test_static_matrix();
void test_heap_matrix();
double** create_double_matrix(const size_t rows, const size_t cols);
void destroy_double_matrix(double** matrix, size_t rows);

int main(void) {
  // test_static_matrix();
  test_heap_matrix();
}

void test_heap_matrix() {
  size_t rows = 3;
  size_t cols = 4;
  double** matrix = create_double_matrix(rows, cols);
  print_matrix(rows, cols, matrix);
  destroy_double_matrix(matrix, rows);  // para evitar fugas de memoria
}

double** create_double_matrix(const size_t rows, const size_t cols) {
  double** matrix = calloc(rows, sizeof(double*));
  if (matrix) {
    for (size_t row = 0; row < rows; ++row) {
      if ((matrix[row] = calloc(cols, sizeof(double))) == NULL) {
        destroy_double_matrix(matrix, rows);
        return NULL;
      }
    }
  }
  return matrix;
}

void destroy_double_matrix(double** matrix, size_t rows) {
  if (matrix) {
    for (size_t row = 0; row < rows; ++row) {
      free(matrix[row]);
    }
    free(matrix);
  }
}

void test_static_matrix() {
  const size_t rows = 3;
  const size_t cols = 4;

  // double matrix[rows][cols] = {
  double matrix[][4] = {
    {1.1, 1.2, 1.3, 1.4},
    {2.1, 2.2, 2.3, 2.4},
    {3.1, 3.2, 3.3, 3.4},
  };

  // print_matrix(rows, cols, (double**)matrix);
  print_matrix1(rows, cols, matrix);
}

void print_matrix1(const size_t rows, const size_t cols, double matrix[rows][cols]) {
  for (size_t row = 0; row < rows; ++row) {
    for (size_t col = 0; col < cols; ++col) {
      printf("%g%c", matrix[row][col], col == cols - 1 ? '\n' : ' ');
    }
  }
}

void print_matrix(const size_t rows, const size_t cols, double** matrix) {
  for (size_t row = 0; row < rows; ++row) {
    for (size_t col = 0; col < cols; ++col) {
      printf("%g%c", matrix[row][col], col == cols - 1 ? '\n' : ' ');
    }
  }
}