#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Iveskite trizenkli skaiciu: ";
    cin >> x;

    if (x < 100 || x > 999) {
        cout << "Error! Ne trizenklis skaicius." << endl;
        return 1;
    }

    int pirmas = x / 100; //Pirmas skaitmuo
    int antras = (x / 10) % 10; //Antras skaitmuo
    int paskutinis = x % 10; //Paskutinis skaitmuo

    int naujas_pirmas = pirmas + 2;
    if (naujas_pirmas >= 10) {
        naujas_pirmas = naujas_pirmas % 10; //Paima antraji skaitmeni jeigu dvizenklis
    }

    int naujas_antras = antras + paskutinis;
    if (naujas_antras >= 10) {
        naujas_antras = naujas_antras % 10; //Paima antraji skaitmeni jeigu dvizenklis
    }

    int naujas_paskutinis = antras * 2;
    if (naujas_paskutinis >= 10) {
        naujas_paskutinis = naujas_paskutinis % 10; //Paima antraji skaitmeni jeigu dvizenklis
    }

    int naujas_trizenklis = naujas_pirmas * 100 + naujas_antras * 10 + naujas_paskutinis;

    cout << "Naujas trizenklis skaicius: " << naujas_trizenklis << endl;

return 0;
}
