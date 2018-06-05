#include "Check.h"
#include <iostream>
using namespace std;


void Check::InPayRange(double beg, double end)
{
	if (sum > beg && sum < end)
		PayInfo();
}

void Check::PayInfo()
{
	cout << name << "\t" << sum << "\t" << date << "\n";
}

double Check::Sum()
{
	return sum;
}

std::string Check::MyName()
{
	return std::string("Check");
}

Check::Check()
{
	name = "Check";
	sum = rand() % 100000;
}


Check::~Check()
{
}
