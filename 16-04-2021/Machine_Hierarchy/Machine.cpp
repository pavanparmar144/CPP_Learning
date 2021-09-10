#include<iostream>
#include<string.h>

using namespace std;


class Machine{

    char companyName[30];
    double price;
    char color[30];

    public:
    Machine(){
        cout<<"Machine Default\n";  
        strcpy(this->companyName,"NA");
        this-> price = 0;
        strcpy(this->color,"NA");
    }

    Machine(char* companyName, double price, char* color){
        cout<<"Machine Parametorized\n";
        strcpy(this->companyName,companyName);
        this-> price = price;
        strcpy(this->color,color);
    }

    void setcompanyName(char* companyName){
        strcpy(this->companyName, companyName);
    }

    void setSal(double sal){
        this-> price = sal;
    }

    void setColor(char* color){
        strcpy(this->color, color);
    }

    
    char* getcompanyName(){
        return this->companyName;
    }

    double getSal(){
        return this-> price;
    }

    char* getColor(){
        return this->color;
    }

    virtual void display(){
        
        cout<<"companyName: "<<this->getcompanyName()<<"\n";
        cout<<" price: "<<this->getSal()<<"\n";
        cout<<"Color: "<<this->getColor()<<"\n";
    }

};  //Machine Ends here

class Laptop:public Machine{

    int ram;
    int rom;
    int battery;

    public:
    Laptop():Machine(){
        cout<<"Laptop Default\n";
        this->ram =0;
        this->rom = 0;
        this->battery =0;
    }

    Laptop(char* companyName, double price, char* color, int ram, int rom, int battery):Machine(companyName,price,color){
        cout<<"Laptop Parametorized\n";
        this->ram = ram;
        this->rom = rom;
        this->battery = battery;
    }

    void setRam(int ram){
        this->ram = ram;
    }

    void setRom(int rom){
        this->rom = rom;
    }

    void setBattery(int battery){
        this->battery = battery;
    }

    int getRam(){
        return this->ram;
    }

    double getRom(){
        return this->rom;
    }

    double getBattery(){
        return this->battery;
    }

    void display(){
        Machine::display();
        cout<<"RAM: "<<this->getRam()<<"\n";
        cout<<"ROM: "<<this->getRom()<<"\n";
        cout<<"Battery: "<<this->getBattery()<<"\n";
    }
};

class WashingMachine:public Machine{

    int voltage;
    int capacity;
    char type[30];
    int starRatting;

    public:
    WashingMachine():Machine(){
        cout<<"WashingMachine Default\n";
        this->voltage =0;
        this->capacity =0;
        strcpy(this->type,"NA");
        this->starRatting =0;      
    }

    WashingMachine(char* companyName, double price, char* color, int vol, int cap,char* type, int stars):Machine(companyName,price,color){
        cout<<"WashingMachine Parametorized\n";
        this->voltage =vol;
        this->capacity =cap;
        strcpy(this->type,type);
        this->starRatting =stars; 
    }

    void setVoltage(int vol){
        this->voltage = vol;
    }

    void setCapacity(int capacity){
        this->capacity = capacity;
    }

    void setType(char* type){
        strcpy(this->type,type);
    }

    void setStarRatting(int star){
        this->starRatting = star;
    }

    int getVoltage(){
        return this->voltage;
    }

    int getCapacity(){
        return this->capacity;
    }

    char* getType(){
        return this->type;
    }

    int getStarRatting(){
        return this->starRatting;
    }

    void display(){
        Machine::display();
        cout<<"Voltage: "<<this->getVoltage()<<"\n";
        cout<<"Capacity: "<<this->getCapacity()<<"\n";
        cout<<"Type: "<<this->getType()<<"\n";
        cout<<"Star Ratting: "<<this->getStarRatting()<<"\n";
    }
};



int main(){

    Machine *ptr;

    ptr = new Laptop("Dell",30000,"Black",4,500,15000);
    ptr->display();

    cout<<"\n\n";

    ptr = new WashingMachine("LG",10000,"White",230,8,"Top",5);
    ptr->display();

    cout<<"\n\n";

    
}


