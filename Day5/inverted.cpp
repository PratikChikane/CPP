// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=n;i>=1;i--){
//         for(int space=n;space>i;space--){
//             cout<<" ";
//         }
//         for(int j=1;j<=(2*i-1);j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5; 
    
//     for (int i = 0; i < n; i++) {    
        
//         for (int space = 0; space < n - i; space++) {
//             cout << " ";
//         }
//         int num = 1;   
        
//         for (int j = 0; j <= i; j++) {
//             cout << num << " ";
            
//             num = num * (i - j) / (j + 1);
//         }
        
//         cout << endl;   
//     }
    
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int space=i;space<n;space++)
// {
//     cout<<"  ";
// } 
// for(int j=i;j<=2*i-1;j++){
//     cout<<j<<" ";
// }  
// for(int j = 2*i-2;j>=i;j--){
//     cout<<j<<" ";
// }
// cout<<endl;
//  }
//  return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5; 
//     char ch = 'A';
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++)
//             cout << char(ch + i - 1) << " ";
//         cout << endl;
//     }
    
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int n = 5; 
    for (int i = 0; i < n; i++) {
        for (int space = n; space > i; space--)
            cout << "  ";

        for (char ch = 'A'; ch <= 'A' + 2 * i; ch++)
            cout << ch << " ";

        cout << endl;
    }
    return 0;
}