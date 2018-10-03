#include <iostream>
#include<string.h>
using namespace std;

class Employee{
public:
  Employee(string first,string last,double msalary){
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
  string fname(){
    return first_name;
  }
  string lname(){
    return last_name;
  }
  double raise_salary(){
    Monthly_Salary=1.1*Monthly_Salary;
  }
  double get_Salary()
  {
    return Monthly_Salary;
  }
private:
  string first_name;
  string last_name;
  double Monthly_Salary;
};
int main(int argc, char const *argv[]) {
  Employee employe1("H","S",10000);
  employe1.set_Salary(10000);
  cout<<"Employee name: "<<employe1.fname()<<" "<<employe1.lname()<<endl;
  cout<<"Employee1 Balance is :"<<employe1.get_Salary()<<endl;
  cout<<"Employee 1 after raise: "<<employe1.raise_salary()<<endl;
  Employee employe2("A","S",2000);
  cout<<"Employee name: "<<employe2.fname()<<" "<<employe2.lname()<<endl;
  cout<<"Employee2 Balance is :"<<employe2.get_Salary()<<endl;
  cout<<"Employee 2 after raise: "<<employe2.raise_salary()<<endl;




  return 0;
}
