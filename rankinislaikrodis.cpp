#include <iostream>

using namespace std;

int main() {
    int v, m;
    cin >> v >> m;

    //Atstatom valandas 90 lapsniu sukimas per laikrodi yra 3 valandos kadangi i desine bus -3
    v = (v - 3 + 12) % 12;  //+12 kad neitu i -

    //Atstatom minutes pasukus 90 lapsniu gaunasi 15 nes 30 lapsniu yra 5 minutes
    m = (m - 15 + 60) % 60;  //+60 kad neitu i -
    cout << v << " " << m << endl;

    return 0;
}
