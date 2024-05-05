#include <iostream>
#include <string>

using namespace std;

class Bank_Account {
private:
  string depositorName;
  int accountNumber;
  string accountType;
  double balance;

public:
  // Function to create a new account
  void createAccount() {
    cout << "Enter depositor name: ";
    cin.ignore();
    getline(cin, depositorName);
    cout << "Enter account number: ";
    cin >> accountNumber;
    cin.ignore(); // Consume newline character

    cout << "Enter account type: ";
    getline(cin, accountType);
    
    cout << "Account Created Successfully!" << endl;

    balance = 0.0; // Initialize balance to 0
  }

  // Function to deposit money
  void deposit(double amount) {
    if (amount > 0) {
      balance += amount;
      cout << "Deposit successful!" << endl;
    } else {
      cout << "Invalid deposit amount." << endl;
    }
  }

  // Function to withdraw money
  void withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
      balance -= amount;
      cout << "Withdrawal successful!" << endl;
    } else {
      cout << "Insufficient balance or invalid withdrawal amount." << endl;
    }
  }

  // Function to display balance
  void inquireBalance() {
    cout << "Balance: $" << balance << endl;
  }
};

int main() {
  Bank_Account account;

  int choice;

  do {
    cout << "\nMenu:" << endl;
    cout << "1. Create Account" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Inquire Balance" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
      case 1:
        account.createAccount();
        break;
      case 2:
        double depositAmount;
        cout << "Enter amount to deposit: ";
        cin >> depositAmount;
        account.deposit(depositAmount);
        cin.ignore();
        break;
      case 3:
        double withdrawAmount;
        cout << "Enter amount to withdraw: ";
        cin >> withdrawAmount;
        account.withdraw(withdrawAmount);
        cin.ignore();
        break;
      case 4:
        account.inquireBalance();
        break;
      case 5:
        cout << "Exiting..." << endl;
        break;
      default:
        cout << "Invalid choice." << endl;
    }
  } while (choice != 5);

  return 0;
}
