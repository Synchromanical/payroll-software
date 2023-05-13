#include <iostream>
#include "Fulltime.h"

FullTime::FullTime() {
	timeOff = 0;
	timeOffOption = 0;
}

FullTime::~FullTime() {}

void FullTime::SetTimeOff(double tf)
{
	timeOff = tf;
}

double FullTime::GetTimeOff()const
{
	return timeOff;
}

void FullTime::SetTimeOffOption(int a)
{
	timeOffOption = a;
}

int FullTime::GetTimeOffOption()
{
	return timeOffOption;
}

