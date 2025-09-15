#include<iostream>
using namespace std;
int main(){
    int a[5];
    int max=a[0];
    cout<<"enter Elements in an array";
    cin>>;
    for(int i=1;i<=5;i++){
        if(max<a[i]){
            max=a[i];
        }

    }
    cout<<"max element is ="<<max;

}