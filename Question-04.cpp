
#include <iostream>
using namespace std;

// Abstract Base Class
class Smartphone
{
public:
    virtual void takeSelfie() = 0;
    virtual void makeCall() = 0;

    virtual ~Smartphone() {}
};

// Derived Class: Android
class Android : public Smartphone
{
public:
    void takeSelfie() override
    {
        cout << "Android is taking a selfie." << endl;
    }

    void makeCall() override
    {
        cout << "Android is making a call." << endl;
    }
};

// Derived Class: IPhone
class IPhone : public Smartphone
{
public:
    void takeSelfie() override
    {
        cout << "iPhone is taking a selfie." << endl;
    }

    void makeCall() override
    {
        cout << "iPhone is making a call." << endl;
    }
};

int main()
{
    // Creating Android object using base pointer
    Smartphone *phone1 = new Android();

    phone1->takeSelfie();
    phone1->makeCall();

    cout << endl;

    // Creating iPhone object using base pointer
    Smartphone *phone2 = new IPhone();

    phone2->takeSelfie();
    phone2->makeCall();

    // Releasing memory
    delete phone1;
    delete phone2;

    return 0;
}
