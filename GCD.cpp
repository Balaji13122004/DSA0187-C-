#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int num1, num2;
    printf("Enter two positive integers: ");
    scanf( %d, num1,num2);
    printf("GCD of " num1" and " num2 " is: ",gcd(num1, num2));
    return 0;
}

