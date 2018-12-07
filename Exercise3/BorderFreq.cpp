#include "BorderFreq.h"
#define _USE_MATH_DEFINES
#include <math.h>

/*!
Constructor
*/
BorderFreq::BorderFreq(double c1, double c2, double l1) : m_c1(c1), m_c2(c2), m_l1(l1){}

/*!
Methode to calculate the borderfrequenz, it shall distinguished between the Low and the Highpass
*/
double BorderFreq::calculate(FREQUENZ_TYPE type)
{
	// enum for switch between LOW or HIGH
	short temp; 
	if (type == FREQUENZ_TYPE::LOW) temp = +1;
	else                            temp = -1;
	/*!
	Formel to calculate the fequenz
	*/
	double result = 1 / (2 * M_PI*sqrt(m_l1*m_c1)*(temp * 0.5 * sqrt(m_c1 / m_c2) + sqrt(1 + 0.25 * (m_c1 / m_c2))));
	return result;
}
