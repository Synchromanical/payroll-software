#ifndef FullTime_H_
#define FullTime_H_

using namespace std;

class FullTime 
{
private:
	double timeOff;
	int timeOffOption;

public:
	FullTime();
	~FullTime();
	void SetTimeOff(double tf);
	double GetTimeOff()const;
	void SetTimeOffOption(int);
	int GetTimeOffOption();
	
};
#endif
