//Triženklio skaičiaus skaitmenų suma
#include <iostream>

using namespace std;

int main()
{
    int t; //triženklis skaičius, pradinis duomuo
    int a, b, c; //triženklio skaičiaus skaitmenys, tarpiniai rezultatai
    int s; //triženklio skaičiaus skaitmenų suma, galutinis rezultatas
    cout << "Iveskite trizenkli skaiciu: ";
    cin >> t;
    a = t / 100; //atskiriamas pirmasis skaitmuo
    b = t / 10 % 10; //atskiriamas antrasis skaitmuo
    c = t % 10; //atskiriamas trečiasis skaitmuo
    s = a + b + c;
    cout << "Trizenklio skaiciaus skaitmenu suma yra lygi " << s << endl;
return 0;
}
