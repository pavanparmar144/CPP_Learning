#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Time{
    int time_hr;
    int time_min;
    int time_sec;

public:

    Time(){
        this->time_hr = 0;
        this->time_min = 0;
        this->time_sec = 0;
    }

    Time(int hr, int min, int sec){
        this->time_hr = hr;
        this->time_min = min;
        this->time_sec = sec;
    }

    void sethr(int hr){
        this->time_hr = hr;
    }

    void setmin(int min){
        this->time_min = min;
    }

    void setsec(double sec){
        this->time_sec = sec;
    }


    int gethr(){
        return this->time_hr;
    }

    int getmin(){
        return this->time_min;
    }

    int getsec(){
        return this->time_sec;
    }

    void display(){
        cout<<this->time_hr<<":"<<this->time_min<<":"<<this->time_sec;
    }
};

int main(){
    Time time1;
    time1.display();

    printf("\n\n");

    Time time2(1,2,3);
    time2.display();

    return 0;
}

