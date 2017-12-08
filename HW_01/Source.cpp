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
	cout << "8. - Digits in number. Sum and Multiplication of digits\n";
	cout << "9. - Inch 2 cm Converter\n";
	cout << "10. - Millionaire\n";
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
		cin >> float (a);
		cout << "Enter B:\n";
		cin >> float (b);
		cout << "Enter C:\n";
		cin >> float (c);
		cout << "A + B + C = " << a + b + c << "\n";
		cout << "A * B * C = " << a * b * c << "\n";
		break;

	case 7:
		cout << "Enter number:\n";
		cin >> a ;

		if ((int(a) % 2) > 0)
		{
			cout << a << " is odd\n";
		}
		else
		{
			cout << a << " is even\n";
		}

	case 8:
		cout << "Enter number 1-99:\n";
		cin >> a;
		if (a < 10){
			cout << a << "Number of digits: 1";
		}
		else {
			if (a <= 99) {
				b = int(a) / 10;
				c = a - b * 10;
				cout << "Digits are: " << b << " and " << c << "\nSum = " << b + c << "\nMultiplication = " << b*c << "\n";
			}
			else {
				cout << "Wrong number [1..99]\n";
			}
		}
	
	case 9:
		cout << "Inch <----> cm Converter. Choose source dimension:\n1. - Inch.\n2. - cm.\n";
		cin >> a;
		switch (int(a)) {
		case 1:
			cout << "Enter lenght in Inches:";
			cin >> b;
			cout << "Lenght equal: " << b*2.54 << " cm.\n";
			break;
		case 2:
			cout << "Enter lenght in cm:";
			cin >> b;
			cout << "Lenght equal: " << b / 2.54 << " Inch.\n";
			break;
		}
	case 10:
	cout << "The Ultimate Question of Life, the Universe, and Everything?\n";
	cout << "A - Love\t\t\t C - 42\nB - 3,14\t\t\t D - No answer\n";
	char f;
	cin >> f;
	if ((f == 'C') || (f == 'c')) {
	/*cin >> a;
	a = char(a);
	cout << a;
	if ((a == 'C') || (a == 'c')) {*/
		cout << "You are correct!!! Congratilations!!!\n";
			}
	else {
		cout << "Unfortunately you've lost =(\n";
	}

	}

	system("pause");

	

	return 0;



}

