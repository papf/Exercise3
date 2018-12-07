#ifndef BORDERFREQ
#define BORDERFREQ

class BorderFreq
{
protected:
	BorderFreq(double c1, double c2, double l1);
	enum FREQUENZ_TYPE {LOW = 0, HIGH};
	double calculate(FREQUENZ_TYPE type);
private:
	const double m_c1, m_c2, m_l1;
};
#endif BORDERFREQ