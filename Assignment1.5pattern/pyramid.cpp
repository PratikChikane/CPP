#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=1; i<=n; i++){
        for(int j=i; j<n; j++){
            cout<<"  ";
        }
        for(int j=i;j<=2*i-1;j++){
            cout<<j<<" ";
            }  
            
        for(int j = 2*i-2;j>=i;j--){
            cout<<j<<" ";
            }
        cout<<endl;
    }
    return 0;
}