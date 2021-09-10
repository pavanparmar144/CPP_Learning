#include<iostream>
#include<string.h>

using namespace std;


class Defence{

    public:
    Defence(){
        cout<<"Defence Default\n";
    }

    virtual void Attack(){
        cout<<"Attack.....\n";
    }
};  //Defence Ends here

class  Army:public Defence{

    public:
     Army():Defence(){
        cout<<"Army Default\n";
    }

    void Attack(){
        Defence::Attack();
        cout<<"Ground Attack\n";
    }
};

class  AirForce:public Defence{

    public:
     AirForce():Defence(){
        cout<<" AirForce Default\n";
     }

    void Attack(){
        Defence::Attack();
        cout<<"Air Attack\n";
    }
};

class Navy:public Defence{

    public:
    Navy():Defence(){
        cout<<"Navy Default\n";
    }

    void Attack(){
        Defence::Attack();
        cout<<"Under Water Attack...\n";
    }

};



int main(){

    Defence *ptr;

    ptr = new Army();
    ptr->Attack();

    cout<<"\n\n";

    ptr = new AirForce();
    ptr->Attack();

    cout<<"\n\n";

    ptr = new Navy();
    ptr->Attack();

    cout<<"\n\n";
    
}


