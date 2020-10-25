#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k, N, i;
	double P;
	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;
	
	P = 0;
	i = N;
	while (i <= 16)
	{
		P *= i*N/(pow(i, 2)+pow(N, 2));
		i++;
	}
	cout << P << endl;
	P = 0;
	i = N;
	do {
		P *= i *N / (pow(i, 2) + pow(N, 2));
		i++;
	} while (i <= 16);
	cout << P << endl;
	P = 0;
	for (i = N; i <= 16; i++)
	{
		P *= i * N/ (pow(i, 2) + pow(N, 2));
	}
	cout << P << endl;
	P = 0;
	for (i = 16; i >= N; i--)
	{
		P *= i * N/ (pow(i, 2) + pow(N, 2));
	}
	cout << P << endl;
		return 0;
}
	
	
	

	

	
	
	
