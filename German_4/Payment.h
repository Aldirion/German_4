#pragma once
#include <iostream>
#include <string>

class Payment
{
protected:
	std::string date;
	double sum;
public:
	Payment();
	virtual void InPayRange(double beg, double end) = 0;
	virtual double Sum() = 0;
	virtual std::string MyName() = 0;
	virtual void PayInfo() = 0;
	Payment(std::string, double);
	~Payment();
};

