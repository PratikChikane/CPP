#include<iostream>
using namespace std;
int main(){
    int a[5];
    cout<<"accept array elements\n";
    for(int i=0;i<=4;i++){
        cin>>a[i];
    }
    cout<<"display array elements\n";
    for(int i=0;i<=4;i++){
        cout<<a[i]<<"\t";
    }
}