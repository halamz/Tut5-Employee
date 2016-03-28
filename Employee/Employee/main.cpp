#include <iostream>
#include <vector>
#include "HourlyEmployee.h"
#include "CommissionEmployee.h"


using namespace std;

int main()
{
	Employee *Staff[3];

	cout << "ADDING EMPLOYEE 1:" << endl;
	Staff[0] = new SalaryEmployee("Zamokuhle", 214522034, 200000);
	cout << "Employee 1...." << endl;
	cout << "Name:" << Staff[0]->name() << "\tStaff Number: " << Staff[0]->staffNumber()<< endl;
	cout << "Earnings: " << Staff[0]->salary();
	cout << "Number of employees: " << Staff[0]->NoOfEmployee() << endl;

	cout << "ADDING EMPLOYEE 2:" << endl;
	Staff[1] = new HourlyEmployee("Tlali", 215629292, 14, 10000);
	cout << "Employee 2...." << endl;
	cout << "Name:" << Staff[1]->name() << "\tStaff Number: " << Staff[1]->staffNumber() << endl;
	cout << "Earnings: " << Staff[0]->salary();
	cout << "Number of employees: " << Staff[1]->NoOfEmployee() << endl;

	
	cout << "ADDING EMPLOYEE 3:" << endl;
	Staff[2] = new CommissionEmployee("Gerald", 2145229331, 150000, 0.15, 500000);
	cout << "Employee 3...." << endl;
	cout << "Name:" << Staff[2]->name() << "\tStaff Number: " << Staff[2]->staffNumber() << endl;
	cout << "Earnings: " << Staff[0]->salary();
	cout << "Number of employees: " << Staff[2]->NoOfEmployee() << endl;
	


	return 0;

}