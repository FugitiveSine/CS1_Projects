//============================================================================
// Name        : HenryT_Chapter5_Assignment.cpp
// Author      : Henry Timmons
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <climits>
using namespace std;
void clearCin(void){
	cin.clear();
	cin.ignore(INT_MAX, '\n');
}

int main() {
	float asterixMonth1 = 0;
	float asterixMonth2 = 0;
	float asterixMonth3 = 0;
	float asterixMonth4 = 0;
	float asterixMonth5 = 0;
	float asterixMonth6 = 0;
	float averageSales = 0;
	float grandTotal = 0;
	float monthSales1 = 0;
	float monthSales2 = 0;
	float monthSales3 = 0;
	float monthSales4 = 0;
	float monthSales5 = 0;
	float monthSales6 = 0;
	int i = 0;

	while(true){ //Month 1

		cout << "Please enter sales for month #1: ";
			cin >> monthSales1;
			clearCin();

			if(monthSales1 >= 0 && monthSales1 <= 1000000){
				break;

			}else {
				cout << "Error please enter a valid number between 0 and 1,000,000." << endl;

			}
		}//While 1

	while(true){ //Month 2
		cout << "Please enter sales for month #2: ";
			cin >> monthSales2;
			clearCin();
			if(monthSales2 >= 0 && monthSales2 <= 1000000){
				break;

			}else {
				cout << "Error please enter a valid number between 0 and 1,000,000." << endl;

			}

		}//While 2

	while(true){ //Month 3
		cout << "Please enter sales for month #3: ";
			cin >> monthSales3;
			clearCin();
			if(monthSales3 >= 0 && monthSales3 <= 1000000){
				break;

			}else {
				cout << "Error please enter a valid number between 0 and 1,000,000." << endl;

			}


		}//While 3

	do{
		cout << "Please enter sales for month #4: ";
			cin >> monthSales4;
			clearCin();
			if(monthSales4 >= 0 && monthSales4 <= 1000000){
				break;
			}else {
				cout << "Error please enter a valid number between 0 and 1,000,000." << endl;
			}

		}while(true); //Month 4

	do{
		cout << "Please enter sales for month #5: ";
			cin >> monthSales5;
			clearCin();
			if(monthSales5 >= 0 && monthSales5 <= 1000000){
				break;
			}else {
				cout << "Error please enter a valid number between 0 and 1,000,000." << endl;
			}

		}while(true); //Month 5



	do{
		cout << "Please enter sales for month #6: ";
			cin >> monthSales6;
			clearCin();
			if(monthSales6 >= 0 && monthSales6 <= 1000000){
				break;
			}else {
				cout << "Error please enter a valid number between 0 and 1,000,000." << endl;
			}

	}while(true); //Month 6

	grandTotal += monthSales1  + monthSales2 + monthSales3 + monthSales4 + monthSales5 + monthSales6;
	averageSales = grandTotal/6;

	asterixMonth1 = monthSales1/100;
	asterixMonth2 = monthSales2/100;
	asterixMonth3 = monthSales3/100;
	asterixMonth4 = monthSales4/100;
	asterixMonth5 = monthSales5/100;
	asterixMonth6 = monthSales6/100;

	cout << "The grand total of all sales is: " << grandTotal << endl;
	cout << "The average of your sales are: " << averageSales << endl;
	cout << "================================" << endl;
	cout << "Bar Chart By Month" << endl;
	cout << "------------------" << endl;
	cout << "Month #1: ";
	for(i = 0; asterixMonth1 > i; i++){
		cout << "*";
	} cout << " ($" << monthSales1 << ")";
	cout << endl << "Month #2: ";
	for(i = 0; asterixMonth2 > i; i++){
		cout << "*";
	}  cout << " ($" << monthSales2 << ")";
	cout << endl << "Month #3: ";
	for(i = 0; asterixMonth3 > i; i++){
		cout << "*";
	}  cout << " ($" << monthSales3 << ")";
	cout << endl << "Month #4: ";
	for(i = 0; asterixMonth4 > i; i++){
		cout << "*";
	}  cout << " ($" << monthSales4 << ")";
	cout << endl << "Month #5: ";
	for(i = 0; asterixMonth5 > i; i++){
		cout << "*";
	}  cout << " ($" << monthSales5 << ")";
	cout << endl << "Month #6: ";
	for(i = 0; asterixMonth6 > i; i++){
		cout << "*";
	}  cout << " ($" << monthSales6 << ")";











	cout << endl << "Program ending, have a nice day!" << endl;
	return 0;
}
