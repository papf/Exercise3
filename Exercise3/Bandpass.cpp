#include "Bandpass.h"

/*!
Constructor which inherit fro the HighPassFilter and the LowPassFilter. It sets the m_pHigh and m_pLow at the nullptr
*/
BandPass::BandPass(double c1, double c2, double l1): HighPassFilter(c1, c2, l1), LowPassFilter(c1, c2, l1)
{
	m_pHigh = nullptr;
	m_pLow = nullptr;
}

/*!
Destructor which deletes the values if there are some stoend
*/
BandPass::~BandPass()
{
	if (m_pHigh != nullptr) delete m_pHigh;
	if (m_pLow != nullptr) delete m_pLow;
}

/*!
Methode, whitch returns the Low value of the Bandpass
*/
double BandPass::getLow()
{
	if (m_pLow == nullptr) m_pLow = new double(LowPassFilter::calculate());
	return *m_pLow;
}

/*!
Methode, whitch returns the High value of the Bandpass
*/
double BandPass::getHigh()
{
	if (m_pHigh == nullptr) m_pHigh = new double(HighPassFilter::calculate());
	return *m_pHigh;
}
