
#include <iostream>
#include <string>
using namespace std;

// Base Class
class Person
{
public:
    string name;
    int age;

    void displayPersonInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived Class
class Employee : public Person
{
public:
    int employeeId;
    double salary;

    void displayEmployeeInfo()
    {
        // Calling inherited function
        displayPersonInfo();

        cout << "Employee ID: " << employeeId << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    // Creating Employee object
    Employee emp1;

    // Assigning Person information
    emp1.name = "Masum";
    emp1.age = 22;

    // Assigning Employee information
    emp1.employeeId = 101;
    emp1.salary = 30000;

    // Displaying complete information
    emp1.displayEmployeeInfo();

    return 0;
}


