#pragma once
#include "stdafx.h"

using namespace std;
class Check : public Buy // �������� ������������
{
public:
	void printProductInfo()
	{
		cout << "�����: " << getName() << endl;
		cout << "����:  " << getPrice() << " ���\n";
		cout << "���:   " << getWeight() << " ��\n\n";
	}

	void printBuyInfo()
	{
		cout << "������ �������: " << getSum() << " ��\n";
		cout << "�� �����:       " << getSumPrice() << " ���\n";
		cout << "����� ���:      " << getSumWeight() << " ��\n\n";
	}

};
