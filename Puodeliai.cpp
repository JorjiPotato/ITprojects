#include <iostream>

using namespace std;

int main()
{
    int p, m;
    int k, n;

    cout << "Keli puodeliai telpa i dezute? ";
    cin >> p;
    cout << "Kelis puodelius reikia supakuoti? ";
    cin >> m;

    k = m / p;
    cout << "Bus pilnos " << k << " dezutes" << endl;

    n = m % p;
    cout << "Liks nesupakuoti " << n << " puodeliai" << endl;

return 0;
}
