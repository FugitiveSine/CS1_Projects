//============================================================================
// Name        : HenryT_Chapter5_Assignment2.cpp
// Author      : Henry Timmons
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <climits>
#include <fstream>
using namespace std;

void clearCin(void) {
	cin.clear();
	cin.ignore(INT_MAX, '\n');
}

int main() {
	int quantityOnHand = 0;
	int productInt = 0;
	string productName;
	float productCost = 0;
	float productPrice = 0;

	ifstream myInputFile;
	ofstream myOutputFile;
	myInputFile.open("inventory.txt");
	myOutputFile.open("updatedinventory.txt");

	if (!myInputFile.is_open()){
		cout << "Error input file not open" << endl;
		return 0;
	}
	if (!myOutputFile.is_open()){
		cout << "Error output file not open" << endl;
		return 0;
	}
	while (!myInputFile.eof()){
		myInputFile >> productInt;


		myInputFile >> productName;


		myInputFile >> productCost;
		productCost = (productCost*.05)+productCost;

		myInputFile >> productPrice;
		productPrice = (productPrice*.10)+productPrice;



		myOutputFile << productInt << " " << productName << " " << productCost << " " << productPrice << " " << quantityOnHand << endl;
	}


	myInputFile.close();
	myOutputFile.close();

	cout << "Program ending, have a nice day!" << endl;
	return 0;
}
