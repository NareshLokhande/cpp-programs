#include <iostream>
#include <vector>

using namespace std;

// Class representing a Student with an ID and name
class Student {
public:
    // Default constructor
    Student() {}

    // Parameterized constructor
    Student(int id, string name) : id(id), name(name) {}

    // Member variable for storing the student's ID
    int id;

    // Member variable for storing the student's name
    string name;

    // Function to display the student's ID and name
    void showData() {
        cout << "ID: " << id << " Name: " << name << endl;
    }
};

// Class representing an Admin with a vector of students
class Admin {
public:
    // Vector to store the students
    vector<Student> studentList;

    // Constructor to initialize the studentList with some default students
    Admin() {
        studentList.push_back(Student(101, "Naresh"));
        studentList.push_back(Student(102, "Mahesh"));
        studentList.push_back(Student(103, "Ganesh"));
    }

    // Function to display all the students in the Admin's studentList
    void viewStudents() {
        for (const auto& student : studentList) {
            student.showData();
        }
    }

    // Function to add a new student to the Admin's studentList
    void addStudent() {
        Student& student = studentList.back(); // Get a reference to the last student in the list
        cout << "Enter ID to add the student: ";
        cin >> student.id;
        cout << "Enter Name: ";
        cin >> student.name;
    }

    // Function to delete a student from the Admin's studentList
    void deleteStudent() {
        int id;
        cout << "Enter the ID to delete: ";
        cin >> id;

        for (auto it = studentList.begin(); it!= studentList.end(); ++it) {
            if (it->id == id) {
                studentList.erase(it);
                break;
            }
        }
    }

    // Function to update a student's name in the Admin's studentList
    void updateStudent() {
        int id;
        cout << "Enter the ID to update: ";
        cin >> id;

        for (auto& student : studentList) {
            if (student.id == id) {
                cout << "Enter updated Name: ";
                cin >> student.name;
                cout << "Student info updated" << endl;
                break;
            }
        }
    }
};

// Main function to test the Admin class
int main() {
    Admin admin;
    admin.viewStudents();

    admin.addStudent();
    admin.viewStudents();

    admin.deleteStudent();
    admin.viewStudents();

    admin.updateStudent();
    admin.viewStudents();

    return 0;
}