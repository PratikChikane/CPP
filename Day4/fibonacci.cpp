#include<iostream>
using namespace std;

int fibonaacci(int n){
    if(n<=1){
        return n;
    }
    return fibonaacci(n-1)+fibonaacci(n-2);
}
int main(){
    int a;
    cout<<"Enter the Number :";
    cin>>a;
    cout<<"Fibonacci is:"<<fibonaacci(a)<<endl;
    return 0;
}
