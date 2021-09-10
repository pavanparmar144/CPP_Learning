#include<iostream>
#include<string.h>

using namespace std;

class Person{

    int id;
    char name[30];
    double salary;

    public:
    Person(){
        cout<<"Person Default\n";
        this->id =0;
        strcpy(this->name,"NA");
        this->salary = 0;
    }

    Person(int id, char* name, double sal){
        cout<<"Person Parametorized\n";
        this->id =id;
        strcpy(this->name,name);
        this->salary = sal;
    }

    void setId(int id){
        this->id = id;
    }

    void setName(char* name){
        strcpy(this->name, name);
    }

    void setSal(double sal){
        this->salary = sal;
    }

    int getId(){
        return this->id;
    }

    char* getName(){
        return this->name;
    }

    double getSal(){
        return this->salary;
    }

    virtual void display(){
        cout<<"id: "<<this->getId()<<"\n";
        cout<<"Name: "<<this->getName()<<"\n";
        cout<<"Salary: "<<this->getSal()<<"\n";
    }

    virtual void calSal(){
        cout<<"Total Salary: "<<getSal()<<"\n";
    }
};  //Person Ends here

class SalesManager:public Person{

    double incentive;
    int target;

    public:
    SalesManager():Person(){
        cout<<"Salesmanager Default\n";
        this->incentive =0;
        this->target = 0;
    }

    SalesManager(int id, char* name, double sal, double inc, int target):Person(id,name,sal){
        cout<<"SalesManager Parametorized\n";
        this->incentive = inc;
        this->target = target;
    }

    void setIncentive(int incentive){
        this->incentive = incentive;
    }

    void setTarget(double target){
        this->target = target;
    }

    int getIncentive(){
        return this->incentive;
    }

    double getTarget(){
        return this->target;
    }

    void display(){
        Person::display();
        cout<<"Incentive: "<<this->getIncentive()<<"\n";
        cout<<"Target: "<<this->getTarget()<<"\n";
    }

    void calSal(){
        cout<<"Total Salary: "<<getSal()+getIncentive()<<"\n";
    }
};

class Admin:public Person{

    double allowance;

    public:
    Admin():Person(){
        cout<<"Admin Default\n";
        this->allowance =0;
      
    }

    Admin(int id, char* name, double sal, double allowance):Person(id,name,sal){
        cout<<"Admin Parametorized\n";
        this->allowance = allowance;
    }

    void setAllowance(int allowance){
        this->allowance = allowance;
    }

    int getAllowance(){
        return this->allowance;
    }

    void display(){
        Person::display();
        cout<<"Allowance: "<<this->getAllowance()<<"\n";
    }

    void calSal(){
        cout<<"Total Salary: "<<getSal()+getAllowance()<<"\n";
    }
};

class HR:public Person{

    double commission;

    public:
    HR():Person(){
        cout<<"HR Default\n";
        this->commission =0;
    }

    HR(int id, char* name, double sal, double commission):Person(id,name,sal){
        cout<<"SalesManager Parametorized\n";
        this->commission = commission;
    }

    void setCommission(int commission){
        this->commission = commission;
    }

    int getCommission(){
        return this->commission;
    }

    void display(){
        Person::display();
        cout<<"Commission: "<<this->getCommission()<<"\n";
    }

    void calSal(){
        cout<<"Total Salary: "<<getSal()+getCommission()<<"\n";
    }
};



int main(){

    Person *ptr;

    ptr = new SalesManager(1997,"Pavan",30000,15000,30);
    ptr->display();
    ptr->calSal();

    cout<<"\n\n";

    ptr = new Admin(1900,"Aniket",30000,8000);
    ptr->display();
    ptr->calSal();

    cout<<"\n\n";

    ptr = new HR(1875,"Priyasha",40000,5000);
    ptr->display();
    ptr->calSal();

    cout<<"\n\n";
    
}


