#include<iostream>
#include<string.h>

using namespace std;

class Bank{
    int accNo;
    char accHolderName[30];
    double ammount;
    static int interestRate;

    public:
    
    //Setters
    void setAccNo(int acc){
        this->accNo = acc;
    }

    void setAccHolderName(char* ahName){
        strcpy(this->accHolderName,ahName);
    }

    void setAmmount(double ammount){
        this->ammount = ammount;
    }

    static void setInterestRate(int interest){
        interestRate = interest;
    }

    //Getters
    int getAccNo(){
        return this->accNo;
    }

    char* getAccHolderName(){
        return this->accHolderName;
    }

    double getAmmount(){
        return this->ammount;
    }

    int getInterestRate(){
        return this->interestRate;
    }

    void display(){
        cout<<"Account Number: "<<this->accNo<<"\n"<<"Account Holder Name: "<<this->accHolderName<<"\n";
        cout<<"Ammount: "<<this->ammount<<"\n"<<"Interest Rate: "<<this->interestRate<<"\n";
    }
};  //Class ends here

int Bank :: interestRate = 0;



int main(){

    Bank::setInterestRate(20);

    Bank b1,b2;
    b1.setAccHolderName("Pavan");
    b1.setAccNo(1404);
    b1.setAmmount(30000);
   // b1.setInterestRate(9);

    b1.display();

    b2.setAccHolderName("Vishu");
    b2.setAccNo(0403);
    b2.setAmmount(15000);
   // b2.setInterestRate(9);

    b2.display();

    //changing static using object....
    //b1.setInterestRate(10);// which should not happen...

    b1.display();
    b2.display();

    return 0;
}