#include <iostream>

using namespace std;

int main()
{
    int n, m, d;
    int k, a;

    cout << "Iveskite kiek pririnko obuoliu: " << endl;
    cin >> n;

    cout << "Iveskite kiek nuveza deziu obuoliu: " << endl;
    cin >> m;

    cout << "Iveskite kiek dienu vaziavo i turgu: " << endl;
    cin >> d;

    k = (n * d - m * d) / m;
    cout << "Pilnos didesnes dezes " << k << endl;

    a = (n * d - m * d) % m;
    cout << "Nesupakuotos mazesnes dezes " << a << endl;

return 0;
}
