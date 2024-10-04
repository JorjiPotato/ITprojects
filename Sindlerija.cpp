#include <iostream>

using namespace std;

int main()
{
    int k, n;
    int a, p;

    cout << "Iveskite kiek gramu norite istirti: " << endl;
    cin >> k;

    cout << "Iveskite kiek akvariume telpa: " << endl;
    cin >> n;

    a = k * 500 / n;
    cout << "Pilni akvariumai " << a << endl;

    p = k * 500 % n;
    cout << "Zuveliu skaicius paskutiniame " << p << endl;

return 0;
}
