#include<iostream>
#include"ParkingPermit.h"

ParkingPermit::ParkingPermit() {
	parkingPrice = 75;
	permitOption = 0;
}

ParkingPermit::~ParkingPermit() {}

double ParkingPermit::GetParkingPrice() { return parkingPrice; }

void ParkingPermit::SetCarPlateNumber(string cPL)
{
	carPlateNumber = cPL;
}

string ParkingPermit::GetCarPlateNumber()
{
	return carPlateNumber;
}

void ParkingPermit::SetCarMake(string cM)
{
	carMake = cM;
}

string ParkingPermit::GetCarMake()const { return carMake; }

void ParkingPermit::SetPermitOption(int a)
{
	permitOption = a;
}

int ParkingPermit::GetPermitOption()
{
	return permitOption;
}