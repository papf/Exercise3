/*
Programmname: Bandpass Calculator
Date: 06.12.2018
Name: Pfleghaar Patrick, Groﬂ Philipp
*/


#include "Bandpass.h"
#include <iostream>
#include <iomanip>
//#define WINDOWS at Pr‰prozessor defined
/*!
Using definition of system("pause")
*/
void system_pause()
{
#ifdef WINDOWS
	system("pause");
#else
	std::cout << "Press enter to continue ...";
	std::cin.get();
#endif
}

/*!
The main is only for testing. Checks of the input values are missing.
*/
int main()
{
	/*!
	Input
	*/
	double c1, c2, l1, l2;
	std::cout << "Geben Sie den Wert des C1 in F ein : " << std::endl;
	std::cin >> c1;
	std::cout << "Geben Sie den Wert des C2 in F ein : " << std::endl;
	std::cin >> c2;
	std::cout << "Geben Sie den Wert des L1 in H ein : " << std::endl;
	std::cin >> l1;
	//std::cout << "Geben Sie den Wert des L2 in H ein : " << std::endl;
	//std::cin >> l2;

	/*!
	Output of the values with 2 decimal places
	*/
	BandPass bandpass(c1, c2, l1);
	std::cout << "Low Frequenz: "  << std::fixed << std::setprecision(2) << bandpass.getLow()  << " Hz" << std::endl;
	std::cout << "High Frequenz: " << std::fixed << std::setprecision(2) << bandpass.getHigh() << " Hz" << std::endl;

	system_pause();
	system("Pause");
}