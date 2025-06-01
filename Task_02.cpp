#include <iostream>
using namespace std;
int main() {
    float num1, num2, result;
    char op;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /, %): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;
    switch(op) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        case '%':
            if ((int)num2 != 0)
                cout << "Result: " << (int)num1 % (int)num2 << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }
    return 0;
}
