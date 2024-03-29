//Max Wolf 2019

#include "pch.h"
#include <iostream>

int main()
{
	int selection;
	float ofreq;
	float wl;
	float efwl;
	int c = (3 * (10 ^ 8));
	float dec;

	std::cout << "Quarter Wavelength PCB Yagi Calculator\n";
	std::cout << "1: New Calculation\n";
	std::cout << "2: Sources\n";
	std::cin >> selection;
	
	if (selection == 1)
	{
		std::cout << "Operating Frequency (MHz):\n";
		std::cin >> ofreq;
		std::cout << "PCB Dielectric Constant:\n";
		std::cin >> dec;
		wl = (c / ofreq);
		efwl = (wl / 4) / (sqrt(dec));
		std::cout << "Wavelength of " << ofreq << " MHz: " << wl << " meters\n";
		std::cout << "Effective wavelength: " << efwl << " meters\n";
		std::cout << "L1: 60mm\n";
		std::cout << "L2: " << efwl / 2 << "m\n";
		std::cout << "L3=L4=L5: " << (efwl / 2)*0.8 << "m\n";
		std::cout << "D1: 10mm\n";
		std::cout << "D2: " << (efwl / 2)*0.25 << "m\n";
		std::cout << "D3=D4: " << efwl * 0.2 << "m\n";
		return 0;
	}
	else
	{
		std::cout << "Calculations/formulas from Roma Rico Formalejo Flores on ResearchGate";
		std::cout << "Formal Citation: Flores, Roma Rico. (2017). Microstrip PCB Yagi-uda Antenna Design. 10.13140/RG.2.2.14801.12649. ";
		std::cout << "Program by Max Wolf 2019";
		return 0;
	}
}