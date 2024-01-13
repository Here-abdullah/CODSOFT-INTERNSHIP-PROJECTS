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

