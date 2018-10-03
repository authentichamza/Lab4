#include <iostream>
using namespace std;

class Account{
public:
  Account(double initial_balance)
  {
    balance=initial_balance;
  }
  void add_amount(double amount){
    balance+=amount;
  }
  int debit(double amount)
  {
    if(amount<=balance){
      balance=balance-amount;
    }
    else
      std::cout << "Debit amount exceeded account balance." << endl;
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
  acct1.add_amount(100);
  std::cout<<"Balance After Added Amount; "<<acct1.getbalance()<<endl;

  acct1.debit(200);
  std::cout<<"Account 1 remaining balance is: "<<acct1.getbalance()<<endl;
  return 0;
}
