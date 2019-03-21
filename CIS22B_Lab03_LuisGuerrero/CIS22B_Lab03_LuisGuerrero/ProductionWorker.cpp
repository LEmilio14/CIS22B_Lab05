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
	shift = sh;
}
void ProductionWorker::setHourlyPay(double pay) {
	hourlyPayRate = pay;
}

int ProductionWorker::getShift() { return shift; }
double ProductionWorker::getHourlyPay() { return hourlyPayRate; }