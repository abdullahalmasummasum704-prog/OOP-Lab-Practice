
#include <iostream>
using namespace std;

// First Base Class
class LandVehicle
{
public:
    void landInfo()
    {
        cout << "This vehicle can travel on land." << endl;
    }
};

// Second Base Class
class WaterVehicle
{
public:
    void waterInfo()
    {
        cout << "This vehicle can travel on water." << endl;
    }
};

// Derived Class
class AmphibiousVehicle : public LandVehicle, public WaterVehicle
{
public:
    void displayVehicleType()
    {
        cout << "This is an Amphibious Vehicle." << endl;
    }
};

int main()
{
    // Creating object
    AmphibiousVehicle vehicle1;

    // Calling all three functions
    vehicle1.landInfo();
    vehicle1.waterInfo();
    vehicle1.displayVehicleType();

    return 0;
}
