#include <iostream>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

// Function to find LCM of two numbers using recursion
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    std  ::  cout << "Enter two integers: ";
    std  ::  cin  >>  num1; 
	std  ::  cin  >>  num2;

    int gcdResult  =  gcd(num1, num2);
    int lcmResult  =  lcm(num1, num2);

    std::cout << "GCD of " << num1 << " and " << num2 << " is: " << gcdResult << std::endl;
    std::cout << "LCM of " << num1 << " and " << num2 << " is: " << lcmResult << std::endl;

    return 0;
}
