#include<iostream>
#include<string.h>
#include<stdlib.h>

class Mobile{
    char mob_model[30];
    char mob_Os[30];
    int mob_battery;
    int mob_size;
    int mob_price;

public:
    void setMobModel(char* maufacturer){
        strcpy(this->mob_model,maufacturer);
    }

    void setOS(char* os){
        strcpy(this->mob_Os,os);
    }

    void setMobBattery(int battery){
        this->mob_battery = battery;
    }

    void setMobSize(int size){
        this->mob_size = size;
    }

    void setMobPrice(int price){
        this->mob_price = price;
    }

    void getMobModel(){
        printf("Mobile Manufacturer:-%d\n",this->mob_model);
    }

    void getOS(){
        printf("OS Name:-%s\n",this->mob_Os);
    }

    void getMobBattery(){
        printf("Mble battery:-%d\n",this->mob_battery);
    }

    void getMobSize(){
        printf("Mobile size:-%f\n",this->mob_size);
    }

     void getMobPrice(){
        printf("Mobile Price:-%d\n",this->mob_price);
    }

    void display(){
        printf("%s\t%s\t%dmAh\t%dinches\t%dRs\t\n",this->mob_model,this->mob_Os,this->mob_battery,this->mob_size,this->mob_price);
    }
};

int main(){
    Mobile mob1,mob2;

    //Setters(Mutators)....    
    mob1.setMobModel("Realme_2_Pro");
    mob1.setOS("Android");
    mob1.setMobBattery(3400);
    mob1.setMobSize(6);
    mob1.setMobPrice(15000);

    //Getters(Accessors)...
    mob1.getMobModel();
    mob1.getOS();
    mob1.getMobBattery();
    mob1.getMobSize();
    mob1.getMobPrice();

    //for Display
    mob1.display();

    printf("\n\n");

    return 0;
}

