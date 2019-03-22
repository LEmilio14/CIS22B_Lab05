#include"ProductionWorker.h"

ProductionWorker::ProductionWorker() {
	shift = 0.0;
	hourlyPayRate = 0.0;
}

ProductionWorker::ProductionWorker(int shiftType, double payRate) {
	shift = shiftType;
	hourlyPayRate = payRate;
}

void ProductionWorker::setShift(int sh) {
	if (sh != 1 || sh != 2) 
	{
		throw InvalidShift();
	}
	else
	{
		shift = sh;
	}
}
void ProductionWorker::setHourlyPay(double pay) {
	if(pay < 1)
	{
		throw InvalidPayRate();
	}
	else
	{
		hourlyPayRate = pay;
	}
}

int ProductionWorker::getShift() { return shift; }
double ProductionWorker::getHourlyPay() { return hourlyPayRate; }