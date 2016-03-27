#include "Employee.h"


Employee::Employee(string name, int SN):
Name(name), 
StaffNumber(SN)
{

}

string Employee::name()
{
	return Name;
}

int Employee::staffNumber()
{
	return StaffNumber;
}


Employee::~Employee()
{
}
