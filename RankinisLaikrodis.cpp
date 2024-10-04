#include <iostream>

using namespace std;

void originalusLaikas(int v, int m)
{
    int ov = m / 5; //Kiek valandu buvo anksciau
    int om = (v % 12) * 5; //Kiek minuciu buvo anksciau

    if (ov >= 12) {
        ov -= 12; //Kad valandos nevirsytu 11
    }

    if (m % 5 != 0) {
        om += 5; //Jeigu nesidalins is 5, prideda 5;
        if (om >= 60) {
            om -= 60;
            ov = (ov + 1) % 12;
        }
    }

    cout << "Originalus laikas " << ov << " val. ir " << om << " min." << endl;
}
    int main()
    {
        int v, m;

        cout << "Koks dabartinis laikas? ";
        cin >> v >> m;

        originalusLaikas(v, m);

    return 0;
    }
