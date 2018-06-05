#include "Sales.h"
#include "Payment.h"
#include "WebMoney.h"
#include "BankTransfer.h"
#include "CreditCard.h"
#include "Check.h"
#include <iostream>
#include <string>

using namespace std;



void Sales::InRange()
{
	cout << "������� �������� ����� �������: ";
	double beg(0), end(0);
	cin >> beg >> end;
	for (int i = 0; i < size; i++)
		list[i]->InPayRange(beg, end);
}

void Sales::ShowData()
{
	for (int i = 0; i < size; i++)
	{
		list[i]->PayInfo();
	}
}

void Sales::Resume()
{
	double SUM = Sum("");
	cout << "���������� �������� ����� ������� WebMoney: " << QWM << "\n" << "����� ����� ��������: " << Sum("WebMoney") << "\n" << "���� ��������: " << QWM << "/" << size << "\n";
	cout << "���������� �������� ���������� ���������: " << QBT << "\n" << "����� ����� ��������: " << Sum("BankTransfer") << "\n" << "���� ��������: " << QBT << "/" << size << "%\n";
	cout << "���������� �������� ��������� ������: " << QCC << "\n" << "����� ����� ��������: " << Sum("CreditCard") << "\n" << "���� ��������: " << QCC << "/" << size << "%\n";
	cout << "���������� �������� �����: " << QC << "\n" << "����� ����� ��������: " << Sum("Check") << "\n" << "���� ��������: " << QC << "/" << size << "%\n";
}

double Sales::Sum(std::string type)
{
	double s(0);
	if (type != "")
		for (int i = 0; i < size; i++)
			if (type == list[i]->MyName())
			{
				s += list[i]->Sum();
			}
			else
				for (int i = 0; i < size; i++)
					s += list[i]->Sum();
	return s;
}

Sales::Sales()
{
	QWM = 0;
	QBT = 0;
	QCC = 0;
	QC = 0;
	cout << "������� ���������� ��������: ";
	cin >> size;
	list = new Payment*[size];
	for (int i = 0; i < size; i++)
	{
		int type = 0;
		type = 1 + rand() % 3;
		switch (type)
		{
		case 1:
		{
			list[i] = &WebMoney();
			QWM++;
			break;
		}
		case 2:
		{
			list[i] = &BankTransfer();
			QBT++;
			break;
		}
		case 3:
		{
			list[i] = &CreditCard();
			QCC++;
			break;
		}
		case 4:
		{
			list[i] = &Check();
			QC++;
			break;
		}
		}
	}
	InRange();
	ShowData();
	Resume();
}




Sales::~Sales()
{
}
