#include <iostream>
#include <cstdlib>
using namespace std;
int calculateGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return calculateGCD(b, a % b);
}

int calculateLCM(int a, int b) {
    return abs(a * b) / calculateGCD(a, b);
}
int main() {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    int gcd = calculateGCD(num1, num2);
    int lcm = calculateLCM(num1, num2);

    cout << "GCD of " << num1 << " and " << num2 << " is " << gcd << endl;
    cout << "LCM of " << num1 << " and " << num2 << " is " << lcm << endl;

    return 0;
}
