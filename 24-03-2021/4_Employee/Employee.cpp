#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

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

    void setSalary(int salary){
        this->emp_salary = salary;
    }

    int getId(){
        return this->emp_id;
    }

    char* getName(){
        return this->emp_Name;
    }

    int getSalary(){
        return this->emp_salary;
    }

    void display(){
        printf("%d\t %s\t %d\t %f\n",this->emp_id,this->emp_Name,this->emp_salary);
    }
};

istream& operator>>(istream&,Employee&);
ostream& operator<<(ostream&,Employee&);

int main(){
    Employee emp1;

    cin>>emp1;
    cout<<emp1;
   
    return 0;
}

istream& operator>>(istream& in, Employee& emp1){

    int id, salary;
    char name[30];

    in>>id>>name>>salary;

    emp1.setId(id);
    emp1.setName(name);
    emp1.setSalary(salary);

    return in;
}

ostream& operator<<(ostream& out, Employee& emp1){
    out<<emp1.getId()<<emp1.getName()<<emp1.getSalary();

    return out;
}
