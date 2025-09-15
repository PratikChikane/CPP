#include<iostream>

using namespace std;

int main(){
    int num, count=0;
     cout<<" Enter a number: ";
     cin>>num;
     for(int i=1; i<=num; i++){
        if(num%i==0){
            count++;
        }
     }
     if(count==2){
        cout<<"the "<<num<<" is prime number"<<endl;
     }
     else{
        cout<<"the "<<num<<" is not a prime number"<<endl;
     }
     return 0;
}