#include <iostream>

using namespace std;

int main()
{
    int vi, mi;

    cout << "Kada autobusas isvyko is Vilniaus? ";
    cin >> vi >> mi;

    int vp, mp;

    cout << "Kiek laiko autobusas vaziavo is Vilniaus i Panevezi? ";
    cin >> vp >> mp;

    int ms;

    cout << "Kelias minutes autobusas stovejo Panevezyje? ";
    cin >> ms;

    int vr, mr;

    cout << "Kiek laiko autobusas vaziavo is Panevezio i Ryga? ";
    cin >> vr >> mr;

    int viskas = mi + mp + ms + mr; //Kiek is viso minuciu

    int v = vi + vp + vr + viskas / 60;
    int m = viskas % 60;

    v = v % 24;

    cout << "Autobusas i Ryga atvyks: " << v << " val. " << m << " min." << endl;

return 0;
}
