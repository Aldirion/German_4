#include "CreditCard.h"
#include <iostream>

using namespace std;


void CreditCard::InPayRange(double beg, double end)
{
	if (sum > beg && sum < end)
		PayInfo();
}

void CreditCard::PayInfo()
{
	cout << name << "\t" << sum << "\t" << date << "\n";
}

double CreditCard::Sum()
{
	return sum;
}

std::string CreditCard::MyName()
{
	return std::string("CreditCard");
}

CreditCard::CreditCard()
{
	name = "CreditCard";
	sum = rand() % 100000;
}


CreditCard::~CreditCard()
{
}
