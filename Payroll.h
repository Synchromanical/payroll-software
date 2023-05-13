#ifndef PAYROLL_H_
#define PAYROLL_H_

using namespace std;

class Payroll 
{
private:
	int profileNumber;
	double payRate;
	double hours;
	double salary;

public:
	Payroll();
	~Payroll();
	void SetProfileNumber(int pN);
	int GetProfileNumber()const;
	void SetPayRate(double);
	double GetPayRate()const;
	void SetHours(double);
	double GetHours()const;
	double GetSalary();	
	void EditPayroll();

};
#endif