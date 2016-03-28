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

int Employee::staffNumber() const
{
	return StaffNumber;
}
