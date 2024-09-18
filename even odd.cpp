#include <iostream>

int main() {
    int n;
    
    std::cout << "Enter a number: ";
    std::cin >> n;
    
    int sumEven = 0;
    int sumOdd = 0;

    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            sumEven += i; 
        } else {
            sumOdd += i;  
        }
    }
    
    std::cout << "Sum of even numbers up to " << n << " is: " << sumEven << std::endl;
    std::cout << "Sum of odd numbers up to " << n << " is: " << sumOdd << std::endl;

    return 0;
}
