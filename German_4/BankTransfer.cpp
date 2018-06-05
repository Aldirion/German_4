#include "BankTransfer.h"
#include <iostream>
using namespace std;


void BankTransfer::InPayRange(double beg, double end)
{
	if (sum > beg && sum < end)
		PayInfo();
}

void BankTransfer::PayInfo()
{
	cout << name << "\t" << sum << "\t" << date << "\n";
}

double BankTransfer::Sum()
{
	return sum;
}


std::string BankTransfer::MyName()
{
	return std::string("BankTransfer");
}

BankTransfer::BankTransfer()
{
	name = "BankTransfer";
	sum = rand() % 100000;
}


BankTransfer::~BankTransfer()
{
}
