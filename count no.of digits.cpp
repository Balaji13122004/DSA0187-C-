#include <iostream>
#include <cstdlib>  // For abs() function
using namespace std;

int main() {
    int num, digitCount = 0;

    // Asking for a number
    cout << "Enter an integer: ";
    cin >> num;

    // Handle edge case for zero
    if (num == 0) {
        digitCount = 1;
    } else {
        // Take the absolute value to handle negative numbers
        num = abs(num);

        // Count the number of digits  
        while (num > 0) {
            num /= 10;
            digitCount++;
        }
    }

    // Display the result
    cout << "The number of digits is: " << digitCount << endl;

    return 0;
}

