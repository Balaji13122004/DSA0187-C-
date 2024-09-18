#include <iostream>
using namespace std;
bool isAutomorphic(int num) {
    int square = num * num;
    while (num > 0) {
        if (num % 10 != square % 10) {
            return false;
        }
        num /= 10;
        square /= 10;
    }
    return true;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isAutomorphic(num)) {
        cout << num << " is an automorphic number." << endl;
    } else {
        cout << num << " is not an automorphic number." << endl;
    }
    return 0;
}

