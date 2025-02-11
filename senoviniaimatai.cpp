#include <iostream>

using namespace std;

int main() {
    int m1, v1, s1, m2, v2, s2;
    int sum, skir, Vs1, Vs2, sm, sv, ss, skm, skv, sks;

    cin >> m1 >> v1 >> s1 >> m2 >> v2 >> s2;

    //Paverciam sieksniais
    Vs1 = m1 * 3500 + v1 * 500 + s1;
    Vs2 = m2 * 3500 + v2 * 500 + s2;

    sum = Vs1 + Vs2; //Suskaiciuojam suma abieju ilgiu
    skir = Vs1 - Vs2; //Suskaiciuojam skirtuma tarp abieju ilgiu

    sm = sum / 3500; //Skaiciuojam myliu suma
    sum %= 3500; //Pavercia "sum" liekana po dalybu
    sv = sum / 500; //Skaiciuojam varstu suma
    ss = sum % 500; //Skaiciuojam sieksniu suma (liekana po sv dalybu)

    skm = skir / 3500; //Skaiciuojam myliu skirtuma
    skir %= 3500; //Pavercia "skir" liekana po dalybu
    skv = skir / 500; //Skaiciuojam varstu skirtuma
    sks = skir % 500; // skaiciuojam sieksniu skirtuma (liekana po sks dalybu)

    cout << sm << " " << sv << " " << ss << endl;
    cout << skm << " " << skv << " " << sks << endl;

    return 0;
}
