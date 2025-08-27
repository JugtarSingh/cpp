#include <iostream>
#include <string>
using namespace std;

class Bank {
public:
    string name;
    long accountId;
    double balance;

    void set(string n, long acc, double bal) {
        name = n;
        accountId = acc;
        balance = bal;
    }

    void deposit(double value) {
        balance += value;
    }

    void withdraw(double value) {
        double minBalance = 1000;
        double net = balance - value;
        if(net<minBalance){
            cout<<"Minimum balance not maintained";
        }
        else{
            balance=balance-value;
        }
    }

    void enquiry() {
        cout << "Name       : " << name << "\n";
        cout << "Account ID : " << accountId << "\n";
        cout << "Balance    : " << balance << "\n";
    }
};

int main() {
    Bank B;  // object
    int ch;
    string n;
    long acc;
    double bal, value;

    cout << "Enter the name: ";
    cin >> n;
    cout << "Enter the account Id: ";
    cin >> acc;
    cout << "Enter the balance: ";
    cin >> bal;

    B.set(n, acc, bal);

    do {
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Enquiry\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
        case 1:
            cout << "Enter the Amount to be Deposited: ";
            cin >> value;
            B.deposit(value);
            break;
        case 2:
            cout << "Enter the Amount to be Withdrawn: ";
            cin >> value;
            B.withdraw(value);
            break;
        case 3:
            B.enquiry();
            break;
        case 4:
            cout << "Exiting\n";
            break;
        default:
            cout << "Invalid choice.\n";
        }
    } while (ch != 4);

    return 0;
}
