#include<iostream>
using namespace std;

class A{
    public:
    void func1(){
        cout<<" hii mi class A";
    }
};
class B:public A{
    public:
    void func2(){
    cout<<" hii mi class B";
}
};
class C {
    public:
    void func3(){
        cout<<"hii mi class C";
    }
};
class D:public B,public C{

};
int main(){
       D obj;
       obj.func1();
       obj.func2();
       obj.func3();
       
}