#include <cstdlib>
#include <iostream>
#include "Account.h"

using namespace std;
using std::cout;
using std::endl;
/*
 * This file contains the "Driver" code for this project.
 */

 /*
  * This is the main method of your program. You should write code here which tests all
  * aspects of your Account class implementation. You are responsible for thoroughly
  * testing your code.
  *
  * Please note: code in this file will not be used in grading evaluation of your
  * assignment. We will use our own driver file which will use YOUR provided Account
  * implementation to test against project requirements.
  */
int main(){
  Account ac1("Dwight");
  Account ac2("Hey");
  cout << ac1.getName() << endl;
  ac1.deposit(100);
  cout << ac1.getBalance() << endl;
  ac1.deposit(100);
  cout << ac1.getBalance() << endl;
  ac1.withdraw(100);
  cout << ac1.getBalance() << endl;
  ac1.interest(.01);
 cout << ac1.getBalance() << endl;
 ac1.setName("dawg");
 cout << ac1.getName() << endl;
 ac1.setName("ACEKLUB");
 cout << ac1.getName() << endl;
 ac1.setName("AYOooooooooooooooooxo");
 cout << ac1.getName() << endl;
 ac1.transferTo(1,ac2);
 cout << ac1.getBalance() << endl;
  return EXIT_SUCCESS;
}
