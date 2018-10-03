#include <iostream>
using namespace std;

class Account{
public:
  Account(double initial_balance)
  {
    balance=initial_balance;
  }
  void credit(double amount)
  {
    balance=balance+amount;
  }
  double getbalance()
  {
    return balance;
  }
private:
  double balance;
};
int main(){
  Account acct1(45);
  std::cout<<"Account 1 balance is: "<<acct1.getbalance()<<endl;

  acct1.credit(2323);
  std::cout<<"Account 1 balance is: "<<acct1.getbalance()<<endl;
  return 0;
}
