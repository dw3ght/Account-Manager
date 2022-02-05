#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

using namespace std;
using std::cout;
using std::endl;

class Account {

  //std::string accountName;
  // double balance = 0.0;
  
public:

  std::string accountName;
  double balance = 0.0;
  
  // add constructors here -- see description in assignment
  Account (std::string a) {
    accountName = a;
  }
  
  double getBalance() {
    // add code here -- a basic getter, return the balance of the account

    return balance;			/* replace this */
  }

  void setBalance(double balance) {
    // add code here -- a basic setter, return nothing.

    if (balance >= 0) {
    balance = balance;
    }
    
  }
  
  double deposit(double depositAmount) {
    // your code should check to ensure that depositAmount is positive (e.g.
    // deposit 100 dollars). It should only update the account balance if it is
    // positive. Returns balance after any changes

    // add code here

    if (depositAmount > 0) {
      balance += depositAmount;
    }

    return balance;			/* replace this */
  }

  double withdraw(double withdrawalAmount) {
    // This method should ensure that the withdrawalAmount is positive (e.g.
    // withdraw 100 dollars). It should only update the account balance if the
    // account can cover the withdrawal. Returns balance after any changes

    // add code here

    if (withdrawalAmount > 0) {
      balance -= withdrawalAmount;
    }
    
    return balance;			/* replace this */
  }

  double interest(double percent) {
    // This method should accept percent (positive or negative). (e.g. to grow
    // the account by 10% you would call interest(0.1). To decay the account by
    // 20% you would call interest(-0.2)) Returns balance after any changes

    // add code here
    int temp;
    temp = balance * (percent);
    balance = balance + temp;    
    return balance;			/* replace this */
  }

  std::string getName() const {
    // add code here
    
    return accountName;			/* replace this */
  }

  void setName(std::string newName) {
    // Your code should ensure that the name of the account has a max of 20
    // characters. If the newName passed to this function is longer than 20, you
    // should set the account name to be the first 20 characters of the
    // argument.

    // add code here
    //    cout << newName << endl;

    if ((newName.length() >= 5) && (newName.length() <= 20)) {
      this->accountName = newName;
    } else if (newName.length() > 20){
      this->accountName = newName.substr (0,19);
    } else {
      this->accountName = "Dawgs";
    }

  }
  
  // write the transferTo method here -- see assignment
  bool transferTo(double amount, Account& otherAccount) {
    // add code here
    
    if (balance >= amount) {
      balance -= amount;
      return true;
    }
    else {
      return false; 		/* replace this */
    }
  }
  
private:
  // add more code here -- see description in assignment

  //std::string accountName;
  //double balance = 0.0;

};

#endif
