#include <iostream>
using namespace std;

// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Function to check if a number is a Harshad number
bool isHarshadNumber(int num) {
    if (num <= 0) return false; // Harshad numbers are positive integers
    int sum = sumOfDigits(num);
    return num % sum == 0;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isHarshadNumber(num)) {
        cout << num << " is a Harshad number." << endl;
    } else {
        cout << num << " is not a Harshad number." << endl;
    }

    return 0;
}

