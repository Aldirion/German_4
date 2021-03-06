#pragma once
#include "Payment.h"
#include <string>

class BankTransfer :
	public Payment
{
	std::string name;

public:
	void InPayRange(double beg, double end);
	void PayInfo();
	double Sum();
	std::string MyName();
	BankTransfer();
	~BankTransfer();
};

