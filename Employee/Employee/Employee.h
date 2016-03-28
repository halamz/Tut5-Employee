#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Employee
{
public:
	Employee(string, int);
	string name() const;
	int staffNumber() const;
	virtual float salary() const = 0;
	virtual ~Employee();

private:
	const string Name;
	const int StaffNumber;
	int numberOfEmployees = 0;

};

#endif //!EMPLOYEE_H
