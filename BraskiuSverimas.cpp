#include <iostream>

using namespace std;

int main()
{
    int k;

    cout << "Kiek kg braskiu nori pasverti Ramune? ";
    cin >> k;

    int viskas = k * 1000;

    int k300 = viskas / 300;
    viskas %= 300;

    int k200 = viskas / 200;
    viskas %= 200;

    int k100 = viskas / 100;
    viskas %= 100;

    cout << "k300 = " << k300 << endl;
    cout << "k200 = " << k200 << endl;
    cout << "k100 = " << k100 << endl;

return 0;
}
