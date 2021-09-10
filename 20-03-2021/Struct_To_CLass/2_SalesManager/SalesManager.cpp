#include<iostream>
#include<string.h>
#include<stdlib.h>

class SalesManager{
    int sm_id;
    char sm_Name[30];
    int sm_salary;
    float sm_incentive;
    int sm_target;

public:
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

    void getId(){
        printf("ID:-%d\n",this->sm_id);
    }

    void getName(){
        printf("Name:-%s\n",this->sm_Name);
    }

    void getSalary(){
        printf("Salary:-%d\n",this->sm_salary);
    }

    void getIncentive(){
        printf("Comission:-%f\n",this->sm_incentive);
    }

     void getTarget(){
        printf("Target:-%d\n",this->sm_target);
    }

    void display(){
        printf("%d\t %s\t %d\t %f\n",this->sm_id,this->sm_Name,this->sm_salary,this->sm_incentive,this->sm_target);
    }
};

int main(){
    SalesManager sm1,sm2;

    //Setters(Mutators)....    
    sm1.setId(1000);
    sm1.setName("Sushant");
    sm1.setSalary(30000L);
    sm1.setIncentive(4000);
    sm1.setTarget(20);

    //Getters(Accessors)...
    sm1.getId();
    sm1.getName();
    sm1.getSalary();
    sm1.getIncentive();
    sm1.getTarget();

    //for Display
    sm1.display();

    printf("\n\n");

    sm2.setId(2000);
    sm2.setName("Rahul");
    sm2.setSalary(40000L);
    sm2.setIncentive(8000);
    sm2.setTarget(30);

    sm2.getId();
    sm2.getName();
    sm2.getSalary();
    sm2.getIncentive();
    sm2.getTarget();

    sm2.display();

    return 0;
}

