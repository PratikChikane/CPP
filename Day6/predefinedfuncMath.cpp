//maths predifned

#include<iostream>
#include<cmath>
#include <algorithm>

using namespace std;

void calculateSquareRoot(){
double x;
double squareroot;
cout<<"Enter the number: \n";
cin>>x;
squareroot = sqrt(x);
cout<<"the output is: \n"<<squareroot;
}

void calculatePower(){
int y, z, power;
cout<<"\nEnter a number: \n";
cin>>y;
cout<<"Enter the exponential: \n";
cin>>z;
power= pow(y, z);
cout<<"the output is: \n"<<power;
}

void swappingNumbers(){
int a, b;
cout<<"Enter the numbers of your choice: ";
cin>>a>>b;
swap(a, b);
cout<<"after swapping: "<<a<<" "<<b;
}

int main(){
calculateSquareRoot();
cout<<"-------------------------------"<<endl;
calculatePower();
cout<<"-------------------------------"<<endl;
swappingNumbers();
cout<<"-------------------------------"<<endl;






//sort of a number

// int arr[]={4,3,7,2,1};
// cout<<"Enter the elements of an array: \n";
// cin>>arr[0];
// int n = sizeof(arr)/sizeof(arr[0]);
// sort(arr, arr+n);

// for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
//     return 0;
// }

}