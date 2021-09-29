// Jarrett Woo
// 02/25/2020
// Testing my matrix calulator


#include "matrix.h"
#include <iostream>


int main() {

  /*
  bool repeat = true;
  //  bool createNew = true;

  while (repeat == true) {


    std::cout << "How big is your matrix? [Rows Columns]: ";
    int R, C;
    std::cin >> R >> C;

    Matrix A(R, C);
    std::cout << "Enter the elements of your matrix, starting from the top left,\n working your way right and down. ";

    A.fillMatrix(std::cin);

    std::cout << "Your matrix looks like this:\n" << A;

    std::cout << "Would you like to make another matrix? [y/n] ";
    char ans;
    std::cin >> ans;

    if (ans == 'y' || ans == 'Y')
      repeat = true;
    else
      repeat = false;

  }
*/

  /*
  std::cout << "Let's add some matrices!\n Please enter size: ";
  int R, C;
  std::cin >> R >> C;

  Matrix B(R,C);
  std::cout << "Enter elements: ";
  B.fillMatrix(std::cin);

  std::cout << "How big is your second matrix? ";
  std::cin >> R >> C;

  Matrix c(R, C);
  std::cout << "Enter elements: ";
  c.fillMatrix(std::cin);

  Matrix D = B + c;

  std::cout << "The sum of those two matrices is:\n" << D;
  
  */

  /*
  // Subtraction
  std::cout << "Let's subtract some matrices!\n Please enter size: ";
  int R, C;
  std::cin >> R >> C;

  Matrix B(R,C);
  std::cout << "Enter elements: ";
  B.fillMatrix(std::cin);

  std::cout << "How big is your second matrix? ";
  std::cin >> R >> C;

  Matrix c(R, C);
  std::cout << "Enter elements: ";
  c.fillMatrix(std::cin);

  Matrix D = B - c;

  std::cout << "The difference of those two matrices is:\n" << D;
  */
  
  // Multiply 
std::cout << "Let's multiply some matrices!\n Please enter size: ";
 int R, C;
  std::cin >> R >> C;

  Matrix E(R,C);
  std::cout << "Enter elements: ";
  E.fillMatrix(std::cin);

  std::cout << "How big is your second matrix? ";
  int row ,column;
  std::cin >> row >> column;

  Matrix F(row, column);
  std::cout << "Enter elements: ";
  F.fillMatrix(std::cin);

  Matrix product = E * F;

  std::cout << "The dot product of those two matrices is:\n" << product;

  
  return 0;
}
