#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double a, b;

    cout << "a=";
    cin >> a;
    do
    {
        cout << "b=";
        cin >> b;
        if (b == 0) cout << "" << endl;
    } while (b == 0);
    cout << a << " / " << b << " = " << a / b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    system("pause");
    return 0;
}
