/*
 * functions3.hpp
 *
 *  Created on: Nov 1, 2022
 *      Author: henry
 */

#ifndef FUNCTIONS3_HPP_
#define FUNCTIONS3_HPP_


#include <iostream>
#include <cmath>
using namespace std;

const double GRAVITY = 6.673E-11;
const double MASSOFSUN = 1.989e30;
const double PI = 3.14159;
const double N = 31536000;


double CalculateVelocity(double distanceFromSun);
double CalculatePeriod(double distanceFromSun, double velocity);


#endif /* FUNCTIONS3_HPP_ */
