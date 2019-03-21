#include"employee.h"

Employee::Employee() {
	employeeName = "";
	employeeNumber = 0;
	hireDate = "";
}

Employee::Employee(std::string name, int idNumber, std::string date) {
	employeeName = name;
	employeeNumber = idNumber;
	hireDate = date;
}

void Employee::setEmployeeName(std::string str) {
	employeeName = str;
}
void Employee::setEmployeeNumber(int num) {
	if (num < 0 || num > 9999)
	{
		throw InvalidEmployeeNumber();
	}else
	{
		employeeNumber = num;
	}
	
}
void Employee::setHireDate(std::string hDate) {
	hireDate = hDate;
}

std::string Employee::getEmployeeName() { return employeeName; }
int Employee::getEmployeeNumber() { return employeeNumber; }
std::string Employee::getHireDate() { return hireDate; }