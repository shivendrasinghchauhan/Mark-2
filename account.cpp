#include <iostream>
#include <string>
#include <map>

using namespace std;

class BankAccount {
private:
    string accountHolderName;
    string accountNumber;
    double balance;

public:
    BankAccount(string name, string accNumber, double initialBalance) {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
    }

    string getAccountNumber() {
        return accountNumber;
    }

    double getBalance() {
        return balance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Successfully deposited $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Successfully withdrew $" << amount << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    void displayAccountInfo() {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

class BankSystem {
private:
    map<string, BankAccount> accounts;

public:
    void createAccount(string name, string accNumber, double initialDeposit) {
        if (accounts.find(accNumber) == accounts.end()) {
            BankAccount newAccount(name, accNumber, initialDeposit);
            accounts[accNumber] = newAccount;
            cout << "Account successfully created!" << endl;
        } else {
            cout << "Account with this number already exists!" << endl;
        }
    }

    void depositMoney(string accNumber, double amount) {
        if (accounts.find(accNumber) != accounts.end()) {
            accounts[accNumber].deposit(amount);
        } else {
            cout << "Account not found!" << endl;
        }
    }

    void withdrawMoney(string accNumber, double amount) {
        if (accounts.find(accNumber) != accounts.end()) {
            accounts[accNumber].withdraw(amount);
        } else {
            cout << "Account not found!" << endl;
        }
    }

    void checkBalance(string accNumber) {
        if (accounts.find(accNumber) != accounts.end()) {
            accounts[accNumber].displayAccountInfo();
        } else {
            cout << "Account not found!" << endl;
        }
    }
};

int main() {
    BankSystem bank;
    int choice;
    string name, accNumber;
    double amount;

    do {
        cout << "\n--- Bank Account Management System ---\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Check Balance\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter account holder's name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter account number: ";
                cin >> accNumber;
                cout << "Enter initial deposit: ";
                cin >> amount;
                bank.createAccount(name, accNumber, amount);
                break;

            case 2:
                cout << "Enter account number: ";
                cin >> accNumber;
                cout << "Enter amount to deposit: ";
                cin >> amount;
                bank.depositMoney(accNumber, amount);
                break;

            case 3:
                cout << "Enter account number: ";
                cin >> accNumber;
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                bank.withdrawMoney(accNumber, amount);
                break;

            case 4:
                cout << "Enter account number: ";
                cin >> accNumber;
                bank.checkBalance(accNumber);
                break;

            case 5:
                cout << "Thank you for using our service!" << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
