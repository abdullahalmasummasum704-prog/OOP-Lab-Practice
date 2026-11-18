
#include <iostream>
using namespace std;

class Shape
{
protected:
    double dimension;

public:
    virtual double calculateArea() = 0;
};

class Square : public Shape
{
public:
    double calculateArea()
    {
        return dimension * dimension;
    }

    void setDimension(double side)
    {
        dimension = side;
    }
};

class Circle : public Shape
{
public:
    double calculateArea()
    {
        return 3.1416 * dimension * dimension;
    }

    void setDimension(double radius)
    {
        dimension = radius;
    }
};

int main()
{
    Square s;
    Circle c;

    double side, radius;

    cout << "Enter Square Side: ";
    cin >> side;

    s.setDimension(side);

    cout << "Square Area: "
         << s.calculateArea() << endl;

    cout << "\nEnter Circle Radius: ";
    cin >> radius;

    c.setDimension(radius);

    cout << "Circle Area: "
         << c.calculateArea() << endl;

    return 0;
}
