#include <iostream>
using namespace std;
int sumOfDivisors(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; ++i) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}
bool isFriendlyPair(int num1, int num2) {
    return (sumOfDivisors(num1) == num2) && (sumOfDivisors(num2) == num1);
}
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (isFriendlyPair(num1, num2)) {
        cout << num1 << " and " << num2 << " form a friendly pair." << endl;
    } else {
        cout << num1 << " and " << num2 << " do not form a friendly pair." << endl;
    }
    return 0;
}

