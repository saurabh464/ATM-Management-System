// C++ program to implement the ATM
// Management System
#include <bits/stdc++.h>
using namespace std;
class Bank {

private:
	string name;
	long long accnumber;
	string type;
	long long amount = 0;
	long long tot = 0;

	// Public variables
public:
	// Function to set the person's data
	Bank(string name , long long accnumber, string type , long long tot)
	{
		this->name = name;
		this->accnumber = accnumber;
		this->type = type;
		this->tot = tot;
	}

	// Function to display the required data
	void showdata()
	{
		cout << "Name:" << name << endl;
		cout << "Account No:" << accnumber << endl;
		cout << "Account type:" << type << endl;
	}

	// Function to deposit the amount in ATM
	void deposit()
	{
		cout << "\nEnter amount to be Deposited\n";
		cin >> amount;
		tot += amount;
		amount = 0;
		cout << "Total Balance is " << tot;
	}

	// Function to show the balance amount
	void showbal()
	{
		cout << "\nTotal balance is: " << tot;
	}

	// Function to withdraw the amount in ATM
	void withdrawl()
	{
		int a;
		cout << "Enter amount to withdraw\n";
		cin >> a;
		tot-= a;
		cout << "Available Balance is " << tot;
	}
};

// Driver Code
int main()
{
	// Object of class
	Bank b("Saurabh Kumar" , 402358749632 , "Saving Account" , 1000);

	int choice;

	// Infinite while loop to choose
	// options everytime
	while (1) {
		cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~"
			<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
			<< "~~~WELCOME~~~~~~~~~~~~~~~~~~"
			<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
			<< "~~~~~~~~~\n\n";
		cout << "Enter Your Choice\n";
		cout << "\t1. Show Account Details\n";
		cout << "\t2. Balance Enquiry\n";
		cout << "\t3. Deposit Money\n";
		cout << "\t4. Withdraw Money\n";
		cout << "\t5. Cancel\n";
		cin >> choice;

		// Choices to select from
		switch (choice) {
		case 1:
			b.showdata();
			break;
		case 2:
			b.showbal();
			break;
		case 3:
			b.deposit();
			break;
		case 4:
			b.withdrawl();
			break;
		case 5:
			exit(1);
			break;
		default:
			cout << "\nInvalid choice\n";
		}
	}
}
