#include<iostream>
#include<iomanip>
#include"mytemperature.h"
using namespace std;
int main()
{
	double c[4] = { 40.0,39.0,0,31.0 }, f[4] = { 120.0,110.0,0,30.0 };
	cout << "Celsius" << "\t" << "Fahrenheit"  << " | " << "Fahrenheit" << "\t" << "Celsius" << endl;
	for (int i = 0; i < 4; i++)
	{
		if (i == 0 || i == 1 || i == 3)
		{
			cout << fixed << setprecision(1) << c[i] << "\t" << fixed << setprecision(1) << celsius_to_fah(c[i]) << "\t" << "|" << " \t" << fixed << setprecision(1) << f[i] << "\t" << fixed << setprecision(2) << fahrenheit_to_cels(f[i]) << endl;

		}
		else
		{
			cout << "..." << "\t" << "..." << "\t" << "|" << "\t" << "..." << "\t" << "..." << endl;
		}
	}
	return 0;
}