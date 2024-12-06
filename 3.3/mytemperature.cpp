#include<iostream>
using namespace std;
double celsius_to_fah(double cel)
{
	double f = cel * 1.8 + 32;
	return f;
}
double fahrenheit_to_cels(double fah)
{
	double c = (fah - 32) / 1.8;
	return c;
}