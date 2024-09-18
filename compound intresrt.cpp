#include <iostream>
#include <cmath> // For the pow function
using namespace std;

// Function to calculate compound interest
double calculateCompoundInterest(double principal, double annualRate, int timesCompounded, int years) {
    return principal * pow((1 + annualRate / timesCompounded), timesCompounded * years);
}

int main() {
    double principal, annualRate;
    int timesCompounded, years;

    // Input principal amount
    cout << "Enter the principal amount: ";
    cin >> principal;

    // Input annual interest rate (as a percentage, e.g., 5 for 5%)
    cout << "Enter the annual interest rate (in percentage): ";
    cin >> annualRate;
    annualRate /= 100; // Convert percentage to decimal

    // Input number of times interest is compounded per year
    cout << "Enter the number of times interest is compounded per year: ";
    cin >> timesCompounded;

    cout << "Enter the number of years: ";
    cin >> years;

    double amount = calculateCompoundInterest(principal, annualRate, timesCompounded, years);

    // Output the result
    cout << "The amount after " << years << " years is: " << amount << endl;

    return 0;
}

