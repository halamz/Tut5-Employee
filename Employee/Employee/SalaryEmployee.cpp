#include "SalaryEmployee.h"

//default constructor
SalaryEmployee::SalaryEmployee(string name, int SN, float salary):
Employee(name, SN)//calling Employee constructure
{
	setSalary(salary);
}

//setting salary
void SalaryEmployee::setSalary(float salary)
{
	if (salary >= 0)
		Salary = salary;

	else
		cout << "there cannot be a negative salary" << endl;

}

//returns salary
float SalaryEmployee::salary() const
{
	return Salary;
}

SalaryEmployee::~SalaryEmployee()
{
}
