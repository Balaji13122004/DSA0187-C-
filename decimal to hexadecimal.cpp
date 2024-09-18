#include <iostream>
#include <iomanip> // For std::hex and std::uppercase
using namespace std;

int main() {
    int decimal;

    // Asking for a decimal number
    cout << "Enter a decimal number: ";
    cin >> decimal;

    // Display the hexadecimal representation
    cout << "The hexadecimal representation of " << decimal << " is: " 
         << hex << uppercase << decimal << endl;

    return 0;
}

