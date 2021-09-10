#include<iostream>
#include<stdlib.h>

using namespace std;

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

    int getId(){
        return this->sm_id;
    }

    char* getName(){
        return this->sm_Name;
    }

    int getSalary(){
        return this->sm_salary;
    }

    float getIncentive(){
        return this->sm_incentive;
    }

     int getTarget(){
        return this->sm_target;
    }

    void display(){
        printf("%d\t %s\t %d\t %f\n",this->sm_id,this->sm_Name,this->sm_salary,this->sm_incentive,this->sm_target);
    }
};


istream& operator>>(istream&, SalesManager&);
ostream& operator<<(ostream&, SalesManager&);


int main(){
    SalesManager sm1;

    cin>>sm1;

    cout<<sm1;
    
    return 0;
}

istream& operator>>(istream& in, SalesManager& sm1){
    int id,salary,target;
    char name[30];
    float incentive;

    in>>id>>name>>salary>>incentive>>target;

    sm1.setId(id);
    sm1.setName(name);
    sm1.setSalary(salary);
    sm1.setIncentive(incentive);
    sm1.setTarget(target);

    return in;
}

ostream& operator<<(ostream& out, SalesManager& sm1){
    
    out<<sm1.getId()<<sm1.getName()<<sm1.getSalary()<<sm1.getIncentive()<<sm1.getIncentive();
    
    return out;
}