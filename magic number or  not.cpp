#include <iostream>
#include <unordered_set>
using namespace std;

// Function to calculate the sum of the squares of the digits of a number
int sumOfSquaresOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    return sum;
}

// Function to check if a number is a magic number (happy number)
bool isMagicNumber(int num) {
    unordered_set<int> seenNumbers;
    while (num != 1 && seenNumbers.find(num) == seenNumbers.end()) {
        seenNumbers.insert(num);
        num = sumOfSquaresOfDigits(num);
    }
    return num == 1;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isMagicNumber(num)) {
        cout << num << " is a magic number." << endl;
    } else {
        cout << num << " is not a magic number." << endl;
    }

    return 0;
}

