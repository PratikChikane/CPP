//Virtual keyword should be uses when we want to achieve runtime polymorphism, it mainly focuses on function Overriding 
//through a single parent class over the child classes

#include<iostream>
#include<string.h>
using namespace std;

class Animal{
    public: 
   virtual void displayAnimal(){
        cout<<"Lion is king of Jungle"<<endl;
    }
};

class Tiger: public Animal{
    public:
    void displayAnimal() override{
        cout<<"Tiger is a National Animal"<<endl;
    }
};

class Peacock: public Animal{
    public:
    void displayAnimal() override{
        cout<<"Peacock is a National Bird"<<endl;
    }
};

int main(){
    Animal* tiger = new Tiger();
    Animal* peak = new Peacock();

    tiger->displayAnimal();
    peak->displayAnimal();

    delete tiger;
    delete peak;
    
    return 0;
}