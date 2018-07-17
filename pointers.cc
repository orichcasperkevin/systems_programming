#include <iostream>
using namespace std;
int main() {
  int firstValue,secondValue;
  int *mypointer;

  mypointer = &firstValue;
  cout << "the address of firstValue is" << mypointer<< '\n';
  *mypointer=10;

  mypointer = &secondValue;
  cout << "the value of the secondValue is" <<mypointer <<'\n';
  *mypointer=20;

  cout << "firstValue is" << firstValue<< '\n';
  cout << "secondValue is " << secondValue<< '\n';
  return 0;
}
