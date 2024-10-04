#include <iostream>

using namespace std;

int main()
{
    int n, d, k;
    int m, a;

    cout << "Iveskite kiek gavo balionu: " << endl;
    cin >> n;

    cout << "Iveskite kiek buvo draugu: " << endl;
    cin >> d;

    cout << "Iveskite kiek balionu sprogo: " << endl;
    cin >> k;

    m = (n - k) / d;
    cout << "Draugai gavo po " << m << " balionu" << endl;

    a = (n - k) % d;
    cout << "Andriui teko " << a << " balionu" << endl;

return 0;
}
