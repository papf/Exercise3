#ifndef BANDPASS
#define BANDPASS
#include "HighPassFilter.h"
#include "LowPassFilter.h"

class BandPass : HighPassFilter, LowPassFilter
{
public:
	BandPass(double c1, double c2, double l1);
	virtual ~BandPass();
	double getLow();
	double getHigh();
private:
	double* m_pHigh; 
	double* m_pLow;
};
#endif BANDPASS