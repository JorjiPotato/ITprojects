#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e;

    cout << "Iveskite pirma skaitmeni: ";
    cin >> a;
    cout << "Iveskite antra skaitmeni: ";
    cin >> b;
    cout << "Iveskite trecia skaitmeni: ";
    cin >> c;
    cout << "Iveskite ketvirta skaitmeni: ";
    cin >> d;
    cout << "Iveskite penkta skaitmeni: ";
    cin >> e;

    //penkiazenklio skaiciaus sudarymas
    int p = a * 10000 + b * 1000 + c * 100 + d * 10 + e;

    cout << "Penkiazenklis skaicius: " << p << endl;

return 0;
}
