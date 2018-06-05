#include "Payment.h"
#include "BankTransfer.h"
#include "Check.h"
#include "CreditCard.h"
#include "WebMoney.h"



Payment::Payment()
{
	date = "1.1.1970";
	sum = 1000;
}

Payment::Payment(std::string _date, double _sum):date(_date), sum(_sum)
{
}


Payment::~Payment()
{
}
