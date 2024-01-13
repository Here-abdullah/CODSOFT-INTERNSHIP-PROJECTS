#include <iostream>

using namespace std;

int main() {
    cout << "SIMPLE CALCULATOR\n";

    // Input two numbers
    double num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Choose operation
    cout << "Choose an operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    
    int choice;
    cout << "Enter the operation number (1-4): ";
    cin >> choice;

    // Perform the selected operation
    switch (choice) {
        case 1:
            cout << "Result: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Result: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Result: " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is undefined.\n";
            }
            break;
        default:
            cout << "Invalid choice. Please choose a number between 1 and 4.\n";
            break;
    }

    cout << "\nTask 2 by Abdullah Amin\n";

    return 0;
}

