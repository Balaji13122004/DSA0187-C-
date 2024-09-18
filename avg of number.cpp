#include <iostream>
using namespace std;
int main() {
    int n;
    double sum = 0.0, number;
    cout << "Enter the number of values: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> number;
        sum += number;
    }
    double average = sum / n;
    cout << "The average is: " << average << endl;

    return 0;
}

