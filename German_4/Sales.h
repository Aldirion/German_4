#pragma once
#include "Payment.h"
class Sales
{
	Payment ** list;
	double QWM;	//quantity of WebMoney payments
	double QBT;	//quantity of BankTransfer payments
	double QCC;	//quantity of CreditCard payments
	double QC;		//quantity of Check payments
	int size;	//quantity of all payments
public:
	void InRange();
	void ShowData();
	void Resume();
	double Sum(std::string type);
	Sales();
	~Sales();
};

