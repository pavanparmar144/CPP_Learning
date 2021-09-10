#include<iostream>
#include<string.h>
#include<stdlib.h>

class Admin{
    int ad_id;
    char ad_Name[30];
    int ad_salary;
    float ad_allowance;
    
public:
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

    void getId(){
        printf("ID:-%d\n",this->ad_id);
    }

    void getName(){
        printf("Name:-%s\n",this->ad_Name);
    }

    void getSalary(){
        printf("Salary:-%d\n",this->ad_salary);
    }

    void getAllowance(){
        printf("Allowance:-%f\n",this->ad_allowance);
    }

    void display(){
        printf("%d\t %s\t %d\t %f\n",this->ad_id,this->ad_Name,this->ad_salary,this->ad_allowance);
    }
};

int main(){
    Admin ad1,ad2;

    //Setters(Mutators)....    
    ad1.setId(1000);
    ad1.setName("Sachin");
    ad1.setSalary(30000L);
    ad1.setAllowance(4000);

    //Getters(Accessors)...
    ad1.getId();
    ad1.getName();
    ad1.getSalary();
    ad1.getAllowance();
   
    //for Display
    ad1.display();

    printf("\n\n");

    ad2.setId(2000);
    ad2.setName("Nishant");
    ad2.setSalary(40000L);
    ad2.setAllowance(8000);

    ad2.getId();
    ad2.getName();
    ad2.getSalary();
    ad2.getAllowance();

    ad2.display();

    return 0;
}

