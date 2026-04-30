#include <iostream>
using namespace std;

void diamond(int n) {
    // Top part
    for(int i = 1; i <= n; i++) {
        for(int s = 1; s <= n - i; s++)
            cout << " ";
        for(int j = 1; j <= 2*i - 1; j++)
            cout << "*";
        cout << endl;
    }

    // Bottom part
    for(int i = n - 1; i >= 1; i--) {
        for(int s = 1; s <= n - i; s++)
            cout << " ";
        for(int j = 1; j <= 2*i - 1; j++)
            cout << "*";
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size (number of rows for upper half): ";
    cin >> n;

    diamond(n);

    return 0;
}
