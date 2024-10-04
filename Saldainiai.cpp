#include <iostream>

using namespace std;

int main()
{
    int n, m, k;
    int d, a;

    cout << "Iveskite kiek mama nuperka saldainiu: " << endl;
    cin >> n;

    cout << "Iveskite kiek leidzia suvalgyti saldainiu: " << endl;
    cin >> m;

    cout << "Iveskite kiek dienu praejo: " << endl;
    cin >> k;

    d = (n - m) * k / m;
    cout << "Saldainiu uzteks " << d << " dienu" << endl;

    a = (n - m) * k % m;
    cout << "Gales pavasinti " << a << " draugu" << endl;

return 0;
}
