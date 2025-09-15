#include<iostream>
using namespace std;

int main(){
    int a, b, power=1;
    cout<<"enter the value of a as base and b as a power";
    cin>>a>>b;
    for(int i=0;i<b;i++){
        power = power * a;
    }
    cout<<"Answer="<<power;
}
