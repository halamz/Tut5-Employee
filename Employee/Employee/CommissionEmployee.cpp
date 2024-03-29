#include "CommissionEmployee.h"


CommissionEmployee::CommissionEmployee(string name, int SN, float salary, float rate, float revenue) :
SalaryEmployee(name, SN, salary)
{
	
}

void CommissionEmployee::setBaseSalary(float salary)
{
	SalaryEmployee::setSalary(salary);
}

void CommissionEmployee::setRate(float rate)
{
	if (rate >= 0 && rate <= 1)
		Rate = rate;
	else
		cout << "invalid rate" << endl;

}

void CommissionEmployee::setRevenue(float revenue)
{
	if (revenue >= 0)
		Revenue = revenue;
	else
		cout << "revenue cannot be negative" << endl;
}

float CommissionEmployee::salary() const
{
	return (SalaryEmployee::salary()) + Revenue * Rate;
}

CommissionEmployee::~CommissionEmployee()
{
}
