#include"Team leader.h"

TeamLeader::TeamLeader() {
	monthlyBonus = 0.0;
	trainingHoursRequired = 0;
	trainingHoursAttended = 0;
}

TeamLeader::TeamLeader(double monBonus, int traRequired, int traAttended) {
	monthlyBonus = monBonus;
	trainingHoursRequired = traRequired;
	trainingHoursAttended = traAttended;
}

void TeamLeader::setMonthlyBonus(double mB) {
	monthlyBonus = mB;
}
void TeamLeader::setTrainingRequired(int tR) {
	trainingHoursRequired = tR;
}	
void TeamLeader::setTrainingAttended(int tA) {
	trainingHoursAttended = tA;
}

double TeamLeader::getMonthlyBonus() { return monthlyBonus; }
int TeamLeader::getTrainingRequired() { return trainingHoursRequired; }
int TeamLeader::getTrainingAttended() { return trainingHoursAttended; }