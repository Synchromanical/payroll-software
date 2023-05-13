#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include <string>

using namespace std;

class Employee
{
private:
	string firstName;
	string lastName;
	string position;
	int age;

public:
	Employee();
	~Employee();
	void SetFirstName(string);
	string GetFirstName() const;
	void SetLastName(string);
	string GetLastName()const;
	void SetPosition(string);
	string GetPosition() const;
	void SetAge(int);
	int GetAge()const;
	void DisplayEmployee();
	void EditEmployee();

};
#endif
