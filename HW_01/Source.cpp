#include <iostream>
#include <math.h>

using namespace std;

int number;

float a = 0;
float b = 0;
float c = 0;
int d = 0;

float rur = 2.15;
float eur = 0.031;
float usd = 0.037;

int main()
{
	cout << "Please enter number of example\n";
	cout << "1. - A + B =\n";
	cout << "2. - (A + B)/2 =\n";
	cout << "3. - Quotation of UAH in RUR,EUR,USD\n";
	cout << "4. - Shakespeare's Main Question\n";
	cout << "5. - Enter number to calculate the square:\n";
	cout << "6. - Sum of A,B,C and Multiplication of A,B,C\n";
	cout << "7. - Check if number is Odd or Even.\n";
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
		rur= rur*a;
		eur=eur*a;
		usd=usd*a;
		cout << "RUR=" << b << "\nEUR=" << c << "\nUSD=" << d << "\n";
		break;

	case 4:
		cout << "\"To be or not to be\"\n\\Shakespeare\\\n";
		break;

	case 5:
		cout << "Enter number:";
		cin >> a;
		cout << pow(a, 2) << "\n";
		break;

	case 6:
		cout << "Enter A:\n";
		cin >> a;
		cout << "Enter B:\n";
		cin >> b;
		cout << "Enter C:\n";
		cin >> c;
		cout << "A + B + C = " << a + b + c << "\n";
		cout << "A * B * C = " << a * b * c << "\n";
		break;

	case 7:
		cout << "Enter number:\n";
		cin >> d ;

		if ((d % 2) > 0)
		{
			cout << d << " is odd\n";
		}
		else
		{
			cout << d << " is even\n";
		}
		
	}

	system("pause");

	

	return 0;



}

