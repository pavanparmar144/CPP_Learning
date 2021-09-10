#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class fan{
    int fan_id;
    char fan_companyName[30];
    int fan_price;
    int fan_rpm;
  
public:

    fan(){
        this->fan_id = 0;
        strcpy(this->fan_companyName,"Na");
        this->fan_price = 0;
        this->fan_rpm = 0;
    }

    fan(int id, char* name, int price,int rpm){
        this->fan_id = id;
        strcpy(this->fan_companyName,name);
        this->fan_price = price;
        this->fan_rpm = rpm;
    }

    void setid(int id){
        this->fan_id = id;
    }

    void setcompanyName(char* companyName){
        strcpy(this->fan_companyName,companyName);
    }

    void setprice(int price){
        this->fan_price = price;
    }

    void setRpm(int rpm){
        this->fan_rpm = rpm;
    }

    int getid(){
        return this->fan_id;
    }

    char* getcompanyName(){
        return this->fan_companyName;
    }

    int getprice(){
        return this->fan_price;
    }

    int getRpm(){
        return this->fan_rpm;
    }

    void display(){
        printf("%d\t%s\t%d\t%d\n",this->fan_id,this->fan_companyName,this->fan_price,this->fan_rpm);
    }
};

int main(){

    fan fan1;
    fan1.display();

    printf("\n\n");

    fan fan2(1,"fan",3000,3000);
    fan2.display();

    return 0;
}

