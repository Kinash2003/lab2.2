// Lab_03_4.cpp
// < Кінаш Роман >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 10
#include <iostream>
using namespace std;
int main()
{
	double а; // вхідний аргумент
	double b; // вхідний параметр
	double R;
	double x;
	double y;
	
	cout << "input b = "; cin >> b;
	cout << "input а = "; cin >> а;
	cout << "input R = "; cin >> R;
	cout << "input x = "; cin >> x;
	cout << "input y = "; cin >> y;
	// розгалуження в повній форм
	if (((а*b)-(pow(x,2)+pow(y,2))<= R * R )||
		((pow(x, 2) + pow(y, 2)) <= (x > 0 && x < а) && (y > 0 && y < b)))

		cout << "yes" << endl;
	else
		
		cout << "no" << endl;
	cin.get();
	return 0;
}