#include "stdafx.h"




int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "rus");

	Check product; // ������ ������ ������
	unsigned int price, weight, amount;

	cout << "������� ����: ";
	cin >> price;

	cout << "������� ���: ";
	cin >> weight;

	cout << "������� ����������: ";
	cin >> amount;
	

	product.setName("\"���������\" ��������"); // ������������� �������� ��������
	product.setPrice(price); // ���� ��������
	product.setWeight(weight);   // ���
	cout << endl;
	product.setSum(amount); // ������� ��.

	product.printProductInfo(); //��� ��������
	product.printBuyInfo(); // ��� �������

	system("pause");
	return 0;
}