#include<iostream>
#include<string.h>
#include<stdlib.h>

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

    void getId(){
        printf("ID:-%d\n",this->hr_id);
    }

    void getName(){
        printf("Name:-%s\n",this->hr_Name);
    }

    void getSalary(){
        printf("Salary:-%d\n",this->hr_salary);
    }

    void getComission(){
        printf("Comission:-%f\n",this->hr_comission);
    }

    void display(){
        printf("%d\t %s\t %d\t %f\n",this->hr_id,this->hr_Name,this->hr_salary,hr_comission);
    }
};

int main(){
    HR hr1,hr2;

    //Setters(Mutators)....    
    hr1.setId(1000);
    hr1.setName("Rasika");
    hr1.setSalary(30000L);
    hr1.setComission(4000);

    //Getters(Accessors)...
    hr1.getId();
    hr1.getName();
    hr1.getSalary();
    hr1.getComission();

    //for Display
    hr1.display();

    printf("\n\n");

    hr2.setId(2000);
    hr2.setName("Priyasha");
    hr2.setSalary(40000L);
    hr2.setComission(8000);

    hr2.getId();
    hr2.getName();
    hr2.getSalary();
    hr2.getComission();

    hr2.display();

    return 0;
}

