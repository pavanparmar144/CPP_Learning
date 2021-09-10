#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Admin{
    int ad_id;
    char ad_Name[30];
    int ad_salary;
    float ad_allowance;
    
public:

    Admin(){
        this->ad_id = 0;
        strcpy(this->ad_Name,"NA");
        this->ad_salary = 0;
        this->ad_allowance = 0;
    }

    Admin(int id, char* name, int salary, float allowance){
        this->ad_id = id;
        strcpy(this->ad_Name,name);
        this->ad_salary = salary;
        this->ad_allowance = allowance;
    }

    void setId(int id){
        this->ad_id = id;
    }

    void setName(char* name){
        strcpy(this->ad_Name,name);
    }

    void setSalary(double salary){
        this->ad_salary = salary;
    }

    void setAllowance(float allowance){
        this->ad_allowance = allowance;
    }

    int getId(){
        return this->ad_id;
    }

    char* getName(){
        return this->ad_Name;
    }

    int getSalary(){
        return this->ad_salary;
    }

    float getAllowance(){
        return this->ad_allowance;
    }

    void display(){
        cout<<"Id: "<<this->ad_id<<"\n";
        cout<<"Name: "<<this->ad_Name<<"\n";
        cout<<"Salary: "<<this->ad_salary<<"\n";
        cout<<"Allowance: "<<this->ad_allowance<<"\n";
    }
};

int main(){

    Admin ad1;
    ad1.display();

    printf("\n\n");

    Admin ad2(1000,"Sachin",30000,15000);
    ad2.display();

    return 0;
}

