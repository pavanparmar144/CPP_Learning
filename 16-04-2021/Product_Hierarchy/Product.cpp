#include<iostream>
#include<string.h>

using namespace std;


class Product{

    int id;
    char name[30];
    double price;

    public:
    Product(){
        cout<<"Product Default\n";
        this->id =0;
        strcpy(this->name,"NA");
        this->price = 0;
    }

    Product(int id, char* name, double sal){
        cout<<"Product Parametorized\n";
        this->id =id;
        strcpy(this->name,name);
        this->price = sal;
    }

    void setId(int id){
        this->id = id;
    }

    void setName(char* name){
        strcpy(this->name, name);
    }

    void setPrice(double price){
        this->price = price;
    }

    int getId(){
        return this->id;
    }

    char* getName(){
        return this->name;
    }

    double getPrice(){
        return this->price;
    }

    virtual void display(){
        cout<<"id: "<<this->getId()<<"\n";
        cout<<"Name: "<<this->getName()<<"\n";
        cout<<"Price: "<<this->getPrice()<<"\n";
    }

    
};  //Product Ends here

class Watches:public Product{
    char type[30];
    char typeOfDigits[30];

    public:
    Watches():Product(){
        cout<<"Watches Default\n";
        strcpy(this->type,"NA");
        strcpy(this->typeOfDigits,"NA");
    }

    Watches(int id, char* name, double price, char* type, char* typeOfDigits):Product(id,name,price){
        cout<<"Watches Parametorized\n";
        strcpy(this->type,type);
        strcpy(this->typeOfDigits,typeOfDigits);
    }

    void setType(char* type){
        strcpy(this->type,type);
    }

    void setTypeOfDigits(char* typeOfDigits){
        strcpy(this->typeOfDigits,typeOfDigits);
    }

    char* getType(){
        return this->type;
    }

    char* getTypeOfDigits(){
        return this->typeOfDigits;
    }

    void display(){
        Product::display();
        cout<<"Type: "<<this->getType()<<"\n";
        cout<<"Type of Digits: "<<this->getTypeOfDigits()<<"\n";
    }

};


class Books:public Product{
    char title[30];
    char bindingType[30];

    public:
    Books():Product(){
        cout<<"Books Default\n";
        strcpy(this->title,"NA");
        strcpy(this->bindingType,"NA");
    }

    Books(int id, char* name, double price, char* title, char* bindingType):Product(id,name,price){
        cout<<"Books Parametorized\n";
        strcpy(this->title,title);
        strcpy(this->bindingType,bindingType);
    }

    void setTitle(char* title){
        strcpy(this->title,title);
    }

    void setBindingType(char* bindingType){
        strcpy(this->bindingType,bindingType);
    }

    char* getTitle(){
        return this->title;
    }

    char* getBindingType(){
        return this->bindingType;
    }

    void display(){
        Product::display();
        cout<<"Title: "<<this->getTitle()<<"\n";
        cout<<"Type of Binding: "<<this->getBindingType()<<"\n";
    }

};


int main(){

    Product *ptr;

    ptr = new Watches(1, "Sonata", 3000, "Analog", "Roman");
    ptr->display();

    cout<<"\n\n";

    ptr = new Books(123,"MrutyunJay",1500,"Shivaji","Glued");
    ptr->display();
    cout<<"\n\n";
    
}


