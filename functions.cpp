#include "functions3.hpp"
//define variables (velocity, orbitalPeriod) here????


double CalculateVelocity(double distanceFromSun){
	double velocity;
	velocity = sqrt((GRAVITY*MASSOFSUN)/distanceFromSun);
	return velocity;
}

double CalculatePeriod(double distanceFromSun, double velocity){
	double orbitalPeriod;
	orbitalPeriod = ((2*PI*distanceFromSun)/velocity)/N;
	return orbitalPeriod;

}
