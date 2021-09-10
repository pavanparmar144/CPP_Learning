#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class HR{
    int hr_id;
    char hr_Name[30];
    int hr_salary;
    float hr_comission;

public:
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

    int getId(){
        return this->hr_id;
    }

    char* getName(){
        return this->hr_Name;
    }

    double getSalary(){
        return this->hr_salary;
    }

    float getComission(){
        return this->hr_comission;
    }

    void display(){
        printf("%d\t %s\t %d\t %f\n",this->hr_id,this->hr_Name,this->hr_salary,hr_comission);
    }
};

istream& operator>>(istream&, HR&);
ostream& operator<<(ostream&, HR&);

int main(){
    HR hr1,hr2;

    cin>>hr1;

    cout<<hr1;

//    hr1.display();
    
    return 0;
}

istream& operator>>(istream& in, HR& hr1){

    int id;
    char name[30];
    double salary;
    float commission;

    in>>id>>name>>salary>>commission;

    hr1.setId(id);
    hr1.setName(name);
    hr1.setSalary(salary);
    hr1.setComission(commission);

    return in;
}

ostream& operator<<(ostream& out, HR& h1){

    out<<h1.getId()<<h1.getName()<<h1.getSalary()<<h1.getComission();

    return out;
}






