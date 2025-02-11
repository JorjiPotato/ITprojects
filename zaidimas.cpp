#include <iostream>

using namespace std;
int main() {
    int x;
    int pirmas, antras, trecias, s;

    cout << "Iveskite trizenkli skaiciu: ";
    cin >> x;

    pirmas = (x / 100 + 2) % 10; //dalina is 100 gauna 7 prideda 2 gauna 9, % 10 patikrina ar yra liekana jei ne tai nieko jei taip tai pirmas skaicius bus liekana
    antras = ((x / 100) + (x % 10)) % 10; //tas pats tik (x % 10) paima paskutini skaitmeni ir ji prideda
    trecias = ((x / 10 % 10) * 2) % 10; //(x / 10 %) paima antra skaitmeni ir tada jis padaugintas is 2

    s = pirmas * 100 + antras * 10 + trecias; //suskaiciuoja nauja trizenkli skaiciu
    cout << s << endl;

    return 0;
}
