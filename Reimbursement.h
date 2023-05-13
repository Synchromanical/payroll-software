#ifndef REIMBURSEMENT_H_
#define REIMBURSEMENT_H_

using namespace std;

class Reimbursement
{
private:
	double budget;
	int reimbursementOption;

public:
	Reimbursement();
	~Reimbursement();

	void SetBudget(double);
	double GetBudget();
	void SetReimbursementOption(int);
	int GetReimbursmentOption();
	
};

#endif
