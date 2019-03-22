#pragma once
#include<iostream>
#include<string>
#include "Employee.h"

class ProductionWorker : public Employee {
private:
	int shift;
	double hourlyPayRate;
public:
	//default constructor.
	ProductionWorker();

	//parametrized constructor
	ProductionWorker(int shiftType, double payRate);

	//setters
	void setShift(int);
	void setHourlyPay(double);
	//getters
	int getShift();
	double getHourlyPay();

	//exception class
	class InvalidShift {}; 
	class InvalidPayRate {};
};