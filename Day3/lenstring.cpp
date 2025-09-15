#include<iostream>
using namespace std;
#include<string.h>
int main(){
    char str[50]="hello world";
    char str1[]="hello\0 world";
    int len = strlen(str);
    cout<<"length of String"<<len<<endl;
    cout<<"Size of string is"<<sizeof(str)<<endl;
    cout<<str<<endl;
    cout<<str1;
}