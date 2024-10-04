#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    int v, m;

    cout << "Iveskite valandas: ";
    cin >> a;
    cout << "Iveskite minutes: ";
    cin >> b;

    cout << "Iveskite praleistas minutes ore: ";
    cin >> c;

    int isviso = a * 60 + b + c; //bendras laikas minutemis

     v = (isviso / 60) % 24; //valandos (0 - 23)
     m = isviso % 60;        // minutes (0 - 59)

    cout << "Nusileidimo laikas " << v << " valandu ir " << m << " minuciu" << endl;

return 0;
}
