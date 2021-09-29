// Jarrett Woo
// 02/04/2020

#include "matrix.h"
#include <iostream>


Matrix::Matrix() {
  rows = 0; columns = 0;
  matrix = new int [rows * columns];
}

Matrix::Matrix(int a, int b) {
  rows = a; columns = b;
  matrix = new int [rows * columns];
}

Matrix::Matrix(const Matrix& org) {
  rows = org.rows;
  columns = org.columns;

  matrix = new int [rows * columns];

  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < columns; ++j) {
      matrix[i*columns + j] = org.matrix[i*columns + j];
    }
  }
}

Matrix::~Matrix() {
  delete[] matrix;
}

Matrix& Matrix::fillMatrix(std::istream& in) {
  int A;
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < columns; ++j) {
      in >> A;
      matrix[j + i*columns] = A;
    }
  }
  return *this;
}


std::ostream& operator<<(std::ostream& out, Matrix& A) { 
 for (int i = 0; i < A.rows; ++i) {
   out << "| ";
   for (int j = 0; j < A.columns; ++j) {
     out << A.matrix[j + i*A.columns] << " ";
   }
   out << "|\n";
 }
   // | 2 3 4 |
   // | 5 6 7 |
   // | 8 9 0 |

 return out;
}


std::istream& operator>>(std::istream& in, Matrix& A) {
  int entries;
  char c;

  for (int i = 0; i < A.rows; ++i) 
    for (int j = 0; j < A.columns; ++j) {
       in >> entries;
       in >> c;
       A.matrix[i*A.columns + j] = entries;
    }
  return in;
}


Matrix Matrix::operator+(const Matrix& A) const {
  if (rows == A.rows && columns == A.columns) {

  Matrix result(A.rows, A.columns);

  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < columns; ++j) {
      result.matrix[i*columns + j] = matrix[i*columns + j] + A.matrix[i*columns + j];
    }
  }
  return result;
  }
  else {
    std::cout << "Could not add; matrices are not the same size\n";
    Matrix error;
    return error;
  }
}

Matrix Matrix::operator-(const Matrix& A) const {
if (rows == A.rows && columns == A.columns) {

  Matrix result(A.rows, A.columns);

  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < columns; ++j) {
      result.matrix[i*columns + j] = matrix[i*columns + j] - A.matrix[i*columns + j];
    }
  }
  return result;
  }
  else {
    std::cout << "Could not subtract; matrices are not the same size\n";
    Matrix error;
    return error;
  }
}

 
 Matrix Matrix::operator*(const Matrix& A) const {
  if (columns == A.rows) {
Matrix result(rows, A.columns);

 int product = 0;
 for (int k = 0; k < A.columns; ++k) {
   for (int i = 0; i < rows; ++i) {
     for (int j = 0; j < A.rows; ++j) {
       product += matrix[i*columns + j] * A.matrix[j*columns + k];
     }
     result.matrix[i*columns + k] = product;
     product = 0;
   }
 }
 return result;
  }

  else {
    Matrix error;
    std::cout << "Can not multiply; columns in [A] must match rows in [B]\n";
    return error;
  }
 }
