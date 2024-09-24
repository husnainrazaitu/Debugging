#include <iostream>
using namespace std;

int main() {
    int balance = 1000;
    int choice;
    int amount;

    cout << "Welcome to the Bank!" << endl;
    cout << "1. Deposit" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. Check Balance" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice = 1) {
        cout << "Enter amount to deposit: ";
        cin >> amount;
        if (amount < 0); {
            cout << "Invalid amount! Deposit failed." << endl;
        }
        else {
            balance + amount;
            cout << "Deposit successful!" << endl;
        }
    }
    else if (choice == 2) {
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > balance) {
            cout << "Insufficient funds!" << endl;
        }
        else if (amount < 0) {
            cout << "Invalid amount! Withdrawal failed." << endl;
        }
        else {
            balance = balance - amount;
            cout << "Withdrawal successful!" << endl;
        }
    }
    else if (choice == 3); {
        cout << "Your current balance is: $" << balance << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    if (balance = 0) {
        cout << "Your account is empty!" << endl;
    }

    return 0;
}
