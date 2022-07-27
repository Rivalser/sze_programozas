#include <iostream>
using namespace std;

void showMenu() {
    cout << "**********MENU**********"<<endl;
    cout << "Check balance"<<endl;
    cout << "1.Check balance" << endl;
    cout << "2.Deposit" << endl;
    cout << "3.Withdraw" << endl;
    cout << "4.Exit" << endl;
    cout << "************************" << endl;
}

int main()
{
    //what we need: check balance, deposit, withdraw,show menu
    int option;
    double balance = 500;
    do{
    showMenu();
    cout << "Option: ";
    cin >> option;
    system("cls");

    switch (option){
    
    case 1:cout << "Balance: " << balance << " $" << endl; break;
    case 2:cout << "Deposit amount: ";
        double depositAmount;
        cin >> depositAmount;
        balance += depositAmount;
        break;
    case 3:cout << "Withdraw amount: ";
        double withdrawAmount;
        cin >> withdrawAmount;
        balance -= withdrawAmount;
        if (balance < 0) {
            cout << "You can not withdraw this amount! The maximum amount, that you capeable to withdraw is: " << balance + withdrawAmount << " $" << endl;
            balance += withdrawAmount;
        }
        break;
    default:
        break;
    }
    } while (option != 4);

    system("pause>0");
}
