#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Date{
    int date_day;
    int date_month;
    int date_year;

public:

    Date(){
        this->date_day = 1;
        this->date_month = 1;
        this->date_year = 1000; 
    }

    Date(int day, int month, int year){
        this->date_day = day;
        this->date_month = month;
        this->date_year = year; 
    }

    void setday(int day){
        this->date_day = day;
    }

    void setmonth(int month){
        this->date_month = month;
    }

    void setyear(double year){
        this->date_year = year;
    }

    int getday(){
        return this->date_day;
    }

    int getmonth(){
        return this->date_month;
    }

    int getyear(){
        return this->date_year;
    }

    void display(){
        printf("%d/%d/%d\n",this->date_day,this->date_month,this->date_year);
    }
};

int main(){
    Date date1;
    date1.display();

    printf("\n\n");

    Date date2(14,04,1992);
    date2.display();

    return 0;
}

