#include <iostream>
using namespace std;

class Employee{
public:
  Employee(char first,char last,double msalary){
    first_name=first;
    last_name=last;
    Monthly_Salary=msalary;
  }
  void set_Salary(double amount){
    if(amount>=0){
      Monthly_Salary=amount;
    }
    else{
    Monthly_Salary=0.0;
    }
  }
  double raise_salary(){
    Monthly_Salary=1.1*Monthly_Salary;
  }
  double get_Salary(){
    return first_name;
    return last_name;
    return Monthly_Salary;
  }
private:
  char  first_name;
  char last_name;
  double Monthly_Salary;
};
int main(int argc, char const *argv[]) {
  Employee Employee1("H","S",10000);
  cout<<"Employee1 Account is :"<<Employee1.get_Salary<endl;
  Employee Employee2("A","S",2000);
  cout<<"Employee2 Account is :"<<Employee2.get_Salary<endl;



  return 0;
}
