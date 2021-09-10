#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Employee{
    int emp_id;
    char emp_Name[30];
    int emp_salary;
  
public:

    Employee(){
        this->emp_id = 0;
        strcpy(this->emp_Name,"NA");
        this->emp_salary = 0;
    }

    Employee(int id, char* name, int salary){
        this->emp_id = id;
        strcpy(this->emp_Name,name);
        this->emp_salary = salary;
    }

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
    Employee emp1;
    emp1.display();

    printf("\n\n");

    Employee emp2(1007, "Pavan", 30000);

    return 0;
}

