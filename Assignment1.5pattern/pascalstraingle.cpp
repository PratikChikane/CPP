#include <iostream>
using namespace std;

int main() {
    int n = 5; 
    
    for (int i = 0; i < n; i++) {    
        
        for (int space = 0; space < n - i; space++) {
            cout << " ";
        }
        int num = 1;   
        
        for (int j = 0; j <= i; j++) {
            cout << num << " ";
            
            num = num * (i - j) / (j + 1);
        }
        
        cout << endl;   
    }
    
    return 0;
}