#ifndef HOURLY_H
#define HOURLY_H
#include "Employee.h"

class HourlyEmployee:public Employee
{
	
public:
	HourlyEmployee(string, int, int, float);
	void setHourlyRate(float);
	void setHoursWorked(int);
	virtual int NoOfEmployee() const;
	virtual float salary() const;
	~HourlyEmployee();

private:
	float HourlyRate;
	int HoursWorked;
};

#endif //!HOURLY
