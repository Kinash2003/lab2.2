#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y,R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = ";  cin >> R;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		A = x * x;
		if (x <= -8 - R)
			B = R;
		else
			if (-8 - R < x && x <= -8 + R)
				B = R + sqrt(R - 8 - x);
			else
				if (-8 + R < x && x <= -4)
					B = R;
				else
					if (-4 < x && x <= 2)
						B = R + ((-1 - R) / 6) * (x + 4);
					else
						B = x - 3;

		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}