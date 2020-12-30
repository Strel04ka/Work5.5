#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double m, n;
	cout << "m ="; cin >> m;
	cout << "n ="; cin >> n;

	Q(m, n);
}
void Q(const double& m, const double& n)
{
	if (m <= n)
		Q = Q(n, m);
	if (m = n)
		Q = 1 - Q(m, m - 1);
	if (!(m <= n)) && (!(m = n))
		Q = Q(m, n - 1) + Q(m - n, n);
	cout << "Q ="; cin >> Q;
	cout << endl;
}

