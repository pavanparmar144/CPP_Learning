#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class ComplexNumber{
    int cn_real;
    int cn_imaginary;

public:

    ComplexNumber(){
        this->cn_real = 0;
        this->cn_imaginary = 0;
    }

    ComplexNumber(int r, int i){
        this->cn_real = r;
        this->cn_imaginary = i;
    }

    void setReal(int real){
        this->cn_real = real;
    }

    void setImaginary(int imaginary){
        this->cn_imaginary = imaginary;
    }

    int getReal(){
        return this->cn_real;
    }

    int getImaginary(){
        return this->cn_imaginary;
    }

    void display(){
        printf("%d + %di\n",this->cn_real,this->cn_imaginary);
    }
};

int main(){
    ComplexNumber cn1;
    cn1.display();

    printf("\n\n");

    ComplexNumber cn2(10,20);
    cn2.display();

    return 0;
}

