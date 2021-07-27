#include <iostream>
#include <cmath>
#include <cfenv>
#include <conio.h>

/*
    Source by Programiz
    Modified For Learn by RK
    I.D.E : VS2019
*/

using namespace std;

int main() {
    int x = 75;
    double hasil;

    fesetround(FE_DOWNWARD);
    hasil = nearbyint(x);
    cout << "Rounding downward (" << x << ") = " << hasil << endl;

    _getch();
    return 0;
}