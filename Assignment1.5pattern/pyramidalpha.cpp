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