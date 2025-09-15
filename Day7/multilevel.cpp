#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"Base class A Constructor";
    }
    
};
class B : public A{
    public:
    B(){
        cout<<"Class B Constructor";
    }
    
};
class C : public B{
    public:
    C(){
        cout<<"class C constructor";
    }
    
};
int main(){
    C obj1;
    return 0;

}