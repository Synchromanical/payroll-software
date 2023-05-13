#include <iostream>
#include "Employee.h"

Employee::Employee() {
	age = 0;
}

Employee::~Employee() {}

void Employee::SetFirstName(string a)
{
	firstName = a;
}

string Employee::GetFirstName() const
{
	return firstName;
}

void Employee::SetLastName(string a)
{
	lastName = a;
}

string Employee::GetLastName() const
{
	return lastName;
}

void Employee::SetPosition(string a)
{
	position = a;
}

string Employee::GetPosition() const
{
	return position;
}

void Employee::SetAge(int a)
{
	age = a;
}

int Employee::GetAge() const
{
	return age;
}

void Employee::DisplayEmployee()
{
	cout << "First Name: " << GetFirstName() << endl
		<< "Last Name: " << GetLastName() << endl
		<< "Position: " << GetPosition() << endl
		<< "Age: " << GetAge() << endl
		<< endl;
}

void Employee::EditEmployee()
{
	int option = 0;
	int editOption;
	int newAge;
	string name;
	string newPosition;
	
	while (option != 2)
	{
		cout << "1. Edit first name" << endl
			<< "2. Edit last name" << endl
			<< "3. Edit Position" << endl
			<< "4. Edit age" << endl;
		cin >> editOption;

		if (editOption == 1)
		{
			cout << "Please enter first name" << endl;
			cin >> name;
			firstName = name;
		}
		else if (editOption == 2)
		{
			cout << "Please enter last name" << endl;
			cin >> name;
			lastName = name;
		}
		else if (editOption == 3)
		{
			cout << "Please enter position" << endl;
			cin >> newPosition;
			position = newPosition;
		}
		else if (editOption == 4)
		{
			cout << "Please enter age" << endl;
			cin >> newAge;
			age = newAge;
		}

		editOption = 0;

		cout << "1. To edit another thing" << endl;
		cout << "2. To exit" << endl;
		cin >> option;
	}
}
