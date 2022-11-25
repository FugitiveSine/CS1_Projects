//============================================================================
// Name        : HenryT_Chapter6_Assignment.cpp
// Author      : Henry Timmons
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <iomanip>

#include "functions3.hpp"
using namespace std;

int main() {

ifstream myInputFile;
string fileName;
string planetName;
double distanceFromSun = 0;
double massOfPlanet = 0;
double velocity = 0;
double orbitalPeriod = 0;


cout << "Solar System Summary Report" << endl;
cout << "===========================" << endl;
cout << "Enter the file name that has the planet data: ";
getline(cin, fileName);
myInputFile.open(fileName);
if (myInputFile.fail()){
	cout << "Error file did not open correctly" << endl;
}else {

	cout << setw(10) << "Planet Name" << setw(20) << "Distance From Sun" << setw(20) << "Mass of Planet" << setw(15) << "Velocity" << setw(20) << "Orbital Period" << endl;
		cout << setw(10) << "===========" << setw(20) << "=================" << setw(20) << "==============" << setw(15) << "========" << setw(20) << "==============" << endl;
		while(!myInputFile.eof()){
		myInputFile >> planetName >> distanceFromSun >> massOfPlanet;
		cout << setw(11) << scientific << planetName << setw(20) << setprecision(2) << massOfPlanet << setw(20) << distanceFromSun << setw(15) << CalculateVelocity(distanceFromSun) << setw(20) << fixed << setprecision(2) << CalculatePeriod(distanceFromSun, CalculateVelocity(distanceFromSun)) << endl;
	}//while
myInputFile.close();


}//else


	cout << "Program ending, have a nice day!" << endl; // prints Program ending, have a nice day!
	return 0;
}
