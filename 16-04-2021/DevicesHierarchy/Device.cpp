#include<iostream>
#include<string.h>

using namespace std;

class Device{
    char name[30];
    int size;
    int price;

    public:
    Device(){
        strcpy(this->name,"NA");
        this->size = 0;
        this->price = 0;
    }

    Device(char* name,int size, int proce){
        strcpy(this->name,name);
        this->price =price;
        this->size = size;
    }

    void setName(char* name){
        strcpy(this->name,name);
    }
    void setSize(int size){
        this->size =size;
    }
    void setPrice(int price){
        this->price =price;
    }

    char* getName(){
        return this->name;
    }

    int getSize(){
        return this->size;
    }

    int getPrice(){
        return this->price;
    }

    virtual void specification(){
        cout<<"Device"<<"\n";
        cout<<"Name: "<<getName();
        cout<<"size: "<<getSize()<<"\n";
        cout<<"Price: "<<getPrice()<<"\n";
    }
};

class Headsets: public Device{
    char color[30];
    char type[30];

    public:
    Headsets():Device(){
        strcpy(this->color,"NA");
        strcpy(this->type,"NA");
      }

    Headsets(char*name, int size, int price,char* color, char* type):Device(name,size,price){
        strcpy(this->color,"NA");
        strcpy(this->type,"NA");
    }

    void setColor(char* color){
        strcpy(this->color,color);
    }

    void setType(char* type){
        strcpy(this->type,type);
    }

    char* getColor(){
        return this->color;
    }

    char* getType(){
        return this->type;
    }

    void specification(){
        Device:specification();
        cout<<"Device"<<"\n";
        cout<<"Color: "<<getColor()<<"\n";
        cout<<"Type: "<<getType()<<"\n";
    }
};


int main(){
    Device* ptr;

    ptr = new Headsets("Boat",4,2500,"Black","Bluetooth");
    ptr->specification();

    cout<<"n\n";

    return 0;

}
