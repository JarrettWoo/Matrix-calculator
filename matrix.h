// Jarrett Woo
// 02/04/2020
// Creating a class matrix for matrix operations

#ifndef _MATRIX_H_
#define _MATRIX_H_

#include <iostream>


class Matrix {

public:
  Matrix();
  Matrix(int, int);
  Matrix(const Matrix&);
  ~Matrix();

  Matrix& fillMatrix(std::istream& in);

  //  Matrix inverse(); implement later 

friend std::ostream& operator<<(std::ostream& out, Matrix& A);
friend std::istream& operator>>(std::istream& in, Matrix& A);

  Matrix operator+(const Matrix& A) const;
  Matrix operator-(const Matrix& A) const;
  Matrix operator*(const Matrix& A) const;
  Matrix operator=(Matrix& A) const;



private:

  int rows, columns;
  int *matrix;


};







#endif //MATRIX_H_
