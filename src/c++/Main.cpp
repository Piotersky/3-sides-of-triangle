#include "SaveData.h"

#include <iostream>

#include <Windows.h>
#include <cstdlib>
#include <tgmath.h>
#include <math.h>
#include <stdlib.h>

using std::cout;
using std::cin;

float a;
float b;
float c;
float opcja;

void pytania() {

    cout << "Wprowadz dlugosc boku a: ";

    cin >> a;

    cout << "Wprowadz dlugosc boku b: ";

    cin >> b;

    cout << "Wprowadz dlugosc boku c: ";

    cin >> c;

    cout << "\nCo chcesz policzyc? \n\n";
    cout << "1 - Jaki jest to trojkat + katy jezeli jest pitagorejski\n";
    cout << "2 - Katy\n";
    cout << "3 - Pole + wysokosc\n";
    cout << "4 - Obwod\n";
    cout << "5 - Wygeneruj trojkat wraz z wszystkimi danymi\n\n";

    cin >> opcja;
}

void liczenie() {

    cout << "\nLiczenie...\n\n";

    if (a + b <= c || b + c <= a || a + c <= b) {
        cout << "Taki trojkat nie istnieje! \n";

        cout.flush();
        Sleep(5000);

        pytania();
    }

    if (opcja == 1) {

        char prze = 'A';

        bool pit = false;

        if (a > b && a > c) {
            prze = 'a';
        }

        if (b > c && b > a) {
            prze = 'b';
        }

        if (c > b && c > a) {
            prze = 'c';
        }

        if (prze == 'a') {

            if (pow(c, 2) + pow(b, 2) == pow(a, 2)) {

                pit = true;
            }
        }

        if (prze == 'b') {

            if (pow(c, 2) + pow(a, 2) == pow(b, 2)) {

                pit = true;
            }
        }

        if (prze == 'c') {

            if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {

                pit = true;
            }
        }

        if (a == b && a == c) {
            cout << "Jest to trojkat rownoboczny!";
        }
        if (b == a && b == c) {
            cout << "Jest to trojkat rownoboczny!";
        }
        if (c == a && c == b) {
            cout << "Jest to trojkat rownoboczny!";
        }
        if (a != b && a != c && b != c && pit != true) {
            cout << "Jest to trojkat roznoboczny! \n";
        }
        if (pit == true) {

            //int odp;

            cout << "Jest to trojkat pitagorejski \n";
            /*cout << "Chcesz policzyc katy tego trojkata? \n";
            cout << "1 - Tak \n";
            cout << "2 - Nie \n";

            cin >> odp;

            if (odp == 1) {

                float K1;

                float Kat1 = pow(c, 2) - pow(a, 2) - pow(b, 2);

                K1 = acos(Kat1);

                cout << "Katy tego trojkata to:" << "90, " << 180 - K1 - 90 << ", " << K1 << std::endl;

                cout.flush();
                Sleep(5000);

                pytania();
            }

            if (odp == 2) {
                pytania();
            }

            if (opcja != 1 && opcja != 2) {
                cout << "BLAD! \n Podaj liczbe 1 lub 2 \n";

                cout.flush();
                Sleep(3000);

                pytania();
            }*/
        }

        if (a == b && a != c && b != c) {
            cout << "Jest to trojkat rownoramienny!";
        }

        if (a != b && b == c && c != a) {
            cout << "Jest to trojkat rownoramienny!";
        }

        if (a == c && c != b && a != b) {
            cout << "Jest to trojkat rownoramienny!";
        }

        cout.flush();
        Sleep(5000);

        pytania();
    }

    if (opcja == 3) {

        float K1, K2;

        float Kat1 = pow(c, 2) - pow(a, 2) - pow(b, 2);
        float Kat2 = pow(c, 2) - pow(a, 2) - pow(b, 2);

        K1 = acos(Kat1);

        K2 = acos(Kat2);

        cout << "Katy tego trojkata to:" << K1 << ", " << K2 << ", " << 180 - K1 - K2 << std::endl;

        cout.flush();
        Sleep(5000);

        pytania();
    }

    if (opcja == 3) {

        float Pole;

        float h;

        //Wzór Herona

        float p = a + b + c / 2;

        Pole = sqrt(p * (p - a) * (p - b) * (p - c));

        h = (Pole * 2) / a;

        cout << "Wysokosc: " << h << "\n";

        cout << "Pole: " << Pole << "\n";

        cout.flush();
        Sleep(5000);

        pytania();
    }

    if (opcja == 4) {

        float O;

        O = a + b + c;

        cout << "Obwod: " << O << "\n";

        cout.flush();
        Sleep(5000);

        pytania();
    }

    if (opcja == 5) {

        char prze = 'd';

        //Trójk¹t

        float T = -1;

        if (a > b && a > c) {
            prze = 'a';
        }

        if (b > c && b > a) {
            prze = 'b';
        }

        if (c > b && c > a) {
            prze = 'c';
        }

        if (prze == 'a') {

            if (pow(c, 2) + pow(b, 2) == pow(a, 2)) {

                T = 3;
            }
        }

        if (prze == 'b') {

            if (pow(c, 2) + pow(a, 2) == pow(b, 2)) {

                T = 3;
            }
        }

        if (prze == 'c') {

            if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {

                T = 3;
            }
        }

        if (a == b && b != c) {
            T = 0;
        }
        if (c != a && b == c) {
            T = 0;
        }
        if (a != b && b == c) {
            T = 0;
        }
        if (c == a && b != c) {
            T = 0;
        }
        if (a == b && b == c) {
            T = 1;
        }
        if (c == a && b == c) {
            T = 1;
        }
        if (a != b && a != c && b != c && T != 3) {
            T = 2;
        }

        //K¹ty

        float K1, K2;

        float Kat1 = pow(c, 2) - pow(a, 2) - pow(b, 2);
        float Kat2 = pow(c, 2) - pow(a, 2) - pow(b, 2);

        K1 = acos(Kat1);

        K2 = acos(Kat2);

        //Pole

        float Pole;

        /*Wzór Herona*/

        float p = a + b + c / 2;

        Pole = sqrt(p * (p - a) * (p - b) * (p - c));

        //Wyskoœæ

        float h;

        h = (Pole * 2) / a;

        //Obwód

        float O;

        O = a + b + c;

        cout << "Generowanie trojkata... \n\nTo moze zajac chwile \n\n";

        SaveData(a, b, c, h, Pole, O, K1, K2, T);

        cout.flush();
        Sleep(2000);

        system("Wizualizacja.exe");

        cout << "Okno powinno sie pojawic automatycznie, jesli go nie widzisz, to wlacz je przez pasek zadan \nKiedy bedziesz chcial/a wygenerowac nastepny trojkat zamknij tamto okienko i od nowa podaj dlugosci bokow\n\n";

        pytania();
    }

    if (opcja != 1 && opcja != 2 && opcja != 3 && opcja != 4 && opcja != 5) {
        cout << "BLAD! \n Podaj liczbe 1, 2, 3, 4 lub 5\n";

        cout.flush();
        Sleep(3000);

        pytania();
    }
}

int main() {
    pytania();
    liczenie();
    pytania();
    liczenie();
    pytania();
    liczenie();
    pytania();
    liczenie();
    pytania();
    liczenie();


    system("pause>0");
}

int main();