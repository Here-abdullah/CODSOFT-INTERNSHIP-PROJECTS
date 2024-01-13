#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    cout << "NUMBER GUESSING GAME\n";

    // Seed for the random number generator
	srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout << "Guess the random number.\n";

    do {
        // Get user's guess
        cout << "Enter your guess: ";
        cin >> guess;

        // Provide feedback
        if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        }

        attempts++;

    } while (guess != secretNumber);

    // Display success message
    cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";

    
    cout << "\nTask 1 by Abdullah Amin\n";

    return 0;
}

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

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Student {
    string name;
    double grade;
};

int main() {
    vector<Student> students;
    int numStudents;

    cout << "STUDENT GRADING SYSTEM\n";
    cout << "Enter the total number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; ++i) {
        Student student;
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> student.name;
        cout << "Enter the grade of student " << i + 1 << ": ";
        cin >> student.grade;
        students.push_back(student);
    }

    double sumGrades = 0.0;
    double averageGrade;

    // Calculate the average grade
    for (int i = 0; i < numStudents; ++i) {
        sumGrades += students[i].grade;
    }
    averageGrade = sumGrades / numStudents;

    // Find highest and lowest grades
    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 1; i < numStudents; ++i) {
        if (students[i].grade > students[maxIndex].grade) {
            maxIndex = i;
        }

        if (students[i].grade < students[minIndex].grade) {
            minIndex = i;
        }
    }

    // Display results
    cout << "\nStudent Grades Summary:\n";
    for (int i = 0; i < numStudents; ++i) {
        cout << students[i].name << ": " << students[i].grade << endl;
    }

    cout << "\nAverage Grade: " << averageGrade << endl;
    cout << "Highest Grade: " << students[maxIndex].grade << " (Student: " << students[maxIndex].name << ")\n";
    cout << "Lowest Grade: " << students[minIndex].grade << " (Student: " << students[minIndex].name << ")\n";

    cout << "\n  TASK 3 By Abdullah Amin\n";

    return 0;
}

