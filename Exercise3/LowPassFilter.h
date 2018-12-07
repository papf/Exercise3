#ifndef LOWPASSFILTER
#define LOWPASSFILTER
#include "BorderFreq.h"

class LowPassFilter : BorderFreq
{
public:
	LowPassFilter(double c1, double c2, double l1);
	double calculate();
};
#endif LOWPASSFILTER