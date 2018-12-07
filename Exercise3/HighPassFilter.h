#ifndef HIGHPASSFILTER
#define HIGHPASSFILTER
#include "BorderFreq.h"

class HighPassFilter : BorderFreq
{
public:
	HighPassFilter(double c1, double c2, double l1);
	double calculate();
};
#endif HIGHPASSFILTER