// #include<iostream>
// #include<string.h>
// using namespace std;

// void stringReverse(char* str){
//     char* start = str;
//     char* end = str + strlen(str)-1;
//     char temp;

//     while (start<end)
//     {
//         temp = *start;
//         *start = *end;
//         *end = temp;
//         start++;
//         end--;
//     }
// }
// int main(){
// char str[]= " ";
// cout<<"Original String"<<endl;
// cin>>str;
// stringReverse(str);
// cout<<"Reverse String--> "<<str<<endl;
// return 0;
// }


#include <iostream>
using namespace std; 
int custom_strlen(char *s) {
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }
    return length;
}


void reverse_string(char *str) {
    int length = custom_strlen(str);
    int start = 0;
    int end = length - 1;
    char temp;

    while (start < end) {
        
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        
        start++;
        end--;
    }
}

int main() {
    char myString[100]; 

    cout<<"Enter a string: ";
    cin>>myString; 

    cout<<"Original string:\n"<<myString;

    reverse_string(myString); 

    cout<<"Reversed string: \n"<< myString;

    return 0;
}