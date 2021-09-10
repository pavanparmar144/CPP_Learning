#include<iostream>
#include<string.h>
#include<stdlib.h>

class Employee{
    int emp_id;
    char emp_Name[30];
    int emp_salary;
  
public:
    void setId(int id){
        this->emp_id = id;
    }

    void setName(char* name){
        strcpy(this->emp_Name,name);
    }

    void setSalary(double salary){
        this->emp_salary = salary;
    }

    void getId(){
        printf("ID:-%d\n",this->emp_id);
    }

    void getName(){
        printf("Name:-%s\n",this->emp_Name);
    }

    void getSalary(){
        printf("Salary:-%d\n",this->emp_salary);
    }

    void display(){
        printf("%d\t %s\t %d\t %f\n",this->emp_id,this->emp_Name,this->emp_salary);
    }
};

int main(){
    Employee emp1,emp2;

    //Setters(Mutators)....    
    emp1.setId(1000);
    emp1.setName("Pavan");
    emp1.setSalary(30000);

    //Getters(Accessors)...
    emp1.getId();
    emp1.getName();
    emp1.getSalary();
   
    //for Display
    emp1.display();

    printf("\n\n");

    emp2.setId(2000);
    emp2.setName("Omkar");
    emp2.setSalary(40000);

    emp2.getId();
    emp2.getName();
    emp2.getSalary();

    emp2.display();

    return 0;
}

