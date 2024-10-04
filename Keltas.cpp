#include <iostream>

using namespace std;

int main()
{
    int a, m;
    int k, b;

    cout << "Keli automobiliai laukia kelto? ";
    cin >> a;
    cout << "Keli automobiliai telpa kelte? ";
    cin >> m;

    k = a / m * m;
    cout << "Bus perkelta " << k << " automobiliu" << endl;

    b = a % m;
    cout << "Liks neperkelti " << b << " automobiliai" << endl;

return 0;
}
