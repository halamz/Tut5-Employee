#ifndef SALARY_H
#define SALARY_H

#include "Employee.h"

class SalaryEmployee:public Employee
{
public:
	SalaryEmployee(string, int, float);
	void setSalary(float);
	virtual float salary() const;
	virtual int NoOfEmployee() const;
	~SalaryEmployee();

private:
	float Salary;
};

#endif //!SALARY_H
