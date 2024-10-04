#include <iostream>

using namespace std;

int main()
{
    int v, m;
    int k, n;

    cout << "Koki laika valandomis ir minutemis rode laikrodis, kai prasidejo pamoka? ";
    cin >> v >> m;

    cout << "Kiek minuciu mokinai skyre kartojimo uzduotims? ";
    cin >> k;
    cout << "Kiek minuciu buvo skirta nauju dalyku aiskinimuisi? ";
    cin >> n;

    int viskas = m + k + n; //Kiek is viso minuciu

    int nVal = v + viskas / 60;
    int nMin = viskas % 60;

    nVal = nVal % 24;

    cout << "Savarankiskas darbas prasidejo " << nVal << " val. " << nMin << " min." << endl;

return 0;
}
