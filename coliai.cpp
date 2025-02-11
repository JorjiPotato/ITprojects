#include <iostream>

using namespace std;

int main() {
    int j1, p1, c1, j2, p2, c2;
    int sum, skir, Vc1, Vc2, sj, sp, sc, skj, skp, skc;

    cin >> j1 >> p1 >> c1 >> j2 >> p2 >> c2;

    //Paverciam coliais
    Vc1 = j1 * 36 + p1 * 12 + c1;
    Vc2 = j2 * 36 + p2 * 12 + c2;

    sum = Vc1 + Vc2; //Suskaiciuojam abieju ilgiu suma
    skir = Vc1 - Vc2; //Suskaiciuojam skirtuma tarp abieju ilgiu

    sj = sum / 36;
    sum %= 36; //Pavercia "sum" liekana po dalybu
    sp = sum / 12; //Skaiciuoja pedas
    sc = sum % 12; //Skaiciuoja colius (liekana po pedu)

    skj = skir / 36;
    skir %= 36; //Pavercia "skir" liekana po dalybu
    skp = skir / 12; //Skaiciuoja pedas
    skc = skir % 12; //Skaiciuoja colius (liekana po pedu)

    cout << sj << " " << sp << " " << sc << endl;
    cout << skj << " " << skp << " " << skc << endl;

    return 0;
}
