#pragma once
#include<iostream>
#include<string>
#include"employee.h"


class ShiftSupervisor : public Employee{
private:
	double annualSalary;
	double annualBonus;
public:
	//default constructor.
	ShiftSupervisor();

	//parametrized constructor
	ShiftSupervisor(double salary, double bonus);

	//setters
	void setAnnualSalary(double);
	void setAnnualBonus(double);
	//getters
	double getAnnualSalary();
	double getAnnualBonus();
};