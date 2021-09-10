#include<iostream>
#include<string.h>
#include<stdlib.h>

class Student{
    int stud_id;
    char stud_Name[30];
    int stud_marks;

public:
    void setId(int id){
        this->stud_id = id;
    }

    void setName(char* name){
        strcpy(this->stud_Name,name);
    }

    void setMarks(int marks){
        this->stud_marks = marks;
    }

    void getId(){
        printf("ID:-%d\n",this->stud_id);
    }

    void getName(){
        printf("Name:-%s\n",this->stud_Name);
    }

    void getMarks(){
        printf("Marks:-%d%%\n",this->stud_marks);
    }

    void display(){
        printf("%d\t %s\t %d%%\t ",this->stud_id,this->stud_Name,this->stud_marks);
    }
};

int main(){
    Student stud1,stud2;

    //Setters(Mutators)....    
    stud1.setId(01);
    stud1.setName("Pavan");
    stud1.setMarks(82);

    //Getters(Accessors)...
    stud1.getId();
    stud1.getName();
    stud1.getMarks();
   
    //for Display
    stud1.display();

    printf("\n\n");

    stud2.setId(2000);
    stud2.setName("Omkar");
    stud2.setMarks(80);

    stud2.getId();
    stud2.getName();
    stud2.getMarks();

    stud2.display();

    return 0;
}

