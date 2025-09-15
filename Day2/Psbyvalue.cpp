#include<iostream>
using namespace std;
void swap(int p,int q);
int main(){
    int a=10,b=20;
    cout<<"before calling swap()\n";
    cout<<"value of a and b is\n"<<a<<b;
    swap(a,b);
    cout<<"\n after calling Swap() value of a and b\n"<<a<<b;
}
void swap(int p,int q){
    int temp;
    temp = p;
    p=q;
    q=temp;  
    cout<<"\n p="<<p<<"q="<<q;  
}
// #include<iostream>
// using namespace std;

// int main(){
//     int a=10,b=20;
//     cout<<"before calling swap()\n";
//     cout<<"value of a and b is\n"<<a<<b;
//     swap(a,b);
//     cout<<"\n after calling Swap() value of a and b\n"<<a<<b;
// }
// void swap(int &p,int &q){
//     int temp;
//     temp = p;
//     p=q;
//     q=temp;    
    
// }