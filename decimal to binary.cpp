#include <iostream>
#include <stack>
using namespace std;

// Function to convert decimal to binary
string decimalToBinary(int decimal) {
    if (decimal == 0) return "0";

    stack<int> binaryDigits;
    string binaryString;

    // Convert decimal to binary by dividing by 2
    while (decimal > 0) {
        binaryDigits.push(decimal % 2);
        decimal /= 2;
    }

    // Construct binary string from stack
    while (!binaryDigits.empty()) {
        binaryString += to_string(binaryDigits.top());
        binaryDigits.pop();
    }

    return binaryString;
}

int main() {
    int decimal;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    string binary = decimalToBinary(decimal);

    cout << "The binary representation is: " << binary << endl;

    return 0;
}

