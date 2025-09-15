#include<iostream>

using namespace std;

class Myclass{
    public:
    void myFunction(){
        cout<<"in my baseclass";
    }
};

class MyclassA{
    public:
    void myFunction2(){
        cout<<"in my class A";
    }
};

class MyclassC: public Myclass, public MyclassA{
};

int main(){
    MyclassC objC;
    objC.myFunction();
    objC.myFunction2();
    return 0;
}