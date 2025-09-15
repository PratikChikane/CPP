#include<iostream>
using namespace std;
void user_strcat(char*,char*);
int main(){
char str1[20];
char str2[50];

cout<<"Enter the first string\n ";
 cin>>str1;
 cout<<"Enter the second String\n";
 cin>>str2;
 user_strcat(str1,str2);
 cout<<"Concatation is "<<str2;
}
void user_strcat(char*s1,char*s2){
    while(*s2!='\0'){
        s2++;
    }
        while(*s1 !='\0'){
            *s2=*s1;
            s1++;
            s2++;
        }
        *s2='\0';
    }