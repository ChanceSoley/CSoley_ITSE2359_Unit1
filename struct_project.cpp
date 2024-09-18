#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Define a struct called Student to hold student information
struct Student {
    string name;   // Student's full name
    int age;       // Student's age
    float gpa;     // Student's GPA
};

// Function to read student data from "students.txt" file
void readStudentsFromFile(Student students[], int &numStudents, const string &filename) {
    ifstream inFile(filename); // Open the file
    if (!inFile) {             // Check if file opened successfully
        cout << "Error: Cannot open the file " << filename << endl;
        exit(1);
    }

    // Read student data from the file
    while (inFile >> ws && numStudents < 100) { // Ensure max 100 students
        getline(inFile, students[numStudents].name);   // Read the student's full name
        inFile >> students[numStudents].age;           // Read the student's age
        inFile >> students[numStudents].gpa;           // Read the student's GPA
        inFile.ignore();                               // Ignore the newline character
        numStudents++;                                 // Increment the number of students
    }
    inFile.close(); // Close the file
}

// Function to display all students' information
void displayStudents(const Student students[], int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        cout << "Name: " << students[i].name << ", Age: " << students[i].age
             << ", GPA: " << students[i].gpa << endl;
    }
}

// Function to search for a student by name
void searchStudentByName(const Student students[], int numStudents, const string &searchName) {
    bool found = false;
    for (int i = 0; i < numStudents; i++) {
        if (students[i].name == searchName) { // If the student's name matches the search query
            cout << "Student found: " << endl;
            cout << "Name: " << students[i].name << ", Age: " << students[i].age
                 << ", GPA: " << students[i].gpa << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Student with name '" << searchName << "' not found." << endl;
    }
}

int main() {
    const int MAX_STUDENTS = 100;      // Maximum number of students
    Student students[MAX_STUDENTS];    // Array to hold student data
    int numStudents = 0;               // Number of students read from the file

    // Read student data from "students.txt"
    readStudentsFromFile(students, numStudents, "students.txt");

    // Display all student information
    cout << "Student Information:" << endl;
    displayStudents(students, numStudents);

    // Search for a student by name
    cout << "\nSearch for a student by name:" << endl;
    string searchName;
    getline(cin, searchName);  // Get the search query from the user

    // Search and display result
    searchStudentByName(students, numStudents, searchName);

    return 0;
}