#include<iostream>

using namespace std;

//compile time polymorphism uses function Overloading and binds the static data within a single class at compile time
class A{
public:
void print(int num){
    cout<<"Print the integer: "<<num<<endl;
}
void print(double num){
    cout<<"Print the double: "<<num<<endl;
}
void print(string text){
    cout<<"Print the String: "<<text<<endl;
}
};

int main(){
    A obj;
    obj.print(8);
    obj.print(7.6);
    obj.print("Hello, Hie");

    return 0;
}