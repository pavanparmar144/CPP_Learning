#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

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

    int getReal(){
        return this->cn_real;
    }

    int getImaginary(){
        return this->cn_imaginary;
    }

    void display(){
        cout<<this->getReal()<<"+"<<this->getImaginary()<<"i"<<"\n";
    }
};

istream& operator>>(istream&, ComplexNumber&);
ostream& operator<<(ostream&, ComplexNumber&);

int main(){
    ComplexNumber cn1;

    cin>>cn1;

    cout<<cn1;

    return 0;
}

istream& operator>>(istream& in, ComplexNumber& cn1){
    int real,img;

    in>>real>>img;

    cn1.setReal(real);
    cn1.setImaginary(img);

    return in;

}

ostream& operator<<(ostream& out, ComplexNumber& cn1){
    out<<cn1.getReal()<<cn1.getImaginary();

    return out;
}

