#pragma once
#include<iostream>
#include<string>
#include"ProductionWorker.h"


class TeamLeader : public ProductionWorker {
private:
	double monthlyBonus;
	int trainingHoursRequired;
	int trainingHoursAttended;
public:
	//default constructor.
	TeamLeader();

	//parametrized constructor
	TeamLeader(double monBonus, int traRequired, int traAttended);

	//setters.
	void setMonthlyBonus(double);
	void setTrainingRequired(int);
	void setTrainingAttended(int);
	//getters.
	double getMonthlyBonus();
	int getTrainingRequired();
	int getTrainingAttended();
};