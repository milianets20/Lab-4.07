#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double xp, xk, x, dx, acos, a = 0, R=0, S = 0;
	int n = 1;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "acos = "; cin >> acos;
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "acos(x)" << " |"
		<< setw(7) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		n = 1; // вираз залежить від умови завдання варіанту
		a = 0; // вираз залежить від умови завдання варіанту
		S = a;
		do {
			n++;
			R = (((2*n-1)*pow(x,2*n+1))/((2*n-5)*(pow(x,2*n-1))))*((4*pow(n,2)-6*n+2)/(4*pow(n,2)+2*n)); // вираз залежить від умови завдання варіанту
			a *= R;
			S += a;
		} while (abs(a) >= acos);
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << acos << " |"
			<< setw(10) << setprecision(5) << S << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "-------------------------------------------------" << endl;
	return 0;
}
