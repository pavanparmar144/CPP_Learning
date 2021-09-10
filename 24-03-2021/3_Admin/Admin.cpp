#include<iostream>
#include<stdlib.h>

using namespace std;

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

    void setSalary(int salary){
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
        printf("%d\t %s\t %d\t %f\n",this->ad_id,this->ad_Name,this->ad_salary,this->ad_allowance);
    }
};

istream& operator>>(istream&, Admin&);
ostream& operator<<(ostream&, Admin&);


int main(){
    Admin ad1;

    cin>>ad1;

    cout<<ad1;
    
    return 0;
}

istream& operator>>(istream& in, Admin& ad1){
    int id,salary;
    char name[30];
    float allowance;

    in>>id>>name>>salary>>allowance;

    ad1.setId(id);
    ad1.setName(name);
    ad1.setSalary(salary);
    ad1.setAllowance(allowance);

    return in;
}

ostream& operator<<(ostream& out, Admin& ad1){
    out<<ad1.getId()<<ad1.getName()<<ad1.getSalary()<<ad1.getAllowance();

    return out;
}
