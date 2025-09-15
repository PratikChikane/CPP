#include<iostream>
using namespace std;
int main(){
    int num;
    int sum=0;
    cout<<"Enter the Number\n";
    cin>>num;
    while(num !=0){
        int rem = num%10;
        sum = sum+rem*rem*rem;
        num = num/10;
    }
    cout<<sum;
    if(sum==num){
        cout<<"The given num is amstrong number";
    }
    else {
        cout<<" The given num is not a amstrong number";
    }
}