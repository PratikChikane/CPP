#include<iostream>
#include <cstring>
using namespace std;

// class cstring{
//     int len;
//     char* ptr;
//     public:
//     cstring(cstring& s){
//         this->len = len;
//         this->ptr = new char[len+1];
//         strcpy(this->ptr, s.ptr);
//     }
// };
// int main(){
// cstring s1("hello");
// cstring s2(s1);
// }

int main(){
    //allocating the memory
    int* ptr = new int(5);

    //deallocating the memory
    delete ptr;

    cout<<"the pointer becomes a dangling pointer.";


}