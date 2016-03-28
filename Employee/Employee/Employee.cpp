#include "Employee.h"


Employee::Employee(string name, int SN):
Name(name), 
StaffNumber(SN)
{
	//increment number of employees when object created
	++numberOfEmployees;
}

string Employee::name() const
{
	return Name;
}

//returns number of employees
int Employee::NoOfEmployee() const
{
	return numberOfEmployees;
}

int Employee::staffNumber() const
{
	return StaffNumber;
}
