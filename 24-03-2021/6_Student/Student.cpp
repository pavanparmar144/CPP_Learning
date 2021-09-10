#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

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

istream& operator>>(istream& , Student&);
ostream& operator<<(ostream&, Student&);

int main(){
    Student stud1;

    cin>>stud1;

    cout<<stud1;

    return 0;
}

istream& operator>>(istream& in, Student& stud1){
    int id,marks;
    char name[30];

    in>>id>>name>>marks;

    stud1.setId(id);
    stud1.setName(name);
    stud1.setMarks(marks);

    return in;
}

ostream& operator<<(ostream& out, Student& stud1){
    out<<stud1.getId()<<stud1.getName()<<stud1.getMarks();

    return out;
}


