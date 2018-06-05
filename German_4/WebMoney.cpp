#include "WebMoney.h"
#include <iostream>

using namespace std;


void WebMoney::InPayRange(double beg, double end)
{
	if (sum > beg && sum < end)
		PayInfo();
}

void WebMoney::PayInfo()
{
	cout << name << "\t" << sum << "\t" << date << "\n";
}

double WebMoney::Sum()
{
	return sum;
}

std::string WebMoney::MyName()
{
	return std::string("WebMoney");
}

WebMoney::WebMoney()
{
	name = "WebMoney";
	sum = rand() % 100000;
}


WebMoney::~WebMoney()
{
}
