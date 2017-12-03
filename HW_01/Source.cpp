#include <iostream>
#include <math.h>

using namespace std;

float a = 0;
float b = 0;
float c = 0;
float d = 0;

float rur = 2.15;
float eur = 0.031;
float usd = 0.037;

int main()
{
	cout << "Enter A:\n";
	cin >> a;
	cout << "Enter B:\n";
	cin >> b;
	c = a + b;
	cout << "Sum of A + B = " << c<<"\n";

	cout << "Enter A:\n";
	cin >> a;
	cout << "Enter B:\n";
	cin >> b;
	c = (a + b) / 2;
	cout << "(A + B)/2 = " << c<<"\n";

	cout << "Enter Amount of Grivna:\n";
	cin >> a;
	b = a*rur;
	c = a*eur;
	d = a*usd;
	cout << "RUR=" << b << "\nEUR=" << c << "\nUSD=" << d<<"\n";

	cout << "Enter Amount of Grivna:\n";
	cin >> a;
	b = a*rur;
	c = a*eur;
	d = a*usd;
	cout << "RUR=" << b << "\nEUR=" << c << "\nUSD=" << d << "\n";

	cin >> a;

	return 0;



}

