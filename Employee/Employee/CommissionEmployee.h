#ifndef COMMISION_H
#define COMMISION_H

#include "SalaryEmployee.h"
class CommissionEmployee:public SalaryEmployee
{
public:
	CommissionEmployee(string, int, float, float, float);
	void setBaseSalary(float);
	void setRate(float);
	void setRevenue(float);
	virtual float salary() const;
	virtual int NoOfEmployee() const;
	~CommissionEmployee();

private:
	float Rate;
	float Revenue;
};

#endif //!COMMISION_H
