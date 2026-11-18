
#include <iostream>
#include <string>
using namespace std;

// Base Class
class Vehicle
{
public:
    void displayVehicleInfo()
    {
        cout << "This is a Vehicle." << endl;
    }
};

// First Derived Class
class Car : public Vehicle
{
public:
    string brand;
    int doors;

    void carInfo()
    {
        cout << "Car Brand: " << brand << endl;
        cout << "Number of Doors: " << doors << endl;
    }
};

// Second Derived Class
class Bus : public Vehicle
{
public:
    int routeNumber;
    int passengerCapacity;

    void busInfo()
    {
        cout << "Bus Route Number: " << routeNumber << endl;
        cout << "Passenger Capacity: " << passengerCapacity << endl;
    }
};

int main()
{
    // Creating Car object
    Car car1;

    car1.brand = "Toyota";
    car1.doors = 4;

    cout << "--- Car Information ---" << endl;
    car1.displayVehicleInfo();
    car1.carInfo();

    cout << endl;

    // Creating Bus object
    Bus bus1;

    bus1.routeNumber = 10;
    bus1.passengerCapacity = 40;

    cout << "--- Bus Information ---" << endl;
    bus1.displayVehicleInfo();
    bus1.busInfo();

    return 0;
}
