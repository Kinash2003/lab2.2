﻿#include<iostream>
#include <cmath>
using namespace std;
int main() {
	double P, S;
	int n, i,k;
	P = 1;
	n = 1;
	
	while (n <= 10)

	{
		S = 0;
		
		k = 1;
		while (k <= n)

		{
			P *=sin(k+n);
			k++;

		}
		S += sqrt(1+cos(n)*cos(n)+P);
		n++;

	}
	cout << S << endl;
	P = 1;
	n = 1;
	
	do
	{
		S = 0;
		k = 1;
		do
		{
			P*= sin(k + n);
			k++;
		} while (k <= n);
		S+= sqrt(1 + cos(n) * cos(n) + P);
		n++;
	} while (n <= 10);
	cout << S << endl;
	P = 1;
	for (n = 1; n <= 10; n++)

	{
		S = 0;
		for (k = 1; k <= n; k++)

		{
			P*= sin(k + n);

		}
		S+= sqrt(1 + cos(n) * cos(n) + P);

	}
	cout << S << endl;
	P = 1;
	for (n = 1; n >= 10; n--)
		

	{
		S = 0;
		for (k = 1; k >= n; k--)
			

		{
			P*= sin(k + n);
		
		}
		S += sqrt(1 + cos(n) * cos(n) + P);
	}
	cout << S << endl;
	return 0;
}

