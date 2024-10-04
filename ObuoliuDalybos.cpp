#include <iostream>

using namespace std;

int main()
{
    int n, k, m;
    int a, b;

    cout << "Kelis obuolius atnese mokytoja? ";
    cin >> n;
    cout << "Po kelis obuolius atsinese kiekvienas mokinys? ";
    cin >> k;
    cout << "Keli mokiniai klaseje? ";
    cin >> m;

    a = (n + k * m) / m;
    cout << "Kiekvienam sventes dalyviui teko po " << a << " obuolius" << endl;

    b = (n + k * m) % m;
    cout << "Kitai dienai liko " << b << " obuoliai" << endl;

return 0;
}
