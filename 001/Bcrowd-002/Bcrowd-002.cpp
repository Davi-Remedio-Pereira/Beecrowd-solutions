
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double pi = 3.14159;
    double r;
    cin >> r;
    cout << fixed << setprecision(4);
    cout << "A=" << pi * (r * r) << endl;
    return 0;
}
