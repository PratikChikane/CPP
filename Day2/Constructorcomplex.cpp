#include<iostream>
using namespace std;

class Complex{
    int real;
    int img;
    public:
     Complex();
     Complex(int,int);
     void display() const;
    void setReal(int);
    int getReal() const ;
};
void Complex::setReal(int r){
    real=r;
}
int Complex :: getReal() const{
    return real;
}
Complex::Complex(){
    cout<<"default constructor \n";
    real=1;
    img = 2;
}
Complex::Complex(int r, int i){
    cout<<" Para Constructor\n";
    real = r;
    img = i;
}
void Complex :: display() const{
    cout<<"Complex number is"<<real<<"+"<<img<<"i"<<endl;
}
int main(){
    const Complex c2(5,6);
    c2.display();
    cout<<"real Part"<<c2.getReal();
    Complex c3(1,2);
    c3.display();
    c3.setReal(10);
    Complex c5;
    c5.display();
    cout<<"real Part "<<c5.getReal();
}