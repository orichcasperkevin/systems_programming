
#include <iostream>
#include <string>
using namespace std;

string name;
int idNo;
string bankBranch;
string bank;
string accountNumber;
int pin;
int amount = 0;

int main(int argc, char const *argv[]) {

  void accontholder();
  void deposit();
  void withdraw();
  void changepin();
  void prinStatement();

  accontholder();
  deposit();
  withdraw();
  changepin();
  prinStatement();
  return 0;
}
void accontholder()
  {
    std::cout << '\n'<< "  CREATING AN ACCOUNT FOR YOU" << '\n';
    std::cout << "enter your name :" << '\n';
    std::cin >> name;
    std::cout << "enter your id number :" << '\n';
    std::cin >> idNo;
    std::cout << "enter the bank" << '\n';
    std::cin >> bank;
    std::cout << "enter the bannk branch" << '\n';
    std::cin >> bankBranch;
    std::cout << "enter account number:" << '\n';
    std::cin >> accountNumber;
    std::cout << "create pin" << '\n';
    std::cin >> pin;
  }
void deposit()
  {
    int depositAmount;
    std::cout << '\n'<< "  MAKING A DEPOSIT FOR YOU" << '\n';
    std::cout << "enter the amount you wish to deposit" << '\n';
    std::cin >> depositAmount;
    std::cout << "you have successfully deposited "<< depositAmount<< " to your account.your new balance is"<< amount+depositAmount<< '\n';
    amount=amount+depositAmount;
  }
void withdraw()
  {
    int withdrawAmount;
    std::cout << '\n'<< " WITHDRAWING FROM YOUR ACCOUNT " << '\n';
    std::cout << "enter amount you wish to withdraw" << '\n';
    std::cin >> withdrawAmount;
    std::cout << "you have successfully withdrawn "<< withdrawAmount<< " from your account.your new balance is"<< amount-withdrawAmount<< '\n';
    amount=amount-withdrawAmount;
  }
void changepin()
  {
    int tempPin,tempPin2,tempPin3;
    std::cout << '\n'<< "MAKING CHANGES TO YOUR PIN " << '\n';
    std::cout << "enter your old pin" << '\n';
    std::cin >> tempPin;
    if (tempPin == pin ) {
      std::cout << "enter new pin" << '\n';
      std::cin >> tempPin2;
      std::cout << "confirm new pin" << '\n';\
      std::cin >> tempPin3;
      if (tempPin3 == tempPin2) {
        pin = tempPin3;
        std::cout << "youve successfully changed your pin" << '\n';
      }
    }
    else{
      std::cout << "youve entered wrong pin" << '\n';
    }


  }
void prinStatement()
  {

      std::cout << '\n'<< "YOUR ACCOUNT STATEMENT" << '\n';
    std::cout << "name" <<"\t"<< name << '\n';
        std::cout << "id number" <<"\t"<< idNo << '\n';
            std::cout << "bank" <<"\t"<< bank << '\n';
                std::cout << "branch" <<"\t"<< bankBranch << '\n';
                    std::cout << "accountNumber" <<"\t"<< accountNumber << '\n';
                     std::cout << "remaining amaount" <<"\t"<< amount << '\n';
                         std::cout << "name" <<"\t"<< name << '\n';
  }
