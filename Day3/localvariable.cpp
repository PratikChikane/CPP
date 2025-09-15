#include<iostream>
using namespace std;
int y=10;
void show();
int main(){
    // int y=10;
    cout<<y<<endl;
    y++;
    show();
    cout<<y<<endl;
}
void show(){
    //int y=0;
    cout<<y<<endl;
    int x=0;
    cout<<x<<endl;
    x++;
    cout<<y<<endl;
}

