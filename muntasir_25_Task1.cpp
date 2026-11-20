#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Remainder = " << num1 % num2 << endl;

    cout << "Average = " << (num1 + num2) / 2.0 << endl;

    cout << "Square of first number = " << num1 * num1 << endl;

    cout << "Square of second number = " << num2 * num2 << endl;

    return 0;
}
