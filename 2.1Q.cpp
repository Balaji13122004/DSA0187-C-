#include <iostream>
using namespace std;

// Function with default arguments
int sum(int a, int b, int c = 0, int d = 0) {
    return a + b + c + d;
}

int main() {
    int a, b, c, d;
    
    // Sample Input: Enter the value: 10 15 25 30
    cout << "Enter up to four values (separated by space): ";
    cin >> a >> b;
    
    // Handling additional input based on what the user enters
    if (cin >> c) { // If the third value is provided
        if (!(cin >> d)) { // If the fourth value is not provided
            d = 0;
        }
    } else {
        c = 0;
        d = 0;
    }
    cout << "Sum: " << sum(a, b, c, d) << endl;

    return 0;
}

