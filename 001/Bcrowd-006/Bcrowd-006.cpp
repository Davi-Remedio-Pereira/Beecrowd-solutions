#include <iostream>
#include <iomanip>
using namespace std;
double a, b, c;
int main()
{
	cin >> a;
	cin >> b;
	cin >> c;
	cout << fixed << setprecision(1);
	cout << "MEDIA = " << (((a * 2) + (b * 3) + (c * 5)) / 10) << endl;
}
