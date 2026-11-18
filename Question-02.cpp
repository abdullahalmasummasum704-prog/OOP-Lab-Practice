
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accountNumber;
    string accountHolder;
    double balance;

public:

    // Setter Functions
    void setAccountNumber(string accountNumber)
    {
        this->accountNumber = accountNumber;
    }

    void setAccountHolder(string accountHolder)
    {
        this->accountHolder = accountHolder;
    }

    void setBalance(double balance)
    {
        if (balance >= 0)
        {
            this->balance = balance;
        }
        else
        {
            cout << "Invalid Balance!" << endl;
        }
    }

    // Getter Functions
    string getAccountNumber()
    {
        return accountNumber;
    }

    string getAccountHolder()
    {
        return accountHolder;
    }

    double getBalance()
    {
        return balance;
    }
};

int main()
{
    BankAccount account1;

    // Assign Account Information
    account1.setAccountNumber("1234567890");
    account1.setAccountHolder("Masum");
    account1.setBalance(5000);

    // Display Account Information
    cout << "Account Number: "
         << account1.getAccountNumber() << endl;

    cout << "Account Holder: "
         << account1.getAccountHolder() << endl;

    cout << "Balance: "
         << account1.getBalance() << endl;

    return 0;
}
