#include<iostream>
#include<string.h>
#include<stdlib.h>

class WashingMachine{
    char wm_name[30];
    int wm_voltage;
    int wm_capacity;
    int wm_asin;    //Amazon Standard Identification Number
    char wm_color[30];
    
public:
    void setWmName(char* name){
        strcpy(this->wm_name,name);
    }

     void setVoltage(int voltage){
        this->wm_voltage = voltage;
    }

    void setCapacity(int capacity){
        this->wm_capacity = capacity;
    }

    void setASIN(int asin){
        this->wm_asin = asin;
    }

    void setColor(char* color){
        strcpy(this->wm_color,color);
    }

    void getWmName(){
        printf("Name:-%s\n",this->wm_name);
    }

    void getVoltage(){
        printf("Voltage:-%d\n",this->wm_voltage);
    }


    void getCapacity(){
        printf("Capacity:-%d\n",this->wm_capacity);
    }

    void getASIN(){
        printf("ASIN:-%d\n",this->wm_asin);
    }

    void getColor(){
        printf("Color:-%s\n",this->wm_color);
    }

    void display(){
        printf("%s\t%dvolt\t%dKg\t%d\t%s\n",this->wm_name,this->wm_voltage,this->wm_capacity,this->wm_asin,this->wm_color);
    }
};

int main(){
    WashingMachine wm1,wm2;

    //Setters(Mutators)....
    wm1.setWmName("Good_Life");   
    wm1.setVoltage(230); 
    wm1.setCapacity(8);
    wm1.setASIN(1248);
    wm1.setColor("Grey");

    //Getters(Accessors)...
    wm1.getWmName();
    wm1.getVoltage();
    wm1.getCapacity();
    wm1.getASIN();
    wm1.getColor();

    //for Display
    wm1.display();

    printf("\n\n");

    return 0;
}

