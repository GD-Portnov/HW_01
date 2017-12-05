#include <iostream>
#include <math.h>

using namespace std;

int number;

float a = 0;
float b = 0;
float c = 0;
float d = 0;

float rur = 2.15;
float eur = 0.031;
float usd = 0.037;

int main()
{
	cout << "Please enter number of example\n";
	cout << "1. - A + B =\n";
	cout << "2. - (A + B)/2 =\n";
	cout << "3. - Quotation of UAH in RUR,EUR,USD\n";
	cout << "4. -\n";
	cin >> number;

	switch (number)
	{
	case 1:
		cout << "Enter A:\n";
		cin >> a;
		cout << "Enter B:\n";
		cin >> b;
		c = a + b;
		cout << "Sum of A + B = " << c << "\n";
		break;
	case 2:
		cout << "Enter A:\n";
		cin >> a;
		cout << "Enter B:\n";
		cin >> b;
		c = (a + b) / 2;
		cout << "(A + B)/2 = " << c << "\n";
		break;
	case 3:
		cout << "Enter Amount of Grivna:\n";
		cin >> a;
		b = a*rur;
		c = a*eur;
		d = a*usd;
		cout << "RUR=" << b << "\nEUR=" << c << "\nUSD=" << d << "\n";
		break;
	}

	

	cin >> a;

	return 0;



}

