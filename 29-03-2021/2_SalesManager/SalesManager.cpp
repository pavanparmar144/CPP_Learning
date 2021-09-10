#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class SalesManager{
    int sm_id;
    char sm_Name[30];
    int sm_salary;
    float sm_incentive;
    int sm_target;

public:

    SalesManager(){
        this->sm_id = 0;
        strcpy(this->sm_Name,"NA");
        this->sm_salary = 0;
        this->sm_incentive = 0;
        this->sm_target = 0;
    }

    SalesManager(int id, char* name, int salary, float incentive, int target){
        this->sm_id = id;
        strcpy(this->sm_Name,name);
        this->sm_salary = salary;
        this->sm_incentive = incentive;
        this->sm_target = target;
    }

    void setId(int id){
        this->sm_id = id;
    }

    void setName(char* name){
        strcpy(this->sm_Name,name);
    }

    void setSalary(double salary){
        this->sm_salary = salary;
    }

    void setIncentive(float incentive){
        this->sm_incentive = incentive;
    }

    void setTarget(int target){
        this->sm_target = target;
    }

    int getId(){
        return this->sm_id;
    }

    char* getName(){
        return this->sm_Name;
    }

    double getSalary(){
        return this->sm_salary;
    }

    float getIncentive(){
        return this->sm_incentive;
    }

    int getTarget(){
        return this->sm_target;
    }

    void display(){
        cout<<"Id: "<<this->sm_id<<"\n";
        cout<<"Name: "<<this->sm_Name<<"\n";
        cout<<"Salary: "<<this->sm_salary<<"\n";
        cout<<"Comision: "<<this->sm_incentive<<"\n";
        cout<<"Target: "<<this->sm_target<<"\n";
    }
};

int main(){

    SalesManager sm1;
    sm1.display();

    printf("\n\n");

    SalesManager sm2(1997,"Pavan",30000,20000,50);
    sm2.display();

    return 0;
}

