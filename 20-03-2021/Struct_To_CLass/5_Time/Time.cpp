#include<iostream>
#include<string.h>
#include<stdlib.h>

class Time{
    int time_hr;
    int time_min;
    int time_sec;

public:
    void sethr(int hr){
        this->time_hr = hr;
    }

    void setmin(int min){
        this->time_min = min;
    }

    void setsec(double sec){
        this->time_sec = sec;
    }

    void gethr(){
        printf("hr:-%d\n",this->time_hr);
    }

    void getmin(){
        printf("min:-%d\n",this->time_min);
    }

    void getsec(){
        printf("sec:-%d\n",this->time_sec);
    }

    void display(){
        printf("%d::%d::%d\n",this->time_hr,this->time_min,this->time_sec);
    }
};

int main(){
    Time time1,time2;

    //Setters(Mutators)....    
    time1.sethr(10);
    time1.setmin(03);
    time1.setsec(48);

    //Getters(Accessors)...
    time1.gethr();
    time1.getmin();
    time1.getsec();
   
    //for Display
    time1.display();

    printf("\n\n");

    time2.sethr(8);
    time2.setmin(12);
    time2.setsec(19);

    time2.gethr();
    time2.getmin();
    time2.getsec();

    time2.display();

    return 0;
}

