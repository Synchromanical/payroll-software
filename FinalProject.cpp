// Amir Abdoul Karim Y Djibo
// Alex Cen Feng
// PROG1960 Final Project
// Purpose: Payroll software

#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <functional>
#include "Payroll.h"
#include "FullTime.h"
#include "PartTime.h"
#include "Employee.h"
#include "Reimbursement.h"
#include "ParkingPermit.h"


using namespace std;

int main()
{
    Employee employee[6];
    Payroll payroll[6];
    FullTime fullTime[6];
    PartTime partTime[6];
    ParkingPermit parkingPermit[6];
    Reimbursement reimbursement[6];
    string name;
    int choice = 0;
    int sortOption = 0;
    int answer = 0;
    int age = 0;
    double payRate = 0;
    double hours = 0;
    string position;
    string plateNumber;
    string carMake;
    int reimbursementOption = 0;
    int budgetOption = 0;
    double upgradeBudget;
    static int numOption = 0;
    int num = 1;
    int pos = 0;
    int accNum = 0;
    int secondChoice = 0;
    int permitOption = 0;
    int editOption = 0;
    int paySlipOption = 0;
    int timeOffOption = 0;
    double timeOff = 0;
    


    while (choice != 6)
    {
        cout << "Menu : Select an option" << endl;
        cout << " " << endl;
        cout << "1. Display employee information" << endl;
        cout << "2. Add New employee information" << endl;
        cout << "3. Delete employee information" << endl;
        cout << "4. Edit employee information" << endl;
        cout << "5. Display salary slip" << endl;
        cout << "6. Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:

            cout << "1. To sort by profile number" << endl;
            cout << "2. To sort by salary" << endl;
            cin >> sortOption;

            if (sortOption == 1)
            {
                cout << "Current employees: " << endl;

                for (int i = 0; i < (num - 1); i++)
                {
                    if ((reimbursement[i].GetReimbursmentOption() == 1) && (parkingPermit[i].GetPermitOption() == 1) && (fullTime[i].GetTimeOffOption() == 1))
                    {
                        cout << "Profile number: " << i + 1 << endl
                            << "Salary: $" << (((payroll[i].GetHours() + fullTime[i].GetTimeOff()) * payroll[i].GetPayRate()) - parkingPermit[i].GetParkingPrice()) + reimbursement[i].GetBudget() << endl;

                        employee[i].DisplayEmployee();
                    }
                    else if ((reimbursement[i].GetReimbursmentOption() == 1) && (parkingPermit[i].GetPermitOption() == 1)) {

                        cout << "Profile number: " << i + 1 << endl
                            << "Salary: $" << (payroll[i].GetSalary() - parkingPermit[i].GetParkingPrice()) + reimbursement[i].GetBudget() << endl;

                        employee[i].DisplayEmployee();
                    }
                    else if (parkingPermit[i].GetPermitOption() == 1) {
                        cout << "Profile number: " << i + 1 << endl
                            << "Salary: $" << payroll[i].GetSalary() - parkingPermit[i].GetParkingPrice() << endl;

                        employee[i].DisplayEmployee();
                    }
                    else if (reimbursement[i].GetReimbursmentOption() == 1) {
                        cout << "Profile number: " << i + 1 << endl
                            << "Salary: $" << payroll[i].GetSalary() + reimbursement[i].GetBudget() << endl;

                        employee[i].DisplayEmployee();
                    }
                    else if (fullTime[i].GetTimeOffOption() == 1) {
                        cout << "Profile number: " << i + 1 << endl
                            << "Salary: $" << (payroll[i].GetHours() + fullTime[i].GetTimeOff()) * payroll[i].GetPayRate() << endl;

                        employee[i].DisplayEmployee();
                    }
                    else {
                        cout << "Profile number: " << i + 1 << endl
                            << "Salary: $" << payroll[i].GetSalary() << endl;

                        employee[i].DisplayEmployee();
                    }
                }
            }
            else
            {

                for (int i = 0; i < num; i++)
                {
                    for (int i = 0; i < (num - 1); i++)
                    {
                        if (payroll[i].GetSalary() > payroll[i + 1].GetSalary())
                        {
                            if ((reimbursement[i].GetReimbursmentOption() == 1) && (parkingPermit[i].GetPermitOption() == 1) && (fullTime[i].GetTimeOffOption() == 1))
                            {
                                cout << "Profile number: " << i + 1 << endl
                                    << "Salary: $" << (((payroll[i].GetHours() + fullTime[i].GetTimeOff()) * payroll[i].GetPayRate()) - parkingPermit[i].GetParkingPrice()) + reimbursement[i].GetBudget() << endl;

                                employee[i].DisplayEmployee();
                            }
                            else if ((reimbursement[i].GetReimbursmentOption() == 1) && (parkingPermit[i].GetPermitOption() == 1)) {

                                cout << "Profile number: " << i + 1 << endl
                                    << "Salary: $" << (payroll[i].GetSalary() - parkingPermit[i].GetParkingPrice()) + reimbursement[i].GetBudget() << endl;

                                employee[i].DisplayEmployee();
                            }
                            else if (parkingPermit[i].GetPermitOption() == 1) {
                                cout << "Profile number: " << i + 1 << endl
                                    << "Salary: $" << payroll[i].GetSalary() - parkingPermit[i].GetParkingPrice() << endl;

                                employee[i].DisplayEmployee();
                            }
                            else if (reimbursement[i].GetReimbursmentOption() == 1) {
                                cout << "Profile number: " << i + 1 << endl
                                    << "Salary: $" << payroll[i].GetSalary() + reimbursement[i].GetBudget() << endl;

                                employee[i].DisplayEmployee();
                            }
                            else if (fullTime[i].GetTimeOffOption() == 1) {
                                cout << "Profile number: " << i + 1 << endl
                                    << "Salary: $" << (payroll[i].GetHours() + fullTime[i].GetTimeOff()) * payroll[i].GetPayRate() << endl;

                                employee[i].DisplayEmployee();
                            }
                            else {
                                cout << "Profile number: " << i + 1 << endl
                                    << "Salary: $" << payroll[i].GetSalary() << endl;

                                employee[i].DisplayEmployee();
                            }
                        }
                    }
                }
            }

            break;
        
        case 2:
            accNum++;
            if (num > 5) {
                cout << "Cannot add more than 5 employees" << endl;
            }
            else {
                cout << "Is this a Full time or Part time employee?" << endl;
                cout << "1. Full time" << endl;
                cout << "2. Part time" << endl;
                cin >> answer;
                if (answer == 1) {
                    for (; numOption < num; numOption++)
                    {
                        payroll[numOption].SetProfileNumber(accNum);

                        cout << "Enter first Name: " << endl;
                        cin.ignore();
                        getline(cin, name);
                        employee[numOption].SetFirstName(name);
                        cout << "Enter last Name: " << endl;
                        getline(cin, name);
                        employee[numOption].SetLastName(name);
                        cout << "Enter age: " << endl;
                        cin >> age;
                        employee[numOption].SetAge(age);
                        cout << "Enter position: " << endl;
                        cin.ignore();
                        getline(cin, position);
                        employee[numOption].SetPosition(position);
                        cout << "Enter pay rate: " << endl;
                        cin >> payRate;
                        payroll[numOption].SetPayRate(payRate);
                        cout << "Enter hours worked: " << endl;
                        cin >> hours;
                        payroll[numOption].SetHours(hours);

                        cout << "Has this employee purchased a parking permit?" << endl;
                        cout << "1. Yes" << endl;
                        cout << "2. No" << endl;
                        cin >> permitOption;
                        parkingPermit[numOption].SetPermitOption(permitOption);

                        if (permitOption == 1) {
                            cout << "Enter the plate number of the car" << endl;
                            cin.ignore();
                            getline(cin, plateNumber);
                            parkingPermit[numOption].SetCarPlateNumber(plateNumber);

                            cout << "Enter the make of the car" << endl;
                            cin.ignore();
                            getline(cin, carMake);
                            parkingPermit[numOption].SetCarMake(carMake);
                        }
                        else {
                            cout << endl;
                        }

                        cout << "Is this employee eligible for a reimbursement?" << endl;
                        cout << "1. Yes" << endl;
                        cout << "2. No" << endl;
                        cin >> reimbursementOption;
                        reimbursement[numOption].SetReimbursementOption(reimbursementOption);

                        if (reimbursementOption == 1) {

                            cout << "Enter the given budget: " << endl;
                            cin >> upgradeBudget;
                            reimbursement[numOption].SetBudget(upgradeBudget);
                        }
                        else
                        {
                            cout << endl;
                        }

                        cout << "Is this employee eligible for time off?" << endl;
                        cout << "1. Yes" << endl;
                        cout << "2. No" << endl;
                        cin >> timeOffOption;
                        fullTime[numOption].SetTimeOffOption(timeOffOption);

                        if (timeOffOption == 1) {

                            cout << "Enter the given time off: " << endl;
                            cin >> timeOff;
                            fullTime[numOption].SetTimeOff(timeOff);
                        }
                        else
                        {
                            cout << endl;
                        }


                    }
                    num++;
                }
                else if (answer == 2) {
                    for (;numOption < num ; numOption++)
                    {
                        payroll[numOption].SetProfileNumber(accNum);

                        cout << "Enter first Name: " << endl;
                        cin.ignore();
                        getline(cin, name);
                        employee[numOption].SetFirstName(name);
                        cout << "Enter last Name: " << endl;
                        getline(cin, name);
                        employee[numOption].SetLastName(name);
                        cout << "Enter age: " << endl;
                        cin >> age;
                        employee[numOption].SetAge(age);
                        cout << "Enter position: " << endl;
                        cin.ignore();
                        getline(cin, position);
                        employee[numOption].SetPosition(position);
                        cout << "Enter pay rate: " << endl;
                        cin >> payRate;
                        payroll[numOption].SetPayRate(payRate);
                        cout << "Enter hours worked: " << endl;
                        cin >> hours;
                        payroll[numOption].SetHours(hours);

                        cout << "Has this employee purchased a parking permit?" << endl;
                        cout << "1. Yes" << endl;
                        cout << "2. No" << endl;
                        cin >> permitOption;
                        parkingPermit[numOption].SetPermitOption(permitOption);

                        if (permitOption == 1) {
                            cout << "Enter the plate number of the car" << endl;
                            cin.ignore();
                            getline(cin, plateNumber);
                            parkingPermit[numOption].SetCarPlateNumber(plateNumber);

                            cout << "Enter the make of the car" << endl;
                            getline(cin, carMake);
                            cin.ignore(100, '\n');
                            parkingPermit[numOption].SetCarMake(carMake);
                        }
                        else {
                            cout << endl;
                        }
                    }
                    num++;
                }
            }


            break;

        case 3:
            cout << "Current employees: " << endl;

            for (int i = 0; i < (num - 1); i++)
            {
                if (permitOption == 1) {

                    cout << "Profile number: " << i + 1 << endl;
                    
                    employee[i].DisplayEmployee();
                }
                else if ((reimbursementOption == 1) && (permitOption == 1)) {
                    cout << "Profile number: " << i + 1 << endl;
                    
                    employee[i].DisplayEmployee();
                }
                else if (reimbursementOption == 1) {
                    cout << "Profile number: " << i + 1 << endl;
                     
                    employee[i].DisplayEmployee();
                }
                else {
                    cout << "Profile number: " << i + 1 << endl;
                     
                    employee[i].DisplayEmployee();
                }
            }

            cout << "Enter the employee profile number you want to delete" << endl;
            cin >> pos;

            for (int s = (pos - 1); s < (num - 1); s++)
            {
                employee[s] = employee[s + 1];
                payroll[s] = payroll[s + 1];
            }
            accNum--;
            num--;
            numOption--;

            break;
        
        case 4:
            cout << "Current employees: " << endl;

            for (int i = 0; i < (num - 1); i++)
            {
                if (permitOption == 1) {

                    cout << "Profile number: " << i + 1 << endl;
                        
                    employee[i].DisplayEmployee();
                }
                else if ((reimbursementOption == 1) && (permitOption == 1)) {
                    cout << "Profile number: " << i + 1 << endl;
                     
                    employee[i].DisplayEmployee();
                }
                else if (reimbursementOption == 1) {
                    cout << "Profile number: " << i + 1 << endl;
                     
                    employee[i].DisplayEmployee();
                }
                else {
                    cout << "Profile number: " << i + 1 << endl;
                    
                    employee[i].DisplayEmployee();
                }
            }

            cout << "Enter the account number to be edited: " << endl;
            cin >> pos;
            
            for (int i = 0; i < num; i++) {
                if (payroll[i].GetProfileNumber() == pos)
                {
                    cout << "1. Edit employee information" << endl;
                    cout << "2. Edit payroll information" << endl;
                    cin >> editOption;
                    if (editOption == 1)
                    {
                        employee[i].EditEmployee();
                    }
                    else
                    {
                        payroll[i].EditPayroll();
                    }
                }

                else if (pos > 5)
                {
                    cout << "Account does not exist." << endl;
                    break;
                }

            }
            
            break;

        case 5:

            cout << "Current employees: " << endl;

            for (int i = 0; i < (num - 1); i++)
            {
                if (permitOption == 1) {

                    cout << "Profile number: " << i + 1 << endl;
                       
                    employee[i].DisplayEmployee();
                }
                else if ((reimbursementOption == 1) && (permitOption == 1)) {
                    cout << "Profile number: " << i + 1 << endl;
                       
                    employee[i].DisplayEmployee();
                }
                else if (reimbursementOption == 1) {
                    cout << "Profile number: " << i + 1 << endl;
                       
                    employee[i].DisplayEmployee();
                }
                else {
                    cout << "Profile number: " << i + 1 << endl;
                    
                    employee[i].DisplayEmployee();
                }
            }

            cout << "Enter the account profile you want for the pay slip" << endl;
            cin >> paySlipOption;

            for (int i = 0; i < num - 1; i++) {
                if (payroll[i].GetProfileNumber() == paySlipOption)
                {
                    cout << "---------------------------------------------------------" << endl;
                    cout << "Name: " << setw(30) << employee[i].GetFirstName() << " " << employee[i].GetLastName() << endl;
                    cout << "---------------------------------------------------------" << endl;
                    cout << "Position: " << setw(31) << employee[i].GetPosition() << endl;
                    cout << "Pay rate: " << setw(24) << payroll[i].GetPayRate() << endl;
                    cout << "hours: " << setw(27) << payroll[i].GetHours() << endl;

                    if (fullTime[i].GetTimeOffOption() == 1)
                    {
                        cout << "Time off: " << setw(24) << fullTime[i].GetTimeOff() << endl;
                    }

                    if (reimbursement[i].GetReimbursmentOption() == 1)
                    {
                        cout << "Reimbursement:" << setw(24) << reimbursement[i].GetBudget() << endl;
                    }

                    if (parkingPermit[i].GetPermitOption() == 1)
                    {
                        cout << "Parking permit info: " << setw(16) << parkingPermit[i].GetCarMake() << ": " << parkingPermit[i].GetCarPlateNumber() << endl;
                        cout << "Parking permit price: " << setw(12) << parkingPermit[i].GetParkingPrice() << endl;
                    }
                    
                    if ((fullTime[i].GetTimeOffOption() == 1) && (reimbursement[i].GetReimbursmentOption() == 1) && (parkingPermit[i].GetPermitOption() == 1))
                    {
                        cout << "Salary: " << setw(25) << "$" << (((payroll[i].GetHours() + fullTime[i].GetTimeOff()) * payroll[i].GetPayRate()) + reimbursement[i].GetBudget()) - parkingPermit[i].GetParkingPrice() << endl;
                    }
                    else if ((parkingPermit[i].GetPermitOption() == 1) && (reimbursement[i].GetReimbursmentOption() == 1))
                    {
                        cout << "Salary: " << setw(25) << "$" << ((payroll[i].GetSalary() - parkingPermit[i].GetParkingPrice()) + reimbursement[i].GetBudget()) << endl;
                    }
                    else if ((fullTime[i].GetTimeOffOption() == 1) && (parkingPermit[i].GetPermitOption() == 1))
                    {
                        cout << "Salary: " << setw(25) << "$" << ((payroll[i].GetHours() + fullTime[i].GetTimeOff()) * payroll[i].GetPayRate()) - parkingPermit[i].GetParkingPrice() << endl;
                    }
                    else if ((fullTime[i].GetTimeOffOption() == 1) && (reimbursement[i].GetReimbursmentOption() == 1))
                    {
                        cout << "Salary: " << setw(25) << "$" << ((payroll[i].GetHours() + fullTime[i].GetTimeOff()) * payroll[i].GetPayRate()) + reimbursement[i].GetBudget() << endl;
                    }
                    else if (parkingPermit[i].GetPermitOption() == 1)
                    {
                        cout << "Salary: " << setw(25) << "$" << payroll[i].GetSalary() - parkingPermit[i].GetParkingPrice() << endl;
                    }
                    else if (fullTime[i].GetTimeOffOption() == 1)
                    {
                        cout << "Salary: " << setw(25) << "$" << (payroll[i].GetHours() + fullTime[i].GetTimeOff()) * payroll[i].GetPayRate() << endl;
                    }
                    else if(reimbursement[i].GetReimbursmentOption() == 1)
                    {
                        cout << "Salary: " << setw(25) << "$" << payroll[i].GetSalary() + reimbursement[i].GetBudget() << endl;
                    }
                    else
                    {
                        cout << "Salary: " << setw(25) << "$" << payroll[i].GetSalary() << endl;
                    }
                    cout << "---------------------------------------------------------" << endl;
                }
            }
            
            break;
            
        default:
            break;
            
        }
    }

    return 0;
    
}

