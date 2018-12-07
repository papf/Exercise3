#include "LowPassFilter.h"

/*!
Constructor which inherit fro the BorderFreq
*/
LowPassFilter::LowPassFilter(double c1, double c2, double l1) : BorderFreq(c1, c2, l1) {}

/*!
Methode to calculate the right borderfrequenz
*/
double LowPassFilter::calculate() // could be declared as an override
{
	return BorderFreq::calculate(FREQUENZ_TYPE::LOW);
}
