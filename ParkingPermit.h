#ifndef PARKINGPERMIT_H_
#define PARKINGPERMIT_H_
#include <string>

using namespace std;

class ParkingPermit 
{
private:
	double parkingPrice;
	int permitOption;
	string carPlateNumber;
	string carMake;

public:
	ParkingPermit();
	~ParkingPermit();
	double GetParkingPrice();
	void SetCarPlateNumber(string cPL);
	string GetCarPlateNumber();
	void SetCarMake(string cM);
	string GetCarMake()const;
	void SetPermitOption(int);
	int GetPermitOption();

};

#endif

