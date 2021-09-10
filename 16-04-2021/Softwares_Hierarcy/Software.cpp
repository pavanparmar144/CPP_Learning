#include<iostream>
#include<string.h>

using namespace std;

class Softwares{
    char name[30];
    char osRequired[30];
    double cost;

    public:
    Softwares(){
        strcpy(this->name,"NA");
        strcpy(this->osRequired,"NA");
    }

     Softwares(char* name, char* osName, double cost){
        strcpy(this->name,name);
        strcpy(this->osRequired,osName);
        this->cost =cost;
    }

    void setName(char* name){
        strcpy(this->name,name);
    }

    void setOsName(char* osName){
        strcpy(this->osRequired, osName);    
    }

    void setCost(double cost){
        this->cost = cost;
    }

    char* getName(){
        return this->name;
    }

    char* getOsName(){
        return this->osRequired;
    }

    double getCost(){
        return this->cost;
    }

    virtual void display(){
        cout<<"Name of Software: "<<getName()<<"\n";
        cout<<"OS required for softwares: "<<getOsName()<<"\n";
        cout<<"Cost: "<<getCost()<<"\n";
    }
};


class ChatApplication:public Softwares{
    char isVideoSupport[30];
    char protocol[30];

    public:
    ChatApplication():Softwares(){
        strcpy(this->isVideoSupport,"NA");
        strcpy(this->protocol,"NA");
    }

     ChatApplication(char* name, char* osName,double cost,char* isVideoSupport, char* protocol):Softwares(name, osName,cost){
        strcpy(this->isVideoSupport,isVideoSupport);
        strcpy(this->protocol,protocol);
    }

    void setIsVideoSupport(char* isVideoSupport){
        strcpy(this->isVideoSupport,isVideoSupport);
    }

    void setProtocol(char* protocol){
        strcpy(this->protocol, protocol);    
    }

    char* getIsVideoSupport(){
        return this->isVideoSupport;
    }

    char* getProtocol(){
        return this->protocol;
    }

    void display(){
        Softwares:display();
        cout<<"Is supporting video: "<<getIsVideoSupport()<<"\n";
        cout<<"Protocol: "<<getProtocol()<<"\n";
    }
};

int main(){
    Softwares* ptr;

    ptr = new ChatApplication("WhatsApp","Android",170,"Yes","MQTT");

    ptr->display();

    cout<<"\n\n";


    return 0;
}