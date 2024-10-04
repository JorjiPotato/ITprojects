#include <iostream>

using namespace std;

int main()
{
    int k;
    cout << "Iveskite keturzenkli skaiciu: ";
    cin >> k;

    //Tikriname ar skaicius yra keturzenklis
    if (k < 1000 || k > 9999) {
        cout << "Error! Ne keturzenklis skaicius!" << endl;
        return 1;
    }

    int s = 0;

    //Skaitmenu sumos skaiciavimas
    while (k > 0) {
        s += k % 10; //Prideda paskutini skaitmeni
        k /= 10;        //Pasalina paskutini skaitmeni
    }

    cout << "Skaitmenu suma: " << s << endl;

return 0;
}
