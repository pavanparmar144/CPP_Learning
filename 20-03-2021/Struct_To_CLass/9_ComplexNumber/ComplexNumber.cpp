#include<iostream>
#include<string.h>
#include<stdlib.h>

class ComplexNumber{
    int cn_real;
    int cn_imaginary;

public:
    void setReal(int real){
        this->cn_real = real;
    }

    void setImaginary(int imaginary){
        this->cn_imaginary = imaginary;
    }

    void getReal(){
        printf("Real Number:-%d\n",this->cn_real);
    }

    void getImaginary(){
        printf("Imaginary Number:-%d\n",this->cn_imaginary);
    }

    void display(){
        printf("%d + %di\n",this->cn_real,this->cn_imaginary);
    }
};

int main(){
    ComplexNumber cn1,cn2;

    //Setters(Mutators)....    
    cn1.setReal(10);
    cn1.setImaginary(03);

    //Getters(Accessors)...
    cn1.getReal();
    cn1.getImaginary();

    //for Display
    cn1.display();

    printf("\n\n");

    cn2.setReal(8);
    cn2.setImaginary(12);

    cn2.getReal();
    cn2.getImaginary();

    cn2.display();

    return 0;
}

