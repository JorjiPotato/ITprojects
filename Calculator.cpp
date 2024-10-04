#include <iostream>

using namespace std;

int main()
{
    int a, b, atsakymas;
    string veiksmas;
    cout << "Iveskite du skaicius: " << endl;
    cin >> a >> b;
    cout << endl << "Iveskite veiksma (s, a, d, p) : " << endl;
    cin >> veiksmas;
    cout << endl;
        if (veiksmas == "s")
        {
            atsakymas = a + b;
        cout << "Atsakymas: " << atsakymas << endl;
        }
        else if (veiksmas == "a")
        {
            atsakymas = a - b;
        cout << "Atsakymas: " << atsakymas << endl;
        }
        else if (veiksmas == "d")
        {
            atsakymas = a * b;
        cout << "Atsakymas: " << atsakymas << endl;
        }
        else if (veiksmas == "p")
        {
            atsakymas = a / b;
            cout << "Atsakymas: " << atsakymas << endl;
            cout << "Liekana: " << a % b << endl;
        }
        else

        cout << "Error" << endl;
        return 0;
}
