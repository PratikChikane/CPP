#include<iostream>
using namespace std;

class Complex{
    int real;
    int img;
    public:
    void accept();
    void display();
    void setReal(int);
    int getReal();
};
void Complex :: accept(){
    cout<<"Enter Real And img value:\n";
    cin>>real>>img;
}
void Complex :: display(){
    cout<<"Complex Number is"<<real<<"+"<<img<<"i"<<endl;

}
void Complex::setReal(int r){
    real=r;
}
int Complex::getReal(){
    return real;
}
int main(){
    Complex c1;
    cout<<"address of an obj is"<<&c1<<"\n";
    c1.accept();
    c1.display();
    c1.setReal(10);
    
    cout<<"real part is"<< c1.getReal();
}