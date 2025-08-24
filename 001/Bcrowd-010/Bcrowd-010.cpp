#include <iostream>
#include <iomanip>
using namespace std;

struct peca
{
	int cod, qtd;
	double valor;
} peca1, peca2;
int main()
{
	cin >> peca1.cod;
	cin >> peca1.qtd;
	cin >> peca1.valor;
	cin >> peca2.cod;
	cin >> peca2.qtd;
	cin >> peca2.valor;
	cout << fixed << setprecision(2);
	cout << "VALOR A PAGAR: R$ " << ((peca1.qtd * peca1.valor) + (peca2.qtd * peca2.valor)) << endl;
}
