#include <iostream>
int main(int argc, char const *argv[]) {
  const int numRows = 10;
  const int numCols = 10;
  int product[numRows][numCols]={0};

  //make a multiplication table.

  for (int row=0; row < numRows ; ++row)
     for (int col = 0; col < numCols ; ++col)
          product[row][col] = row * col;

  // print the table
  for (int row = 1;row < numRows;++ row)
  {
    for (int col = 1;col < numCols; ++col)
      std::cout << product[row][col] << '\t';

      std::cout  << '\n';
  }

  return 0;
}
