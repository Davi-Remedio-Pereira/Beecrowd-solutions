#include <iostream>
#include <iomanip>
using namespace std;
double n1, n2, media;
int main()
{
	cin >> n1;
	cin >> n2;
	n1 = n1 * 3.5;
	n2 = n2 * 7.5;
	media = (n1 + n2) / 11;
	cout << fixed << setprecision(5);
	cout << "MEDIA = " << media << endl;
}
