#include <iostream>

using namespace std;

int main()
{
    int vi, mi, vp, mp, vr, mr, ms;
    int VM, v, m;

    cout << "Kada autobusas isvyko is Vilniaus? ";
    cin >> vi >> mi;

    cout << "Kiek laiko autobusas vaziavo is Vilniaus i Panevezi? ";
    cin >> vp >> mp;

    cout << "Kelias minutes autobusas stovejo Panevezyje? ";
    cin >> ms;

    cout << "Kiek laiko autobusas vaziavo is Panevezio i Ryga? ";
    cin >> vr >> mr;

    VM = mi + mp + ms + mr; //Kiek is viso minuciu

    v = vi + vp + vr + VM / 60;
    m = VM % 60;

    v = v % 24;

    cout << "Autobusas i Ryga atvyks: " << v << " val. " << m << " min." << endl;

return 0;
}
