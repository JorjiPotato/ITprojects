#include <iostream>

using namespace std;

int main()
{
    int k;
    int G, k300, k200, k100;

    cout << "Kiek kg braskiu nori pasverti Ramune? ";
    cin >> k;

    G = k * 1000; //Pavercia kilogramus i gramus

    k300 = G / 300; //Skaiciuoja kiek kartu 300g telpa i "k" ir t.t.
    G %= 300; //Pavercia "G" liekana (kas lieka dalinant is 300) vietoj 1000, k200 ims 100 nes tai liekana po k300 ir t.t.

    k200 = G / 200;
    G %= 200;

    k100 = G / 100;
    G %= 100;

    cout << "k300 = " << k300 << endl;
    cout << "k200 = " << k200 << endl;
    cout << "k100 = " << k100 << endl;

return 0;
}
