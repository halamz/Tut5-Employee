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
	string name();
	int staffNumber();
	virtual float salary() const = 0;
	~Employee();

private:
	const string Name;
	const int StaffNumber;
	float Salary;
	int numberOfEmployees = 0;

};

#endif //!EMPLOYEE_H
