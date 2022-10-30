//============================================================================
// Name        : CS1_Chapter4_Assignment.cpp
// Author      : Henry Timmons
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void checkLessZero(float x){
	if(x < 0){
		cout << "Error " << x << " cannot be less than zero, please try again." << endl;
	}

}

void clearCin(){
	cin.clear();
	cin.ignore(INT_MAX, '\n');
}

int main() {
	double velocity;
	const float gravity = 6.673E-11;
	char userInput;
	string name;	 // P Planet's name
	float mass = 0;	 	 // M Mass of planet
	float distance = 0;  // D Distance of satellite from planet
					 // C prints out report of speed and planet entered
					 // X ends program with exit prompt

	while(true){

	cout << "\nMain Menu" << endl;
	cout << "=========" << endl;
	cout << "To enter the name of the planet press <P>" << endl;
	cout << "To enter the mass of the planet press <M>" << endl;
	cout << "To enter the distance of satellite from planet press <D>" << endl;
	cout << "To print a report of speed and planet press <C>" << endl;
	cout << "To exit press <X>" << endl;
	cout << "Please enter the character you desire from the menu above: ";
	cin >> userInput;


	if (toupper(userInput) == 'P'){		//Gets Name
			cout << "\nWhat is the planet's name? ";
			cin.ignore();
			getline(cin, name);

		}// P
		else if (toupper(userInput) == 'M'){		//Gets Mass
			cout << "\nWhat is the mass of the planet? ";
			cin >> mass;
			checkLessZero(mass);
			clearCin();
		}//M
		else if (toupper(userInput) == 'D') {		//Gets Distance
			cout << "\nWhat is the distance of the satellite from the planet? ";
			cin >> distance;
			checkLessZero(distance);
			clearCin();
		}//D
		else if (toupper(userInput) == 'C') {	//Prints report
			if (mass <= 0){
				cout << "\n**Error mass is less than zero, please try again and input a number greater than zero." << endl;
			}
			else if (distance <= 0){
				cout << "\n**Error distance is less than zero, please try again and input a number greater than zero." << endl;
			}
			else {
			velocity = sqrt(gravity*mass/distance); //Calculation
			cout << setw(20) << endl << "Planet Name" << setw(15) << "Planet Mass" << setw(18) << "Orbit Distance" << setw(15) <<"Orbit Speed" << endl;
			cout << setw(20) << "===========" << setw(15) << "===========" << setw(18) << "==============" << setw(15) << "===========" << endl;
			cout << setw(20) << name << setw(15) << mass << setw(18) << distance << setw(15) << velocity  << endl;
			 }
		}//C
		else if (toupper(userInput) == 'X') {		//Exits loop
			cout << "You have left the Main Menu" << endl;
			break;

		}//X
		else {
			cout << "\n**Invalid option please select a character from the Main Menu." << endl;

		}





	}









	cout << "Program ending, have a nice day!" << endl;
	return 0;
}
