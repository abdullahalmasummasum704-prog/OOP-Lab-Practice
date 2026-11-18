
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int studentId;
    string studentName;
    double cgpa;

public:

    // Setter Functions
    void setId(int studentId)
    {
        this->studentId = studentId;
    }

    void setName(string studentName)
    {
        this->studentName = studentName;
    }

    void setCgpa(double cgpa)
    {
        this->cgpa = cgpa;
    }

    // Getter Functions
    int getId()
    {
        return studentId;
    }

    string getName()
    {
        return studentName;
    }

    double getCgpa()
    {
        return cgpa;
    }
};

int main()
{
    Student s1;

    // Assign Information
    s1.setId(101);
    s1.setName("Masum");
    s1.setCgpa(3.75);

    // Display Information
    cout << "Student ID: " << s1.getId() << endl;
    cout << "Student Name: " << s1.getName() << endl;
    cout << "CGPA: " << s1.getCgpa() << endl;

    return 0;
}
