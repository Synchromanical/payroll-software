#include <iostream>
#include "Payroll.h"


Payroll::Payroll() {
	profileNumber = 0;
	payRate = 0;
	hours = 0;
	salary = 0;
}

Payroll::~Payroll(){}

void Payroll::EditPayroll()
{
	int option = 0;
	int editOption;
	double newPayRate;
	double newHours;

	while (option != 2)
	{
		cout << "1. Edit pay rate" << endl;
		cout << "2. Edit hours" << endl;
		cin >> editOption;

		if (editOption == 1)
		{
			cout << "Enter the pay rate" << endl;
			cin >> newPayRate;
			payRate = newPayRate;
		}
		else if (editOption == 2)
		{
			cout << "Enter hours" << endl;
			cin >> newHours;
			hours = newHours;
		}

		editOption = 0;

		cout << "1. To edit another thing" << endl;
		cout << "2. To exit" << endl;
		cin >> option;
	}
}

void Payroll::SetProfileNumber(int pN) {
	profileNumber = pN;
}

int Payroll::GetProfileNumber()const { return profileNumber; }

void Payroll::SetPayRate(double pR) {
	payRate = pR;
}

double Payroll::GetPayRate()const { return payRate; }

void Payroll::SetHours(double h) {
	hours = h;
}

double Payroll::GetHours()const { return hours; }

double Payroll::GetSalary() {
	salary = payRate * hours;
	return salary;
}



