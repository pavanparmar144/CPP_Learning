#include<iostream>
#include<string.h>
#include<stdlib.h>

class Date{
    int date_day;
    int date_month;
    int date_year;

public:
    void setday(int day){
        this->date_day = day;
    }

    void setmonth(int month){
        this->date_month = month;
    }

    void setyear(double year){
        this->date_year = year;
    }

    void getday(){
        printf("day:-%d\n",this->date_day);
    }

    void getmonth(){
        printf("month:-%d\n",this->date_month);
    }

    void getyear(){
        printf("year:-%d\n",this->date_year);
    }

    void display(){
        printf("%d/%d/%d\n",this->date_day,this->date_month,this->date_year);
    }
};

int main(){
    Date date1,date2;

    //Setters(Mutators)....    
    date1.setday(10);
    date1.setmonth(03);
    date1.setyear(2021);

    //Getters(Accessors)...
    date1.getday();
    date1.getmonth();
    date1.getyear();
   
    //for Display
    date1.display();

    printf("\n\n");

    date2.setday(11);
    date2.setmonth(03);
    date2.setyear(2021);

    date2.getday();
    date2.getmonth();
    date2.getyear();

    date2.display();

    return 0;
}

