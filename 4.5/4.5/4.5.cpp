#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y,a,b,R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "a = "; cin >> a;
		cout << "b = "; cin >> b;
		cout << "R = "; cin >> R;

		if (((a * b) - (pow(x, 2) + pow(y, 2)) <= R * R) ||
			((pow(x, 2) + pow(y, 2)) <= (x > 0 && x < a) && (y > 0 && y < b)))

			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

	for (int i = 0; i < 10; i++)
	{
		x = 6. * rand() / RAND_MAX - 3;
		y = 6. * rand() / RAND_MAX - 3;
		
		if (((a * b) - (pow(x, 2) + pow(y, 2)) <= R * R) ||
			((pow(x, 2) + pow(y, 2)) <= (x > 0 && x < a) && (y > 0 && y < b)))

				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}