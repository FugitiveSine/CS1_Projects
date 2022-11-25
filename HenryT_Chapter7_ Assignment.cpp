//============================================================================
// Name        : HenryT_Chapter7_.cpp
// Author      : Henry Timmons
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <time.h>
#include <climits>
using namespace std;

void clearCin(void) {
	cin.clear();
	cin.ignore(INT_MAX, '\n');
}

int main() {
	srand(time(0));
	int userInputArray[5] = { 0 };
	int lotteryArray[5];
	int correctPicks = 0;
	char proceedYN;



	while (true) {
		for (int i = 0; i < 5; i++) {
			lotteryArray[i] = rand() % 12;
		}

		for (int i = 0; i < 5; i++) {
			cout << "Enter your selection for slot #" << i << " (0 - 12): ";
			cin >> userInputArray[i];
			clearCin();

			if (userInputArray[i] < 0 || userInputArray[i] > 12) { //checks if the value entered is valid, if not it will repeat that selection slot
				cout << "Error please re-enter that entry" << endl;
				i--;
			} else {
			}//else

		} //for

		for (int i = 0; i < 5; i++) {

			for (int j = 0; j < 5; j++) {
				if (userInputArray[i] == lotteryArray[j]) { //checks if any numbers they input match with any number in the lotteryArray
					correctPicks += 1;
				} //if
			} //inner for
		} //outer for
		cout << "Lottery picks" << endl;
		for (int i = 0; i < 5; i++) {
			cout << lotteryArray[i] << " ";
		}

		cout << endl << "Your picks" << endl;
		for (int i = 0; i < 5; i++) {
			cout << userInputArray[i] << " ";
		}
		cout << endl << "Total correct picks: " << correctPicks << endl;

		if(correctPicks == 5){
			cout << "**GRAND PRIZE**" << endl;
		}

		cout << "Would you like to keep playing (Y/N): ";
		cin >> proceedYN;
		if (toupper(proceedYN) == 'N'){
			break;
		}else{//if
			correctPicks = 0; //sets correctPicks to 0 if they continue
		}// else

	} //while

	cout << "Program ending, have a nice day!" << endl; // prints Program ending, have a nice day!
	return 0;
}
