//access modifier using public function
#include<iostream>
using namespace std;


class Circle{
    public:
    double radius;
    double Compute_area(){
        return 3.14*radius*radius;
        
    }    
};
int main(){
    Circle obj1;
    cout<<"Enter the radius:\n";
    cin>>obj1.radius;
    cout<<" \nArea is :"<<obj1.Compute_area();
    return 0;
}

// access modifier using private 
// #include<iostream>
// using namespace std;


// class Circle{
//     private:
//     double radius;
//     public:
//     double Compute_area(){
//         return 3.14*radius*radius;
        
//     }    
// };
// int main(){
//     Circle obj1;
//     cout<<"Enter the radius:\n";
//     cin>>obj1.radius;
//     cout<<" \nArea is :"<<obj1.Compute_area();
//     return 0;
// }