#include <iostream>
#include <iomanip>
using namespace std;

int num, h;
float salH;


int main()
{
	cin >> num;
	cin >> h;
	cin >> salH;
	cout << fixed << setprecision(2);
	cout << "NUMBER = " << num << endl << "SALARY = U$ " << (h * salH) << endl;
}