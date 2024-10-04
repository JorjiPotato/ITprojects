//Ilgių suma
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

    int main () {
    int m1, cm1, mm1; //Pirmasis ilgis
    int m2, cm2, mm2; //Antrasis ilgis
    int m, mm, cm; //Ilgių suma
    cout << "Iveskite pirmaji ilgi m, cm, mm: ";
    cin >> m1 >> cm1 >> mm1;
    cout << "Iveskite antraji ilgi m, cm, mm: ";
    cin >> m2 >> cm2 >> mm2;
    mm1 = m1 * 1000 + cm1 * 10 + mm1; //pirmasis ilgis mm
    mm2 = m2 * 1000 + cm2 * 10 + mm2; //antrasis ilgis mm
    int s = mm1 + mm2; //Ilgių suma mm
    m = s / 1000; //Išskiriami metrai
    cm = (s - m * 1000) / 10; //Išskiriami centimetrai
    mm = s % 10; //Išskiriami milimetrai
    cout << "Dvieju ilgiu suma: " << m << " m " << cm << " cm "
    << mm  << " mm" << endl;
return 0;
}
