#include"supervisor.h"

ShiftSupervisor::ShiftSupervisor() {
	annualSalary = 0;
	annualBonus = 0;
}

ShiftSupervisor::ShiftSupervisor(double salary, double bonus) {
	annualSalary = salary;
	annualBonus = bonus;
}

void ShiftSupervisor::setAnnualSalary(double aS) {
	annualSalary = aS;
}
void ShiftSupervisor::setAnnualBonus(double aB) {
	annualBonus = aB;
}

double ShiftSupervisor::getAnnualSalary() { return annualSalary; }
double ShiftSupervisor::getAnnualBonus() { return annualBonus; }