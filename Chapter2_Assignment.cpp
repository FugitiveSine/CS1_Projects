//============================================================================
// Name        : Chapter2_Assignment.cpp
// Author      : Henry Timmons
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int stockShares = 750;
	float stockPrice = 35.22;
	float totalCommission = 0;
	float finalPrice = 0;
	float stockAlone = 0;

	stockAlone = stockPrice * stockShares;
	totalCommission = stockShares * stockPrice * 0.02; // Total commission for 750 stock at $35.22 per stock with a 2% commission
	finalPrice = totalCommission + stockAlone;


	cout << "Just the stock costs $" << stockAlone << endl;
	cout << "The commission of 750 shares at $35.22 per share is $" << totalCommission << endl;
	cout << "The total amount paid is $" << finalPrice << endl;

	cout << "Program End.";
	return 0;
}
