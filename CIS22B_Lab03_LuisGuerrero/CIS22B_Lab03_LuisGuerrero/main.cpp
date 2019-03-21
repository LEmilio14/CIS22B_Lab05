#include<iostream>
#include<string>
#include"employee.h"
#include"ProductionWorker.h"
#include"supervisor.h"
#include"Team leader.h"

using namespace std;

int main() {
	string empName, suprName, leaderName, empDate, suprDate, leaderDate;
	int empNumber, suprNum, leaderNum;
	int empShift, leaderShift, answer;
	double empPayRate, leaderPayRate, annualSalary, annualBonus;
	double monBonus;
	int reHours, attHours;

		//employee
		cout << "Please enter the employee's information" << endl;
		cout << "Please enter employee's name: ";
		cin >> empName;
		cout << endl;
		cout << "Please enter empoyee's number: ";
		cin >> empNumber;
		cout << endl;
		cout << "Please enter the date hired: ";
		cin >> empDate;
		cout << endl;
		cout << "Please enter employee's shift type " << endl;
		cout << "\t[1]Day Shift [2]Night Shift: ";
		cin >> empShift;
		while (empShift != 1 && empShift != 2) {
			cout << endl;
			cout << "ERROR: Enter a valid shift..." << endl;
			cout << "\t[1]Day Shift [2]Night Shift: ";
			cin >> empShift;
		}
		cout << endl;
		cout << "Please enter the employee's pay rate: ";
		cin >> empPayRate;
		cout << endl << endl;
	

		//supervisor
		cout << "Please enter supervisor information:" << endl;
		cout << "Please enter supervisor's name: ";
		cin >> suprName;
		cout << endl;
		cout << "Please enter supervisor's number: ";
		cin >> suprNum;
		cout << endl;
		cout << "Please enter the date hired: ";
		cin >> suprDate;
		cout << endl;
		cout << "Please enter supervisor's annual salary: ";
		cin >> annualSalary;
		cout << endl;
		cout << "Please enter supervisor's annual bonus: ";
		cin >> annualBonus;
		cout << endl << endl;

		//team leader
		cout << "Now enter team leader information:" << endl;
		cout << "Please enter team leader's name: ";
		cin >> leaderName;
		cout << endl;
		cout << "Please enter team leader's number: ";
		cin >> leaderNum;
		cout << endl;
		cout << "Please enter the date hired: ";
		cin >> leaderDate;
		cout << endl;
		cout << "Please enter team leader's shift type " << endl;
		cout << "\t[1]Day Shift [2]Night Shift: ";
		cin >> leaderShift;
		while (leaderShift != 1 && leaderShift != 2) {
			cout << endl;
			cout << "ERROR: Enter a valid shift..." << endl;
			cout << "\t[1]Day Shift [2]Night Shift: ";
			cin >> leaderShift;
		}
		cout << endl;
		cout << "Please enter the team leader's pay rate: ";
		cin >> leaderPayRate;
		cout << endl;
		cout << "Please enter team leader monthly bonus: ";
		cin >> monBonus;
		cout << endl;
		cout << "Please enter required hours for team leader: ";
		cin >> reHours;
		cout << endl;
		cout << "Please enter hours attended by team leader: ";
		cin >> attHours;
		cout << endl << endl;

	//Create an employee object
	ProductionWorker emp1(empShift, empPayRate);
	ShiftSupervisor supervisor(annualSalary, annualBonus);
	TeamLeader leader(monBonus, reHours, attHours);

	emp1.setEmployeeName(empName);
	emp1.setEmployeeNumber(empNumber);
	emp1.setHireDate(empDate);

	supervisor.setEmployeeName(suprName);
	supervisor.setEmployeeNumber(suprNum);
	supervisor.setHireDate(suprDate);

	leader.setEmployeeName(leaderName);
	leader.setEmployeeNumber(leaderNum);
	leader.setHireDate(leaderDate);
	leader.setShift(leaderShift);
	leader.setHourlyPay(leaderPayRate);

	cout << "Would you like to see the employees information: [1]Yes	[2]No: ";
	cin >> answer;
	cout << endl;
	
	if (answer == 1) {
		cout << "=================== Employee Information ===============" << endl << endl;
		cout << "Employee's Name: " << emp1.getEmployeeName() << endl << endl;
		cout << "Employee's Number: " << emp1.getEmployeeNumber() << endl << endl;
		cout << "Employee's Hired Date: " << emp1.getHireDate() << endl << endl;
		cout << "Employee's Shift: " << emp1.getShift() << endl << endl;
		cout << "Employee's Hourly Pay Rate: " << emp1.getHourlyPay() << endl << endl;

		cout << "=================== Supervisor Information ===============" << endl << endl;
		cout << "Supervisor Name: " << supervisor.getEmployeeName() << endl << endl;
		cout << "Supervisor Number: " << supervisor.getEmployeeNumber() << endl << endl;
		cout << "Supervisor Hired Date: " << supervisor.getHireDate() << endl << endl;
		cout << "Supervisor Annual Salary: " << supervisor.getAnnualSalary() << endl << endl;
		cout << "Supervisor Annual Bonus: " << supervisor.getAnnualBonus() << endl << endl;

		cout << "=================== Team Leader Information ===============" << endl << endl;
		cout << "Team leader name: " << leader.getEmployeeName() << endl << endl;
		cout << "Team leader Number: " << leader.getEmployeeNumber() << endl << endl;
		cout << "Team leader Hired Date: " << leader.getHireDate() << endl << endl;
		cout << "Team leader Shift: " << leader.getShift() << endl << endl;
		cout << "Team leader Hourly Pay Rate: " << leader.getHourlyPay() << endl << endl;
		cout << "Monthly Bonus: " << leader.getMonthlyBonus() << endl << endl;
		cout << "Hours required: " << leader.getTrainingRequired() << endl << endl;
		cout << "Hours Attended: " << leader.getTrainingAttended() << endl << endl;
		
	}
	else
		cout << "The employee's information has been saved." << endl;

	system("pause");
	return 0;
}