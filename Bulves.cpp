#include <iostream>

using namespace std;

int main()
{
    int n, m, k;
    int d, a;

    cout << "Iveskite kiek maisu prikase: " << endl;
    cin >> n;

    cout << "Iveskite kiek parveza: " << endl;
    cin >> m;

    cout << "Iveskite kiek dienu praejo: " << endl;
    cin >> k;

    d = (n - m) * k / m;
    cout << "Per kelias dienas parves " << d << endl;

    a = (n - m) * k % m;
    cout << "Keliems talkininkams " << a << endl;

return 0;
}
