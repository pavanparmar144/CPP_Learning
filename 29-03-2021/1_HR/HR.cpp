#include<iostream>
#include<string.h>

using namespace std;


class HR{
    int hr_id;
    char hr_Name[30];
    int hr_salary;
    float hr_comission;

public:

    HR(){
        cout<<"Default Constructor....\n";
        this->hr_id = 0;
        strcpy(this->hr_Name,"Not-Set");
        this->hr_salary = 0;
        this->hr_comission = 0;
    }

    HR(int id,char* name, int salary, float comission){
        cout<<"Parameterized Constructor....\n";
        this->hr_id = id;
        strcpy(this->hr_Name,name);
        this->hr_salary = salary;
        this->hr_comission = comission;
    }

    //Setters
    void setId(int id){
        this->hr_id = id;
    }

    void setName(char* name){
        strcpy(this->hr_Name,name);
    }

    void setSalary(double salary){
        this->hr_salary = salary;
    }

    void setComission(float comission){
        this->hr_comission = comission;
    }

    //Getters
    int getId(){
        return this->hr_id;
    }

    char* getName(){
        return this->hr_Name;
    }

    int getSalary(){
        return this->hr_salary;
    }

    float getComission(){
        return this->hr_comission;
    }

    void display(){
        cout<<"Id: "<<this->hr_id<<"\n";
        cout<<"Name: "<<this->hr_Name<<"\n";
        cout<<"Salary: "<<this->hr_salary<<"\n";
        cout<<"Comision: "<<this->hr_comission<<"\n";
    }
};


int main(){
   
    HR hr1;
    hr1.display();
    printf("\n\n");

    HR hr2(1997,"Pavan",30000,1000);
    
    hr2.display();

    return 0;
}

