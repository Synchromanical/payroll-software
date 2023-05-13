#include <iostream>
#include "Reimbursement.h"

Reimbursement::Reimbursement(){
	budget = 0;
	reimbursementOption = 0;
}

Reimbursement::~Reimbursement(){}

void Reimbursement::SetBudget(double a) { budget = a; }

double Reimbursement::GetBudget() { return budget; }

void Reimbursement::SetReimbursementOption(int a)
{
	reimbursementOption = a;
}

int Reimbursement::GetReimbursmentOption()
{
	return reimbursementOption;
}