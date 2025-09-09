/*TITLE: Operations on Bank Account
PROBLEM STATEMENT: Implement a class to illustrate working of a bank account of a
customer that consists of the following members.*/

#include<iostream>
using namespace std;
class bank_account {
   string name;
   string acc_type;
   int acc_no;
   double balance = 0;
public:
   bank_account(string n, string type, int no, double bal);
   void display();
   void deposit();
   void withdraw();
};
bank_account::bank_account(string n, string type, int no, double bal) {
   name=n;
   acc_type=type;
   acc_no=no;
   balance=bal;
}
void bank_account::display() {
   cout << "\n--- Account Information ---\n";
   cout << "Customer Name:  " << name<<endl;
   cout << "Account Type:   " << acc_type<<endl;
   cout << "Account Number: " << acc_no<<endl;
   cout << "Balance:        " << balance<<endl;
}
void bank_account::deposit() {
   int amount;
   cout << "Enter amount to deposit: ";
   cin >> amount;
       balance += amount;
       cout << "Deposit successful. New balance: "<<balance<<endl;
}
void bank_account::withdraw() {
   int amount;
   cout << "Enter amount to withdraw: ";
   cin >> amount;
       balance -= amount;
       cout << "Withdrawal.New balance: "<< balance<<endl;
   }
int main() {
	string n,type;
	int no;
	double bal;
	char q;
   cout<<"Enter a name: ";
   cin>>n;
   cout<<"Enter a account type: ";
   cin>>type;
   cout<<"Enter a account number: ";
   cin>>no;
   cout<<"Enter a balance: ";
   cin>>bal;
   bank_account obj( n, type,no,bal);
   obj.display();
   int choice;
   cout << "--- Welcome ---" << endl;
   do {
       cout << "\n-------- MENU --------\n";
       cout << "1. Withdraw money\n";
       cout << "2. Deposit Money\n";
       cout << "3. Display account information\n";
       cout << "4. Exit\n";
       cout << "Enter your choice: ";
       cin >> choice;
       switch (choice) {
           case 1:
               obj.withdraw();
               break;
           case 2:
               obj.deposit();
               break;
           case 3:
               obj.display();
               break;
           case 4:
               cout << "Thank you for using the Bank System." << endl;
               break;
           default:
               cout << "Invalid choice." << endl;
               break;
       }
       cout<<"Do you wish to contine?"<<endl;
       cin>>q;
   } while (q=='y'||q=='Y');
   return 0;
}
