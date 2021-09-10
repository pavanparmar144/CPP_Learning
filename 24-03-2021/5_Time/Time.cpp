#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

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
        printf("%d::%d::%d\n",this->time_hr,this->time_min,this->time_sec);
    }
};

istream& operator<<(istream&, Time&);
ostream& operator>>(ostream&, Time& );

int main(){
    Time time1;

    cin>>time1;

    cout<<time1;

    return 0;
}

istream& operator>>(istream& in, Time& time1){
    int hr,min,sec;

    in>>hr>>min>>sec;

    time1.sethr(hr);
    time1.setmin(min);
    time1.setsec(sec);

    return in;
}

ostream& operator<<(ostream& out, Time& time1){
    out<<time1.gethr()<<time1.getmin()<<time1.getsec();
    return out;
}