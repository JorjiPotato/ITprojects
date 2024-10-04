#include <iostream>

using namespace std;

int main()
{
    int n, k, v;
    int d, m;

    cout << "Iveskite kiek dovanu nupirko: " << endl;
    cin >> n;

    cout << "Iveskite kiek seimu aplanke: " << endl;
    cin >> k;

    cout << "Iveskite kiek geruciu vaiku buvo: " << endl;
    cin >> v;

    d = (n - k) / v;
    cout << "Kiek dovanu gavo " << d << endl;

    m = (n - k) % v;
    cout << "Liko neisdalinta " << m << endl;

return 0;
}
