#include <iostream>
using namespace std;
void printArray(int arg[],int length)
{
  for (int n = 0; n < length ; ++n) {
    std::cout << arg[n] << ',' ;

  }
}
int main(int argc, char const *argv[]) {
  int firstArray[]={5,10,15};
  int secondArray[]={2,4,6,8,10};
  printArray(firstArray,3);
  std::cout  << '\n';
  printArray(secondArray,5);
  return 0;
}
