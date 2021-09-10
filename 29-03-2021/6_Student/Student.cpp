#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Student{
    int stud_id;
    char stud_Name[30];
    int stud_marks;

public:

    Student(){
        this->stud_id = 0;
        strcpy(this->stud_Name,"NA");
        this->stud_marks =0;
    }

    Student(int id, char* name, int marks){
        this->stud_id = id;
        strcpy(this->stud_Name,name);
        this->stud_marks = marks;
    }

    void setId(int id){
        this->stud_id = id;
    }

    void setName(char* name){
        strcpy(this->stud_Name,name);
    }

    void setMarks(int marks){
        this->stud_marks = marks;
    }

    int getId(){
        return this->stud_id;
    }

    char* getName(){
        return this->stud_Name;
    }

    int getMarks(){
        return this->stud_marks;
    }

    void display(){
        printf("%d\t %s\t %d%%\t ",this->stud_id,this->stud_Name,this->stud_marks);
    }
};

int main(){

    Student stud1;
    stud1.display();

    printf("\n\n");

    Student stud2(10,"Pavan",300);
    stud2.display();

    return 0;
}

