
#include <iostream>
#include <string>
using namespace std;

// Base Class
class University
{
public:
    void universityInfo()
    {
        cout << "University: BUBT" << endl;
    }
};

// Derived Class
class Department : public University
{
public:
    void departmentInfo()
    {
        cout << "Department: Software Engineering" << endl;
    }
};

// Another Derived Class
class Student : public Department
{
public:
    int studentId;
    string studentName;

    void studentInfo()
    {
        cout << "Student ID: " << studentId << endl;
        cout << "Student Name: " << studentName << endl;
    }
};

int main()
{
    // Creating Student object
    Student s1;

    // Assigning student information
    s1.studentId = 101;
    s1.studentName = "Masum";

    // Calling all three functions
    s1.universityInfo();
    s1.departmentInfo();
    s1.studentInfo();

    return 0;
}

