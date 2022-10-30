//============================================================================
// Name        : HenryT_Chapter3_Assignment.cpp
// Author      : Henry Timmons
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string name;
	int stockShares; //750
	float stockPrice; //35.22
	float totalCommission = 0;
	float finalPrice = 0;
	float stockAlone = 0;



	cout << "What is your name? ";
	getline(cin, name);


	cout << "Welcome " << name << ", how many shares will you be buying today? ";
	cin >> stockShares;

	cout << "What is the price per share? ";
	cin >> stockPrice;

		stockAlone = stockPrice * stockShares;
		totalCommission = stockAlone * 0.02; // Total commission for 750 stock at $35.22 per stock with a 2% commission
		finalPrice = totalCommission + stockAlone;

	cout << "\nJust the stock costs $" << stockAlone << endl; //price paid for stock alone
	cout << "The commission of " << stockShares << " shares at $" << stockPrice << " per share is $" << totalCommission << endl;
	cout << "The total amount paid is $" << finalPrice << endl;

	cout << "Program ending, have a nice day.";



	return 0;
}
