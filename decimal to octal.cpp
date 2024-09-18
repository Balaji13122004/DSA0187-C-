#include <iostream>
using namespace std;

int main() {
    int decimal, octal = 0, place = 1;

    // Asking for a decimal number
    cout << "Enter a decimal number: ";
    cin >> decimal;

    int num = decimal; // Store the original number for output

    // Convert decimal to octal
    while (num > 0) {
        int remainder = num % 8;
        octal += remainder * place;
        num /= 8;
        place *= 10;
    }

    // Display the result
    cout << "The octal representation of " << decimal << " is: " << octal << endl;

    return 0;
}

