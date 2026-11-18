
#include <iostream>
using namespace std;

class Vehicle
{
public:
    void vehicleInfo()
    {
        cout << "This is a Vehicle." << endl;
    }
};

class Fare
{
public:
    void fareInfo()
    {
        cout << "Transportation Fare: 50 Taka" << endl;
    }
};

class Car : public Vehicle
{
public:
    void carInfo()
    {
        cout << "This is a Car." << endl;
    }
};

class Bus : public Vehicle, public Fare
{
public:
    void busInfo()
    {
        cout << "This is a Bus." << endl;
    }
};

int main()
{
    Car c1;
    Bus b1;

    cout << "Car Information" << endl;
    c1.vehicleInfo();
    c1.carInfo();

    cout << "\nBus Information" << endl;
    b1.vehicleInfo();
    b1.fareInfo();
    b1.busInfo();

    return 0;
}
