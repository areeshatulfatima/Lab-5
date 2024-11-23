#include <iostream>
using namespace std;

int main() {
    double balance, withdrawal;

    // Ask for initial balance
    cout << "Enter initial balance: ";
    cin >> balance;

    // Start the do-while loop for withdrawals
    do {
        cout << "Enter amount to withdraw (0 to exit): ";
        cin >> withdrawal;

        // Exit condition
        if (withdrawal == 0) {
            cout << "Exiting..." << endl;
            break;
        }

        // Check if withdrawal is possible
        if (withdrawal <= balance) {
            balance = balance - withdrawal;
            cout << "Withdrawal successful! New balance: " << balance << endl;
        } else {
            cout << "Insufficient balance for this withdrawal." << endl;
            break;
        }

    } while (true);

    cout << "Final balance: " << balance << endl;
    return 0;
}

