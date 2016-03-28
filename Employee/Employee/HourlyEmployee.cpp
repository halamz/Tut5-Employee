#include "HourlyEmployee.h"


HourlyEmployee::HourlyEmployee(string name, int SN, int Hr, float rate):
Employee(name, SN)
{
	setHourlyRate(rate);
	setHoursWorked(Hr);
}

void HourlyEmployee::setHourlyRate(float rate)
{
	if (rate >= 0)
		HourlyRate = rate;

	else
		cout << "rate cannot be negative!!! " << endl;

}

void HourlyEmployee::setHoursWorked(int Hr)
{
	if (Hr >= 0)
		HoursWorked = Hr;

	else
		cout << "hours worked cannot be negative" << endl;

}

float HourlyEmployee::salary() const
{
	return HourlyRate * HoursWorked;
}

HourlyEmployee::~HourlyEmployee()
{

}
