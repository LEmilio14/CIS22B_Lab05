#pragma once
#include<iostream>
#include<string>


class Employee {
private:
	std::string employeeName;
	int employeeNumber;
	std::string hireDate;
public:
	//default constructor.
	Employee();

	//parametrized constructor
	Employee(std::string name, int idNumber, std::string date);

	//setters
	void setEmployeeName(std::string);
	void setEmployeeNumber(int);
	void setHireDate(std::string);

	//getters
	std::string getEmployeeName();
	int getEmployeeNumber();
	std::string getHireDate();

	//class exception
	class InvalidEmployeeNumber {};
};
