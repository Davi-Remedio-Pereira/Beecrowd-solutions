#include <iostream>
#include <iomanip>
using namespace std;
char nome[50];
double sal, vendas;
int main()
{
	cin >> nome;
	cin >> sal;
	cin >> vendas;
	cout << fixed << setprecision(2);
	cout << "TOTAL = R$ " << sal + (vendas * 0.15) << endl;
}