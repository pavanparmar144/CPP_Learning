#include<iostream>
#include<string.h>
#include<stdlib.h>

class fan{
    int fan_id;
    char fan_companyName[30];
    int fan_price;
    int fan_rpm;
  
public:
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

    void getid(){
        printf("id:-%d\n",this->fan_id);
    }

    void getcompanyName(){
        printf("companyName:-%d\n",this->fan_companyName);
    }

    void getprice(){
        printf("price:-%d\n",this->fan_price);
    }

     void getRpm(){
        printf("RPM:-%d\n",this->fan_rpm);
    }

    void display(){
        printf("%d\t%s\t%d\t%d\n",this->fan_id,this->fan_companyName,this->fan_price,this->fan_rpm);
    }
};

int main(){
    fan fan1,fan2;

    //Setters(Mutators)....    
    fan1.setid(1);
    fan1.setcompanyName("Crompton");
    fan1.setprice(4800);
    fan1.setRpm(3000);

    //Getters(Accessors)...
    fan1.getid();
    fan1.getcompanyName();
    fan1.getprice();
    fan1.getRpm();
   
    //for Display
    fan1.display();

    printf("\n\n");

    fan2.setid(8);
    fan2.setcompanyName("Bajaj");
    fan2.setprice(2900);
    fan2.setRpm(3500);

    fan2.getid();
    fan2.getcompanyName();
    fan2.getprice();
    fan2.getRpm();

    fan2.display();

    return 0;
}

