#include <iostream>

using namespace std;

int main()
{
    int v, m;
    int k, n, VM, nVal, nMin;

    cout << "Koki laika valandomis ir minutemis rode laikrodis, kai prasidejo pamoka? ";
    cin >> v >> m;

    cout << "Kiek minuciu mokinai skyre kartojimo uzduotims? ";
    cin >> k;
    cout << "Kiek minuciu buvo skirta nauju dalyku aiskinimuisi? ";
    cin >> n;

    VM = m + k + n; //Kiek is viso minuciu

    nVal = v + VM / 60; //Suskaiciuoti nauja laika pridejus minutes padalinus is 60 kad paverstume valandomis
    nMin = VM % 60; //Suskaiciuoti likusias minutes

    cout << "Savarankiskas darbas prasidejo " << nVal << " val. " << nMin << " min." << endl;

return 0;
}
