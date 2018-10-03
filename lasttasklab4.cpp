#include <iostream>
#include<string.h>
using namespace std;

class Invoice{
public:
  Invoice(string partno,string partdes,int q,double p){
    Part_Num=partno;
    Part_description=partdes;
    Quantity=q;
    Price=p;
  }
  double getInvoiceAmount(){
    return (Price*Quantity);
  }
  string set_PartNumber(string partno){
    Part_Num=partno;
  }
  string set_PartDescription(string partdes){
    Part_description=partdes;
  }
  int set_Quantity(int q){
    Quantity+=q;
  }
  double set_Price(double p){
    Price+=p;
  }
  string get_PartNumber(){
    return Part_Num;
  }
  string get_PartDescription(){
    return Part_description;
  }
  int get_Quantity(){
    return Quantity;
  }
  double get_Price(){
    return Price;
  }
private:
  string Part_Num;
  string Part_description;
  int Quantity;
  double Price;
};
int main(int argc, char const *argv[]) {
  Invoice screwdriver("1.","ScrewDriver For screws",20,100), hammer("2.","Hammer for pins",10,200);
  cout<<"PartNumber"<<"  "<<"PartDescription"<<"  "<<"Quantity"<<"  "<<"Price"<<"Total according to Quantity"<<endl;
  cout<<screwdriver.get_PartNumber()<<"  |  "<<screwdriver.get_PartDescription()<<" | "<<screwdriver.get_Quantity()<<" | "<<screwdriver.get_Price()<<"  |  "<<screwdriver.getInvoiceAmount()<<endl;
  cout<<hammer.get_PartNumber()<<"  |  "<<hammer.get_PartDescription()<<"     |    "<<hammer.get_Quantity()<<"  |"<<hammer.get_Price()<<"  |  "<<hammer.getInvoiceAmount()<<endl;

  return 0;
}
