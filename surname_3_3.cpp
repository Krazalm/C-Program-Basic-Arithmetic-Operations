#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1, num2, sum, diff, prod, rem, quo;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;

    if (num2 != 0) {
        quo = num1 / num2;
        rem = fmod(num1, num2);
        cout << "Quotient: " << quo << endl;
        cout << "Remainder: " << rem << endl;
    } else {
        cout << "Cannot divide by zero." << endl;
    }

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << prod << endl;

    return 0;
}
