#include<iostream>
using namespace std;
void add(int =1, int = 2, int =3, int =4);
int main(){
    add();
    add(5);
    add(2, 2);
    add(0 , 2, 0);
    add(10, 2 , 30, 4);
    }
    void add(int a, int b, int c, int d){
        cout<<a+b+c+d;
    }
 
 void add(int,int=2,int=3,int=4);
int main() 
{
	add();//error
	add(10);
	add(10,20);
	add(10,20,30);  
    add(10,20,30,40);
    return 0;  
} 
void add(int a,int b,int c,int d)
{
	cout<<a+b+c+d<<endl;
 } 



// #include <iostream>
// using namespace std;
void display(char = '*', int = 30);
int main() {
    int count = 80;
    cout << "No argument passed: ";
    display(); 
      cout << "First argument passed: ";
    display('#'); 
    
    cout << "Both arguments passed: ";
    display('$', count); 

    return 0;
}
void display(char c, int count) {
    for(int i = 1; i <= count; ++i)
    {
        cout << c;
    }
    cout << endl;
}


// #include<iostream>
// using namespace std;
// void func(int a, bool flag = true)
// {
// 		if (flag == true ) 
// 		{
// 			cout<< "Flag is true. a = " << a;
//       	        }
// 		else
// 		{
// 			cout<< "Flag is false. a = " << a;
//         	}
// }
// int main()
// {
// 	func(200, false);
// }

