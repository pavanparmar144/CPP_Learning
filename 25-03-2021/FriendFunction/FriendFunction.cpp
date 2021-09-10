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

    void setSalary(double salary){
        this->emp_salary = salary;
    }


    int getId(){
        return this->emp_id;
    }

    char* getName(){
        return this->emp_Name;
    }

    double getSalary(){
        return this->emp_salary;
    }

    void display(){
        printf("%d\t %s\t %d\t \n",this->emp_id,this->emp_Name,this->emp_salary);
    }

    //declaring global overloading function as a friend function inside class so
    // it can access private member functions of a class.
    friend istream& operator>>(istream&, Employee&);
    friend ostream& operator<<(ostream&, Employee&);
};

// istream& operator>>(istream&, Employee&);
// ostream& operator<<(ostream&, Employee&);

int main(){
    Employee emp1,hr2;

    cin>>emp1;

    cout<<emp1;

//    emp1.display();
    
    return 0;
}

istream& operator>>(istream& in, Employee& emp1){

    // int id;
    // char name[30];
    // double salary;
    // float commission;

    in>>emp1.emp_id>>emp1.emp_Name>>emp1.emp_salary;

    // emp1.setId(id);
    // emp1.setName(name);
    // emp1.setSalary(salary);

    return in;
}

ostream& operator<<(ostream& out, Employee& emp1){

    out<<emp1.emp_id<<emp1.emp_Name<<emp1.emp_salary<<"\n";

    return out;
}






