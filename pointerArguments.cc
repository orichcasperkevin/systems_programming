#include <iostream>
using namespace std;
void increment_all(int* start,int* stop)
{
  int *currrent =start;
  while (currrent != stop) {
    ++(*currrent); //increment value pointed
    ++currrent; //actual increment on the value of the pointer
  }
}
void printAll(const int* start,const int* stop)
{
  const int *currrent = start;
  while (currrent !=stop) {
    cout <<  *currrent << "\n";
    ++currrent; //increment pointer
  }
}
int main() {
  int numbers[]={10,20,30};
  increment_all(numbers,numbers+3);//array name without the parenthesis is a pointer to the array
  printAll(numbers,numbers+3);
  return 0;
}
