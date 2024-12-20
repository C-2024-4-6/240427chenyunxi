#include<iostream>
#include"student.h"
using namespace std;
void Student::set_value(int n, const char* na,char se)
{
	num = 007;
	strcpy_s(name, na);
	sex = 'm';
}
void Student::display()
{
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}