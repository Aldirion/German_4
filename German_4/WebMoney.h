#pragma once
#include <string>

#include "Payment.h"
class WebMoney :
	public Payment
{
private:
	std::string name;
public:
	void InPayRange(double beg, double end);
	void PayInfo();
	double Sum();
	std::string MyName();
	WebMoney();
	~WebMoney();
};

