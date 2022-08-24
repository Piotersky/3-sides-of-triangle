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
float option;

void values() {

    cout << "Enter side a length: ";

    cin >> a;

    cout << "Side b length: ";

    cin >> b;

    cout << "Side b length: ";

    cin >> c;

    cout << "\nWhat would you like to calculate? \n\n";
    cout << "1 - Type of triangle\n";
    cout << "2 - Angles\n";
    cout << "3 - Area + height\n";
    cout << "4 - Circuit\n";
    cout << "5 - Generate the triangle with all data\n\n";

    cin >> option;
}

void calculate() {

    cout << "\nCalculating...\n\n";

    if (a + b <= c || b + c <= a || a + c <= b) {
        cout << "This triangle not exist! \n";

        cout.flush();
        Sleep(5000);

        return;
    }

    if (option == 1) {

        char hypo = 'A';

        bool pyt = false;

        if (a > b && a > c) {
            hypo = 'a';
        }

        if (b > c && b > a) {
            hypo = 'b';
        }

        if (c > b && c > a) {
            hypo = 'c';
        }

        if (hypo == 'a') {

            if (pow(c, 2) + pow(b, 2) == pow(a, 2)) {

                pyt = true;
            }
        }

        if (hypo == 'b') {

            if (pow(c, 2) + pow(a, 2) == pow(b, 2)) {

                pyt = true;
            }
        }

        if (hypo == 'c') {

            if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {

                pyt = true;
            }
        }

        if (a == b && a == c) {
            cout << "This is equilateral triangle!";
        }
        if (b == a && b == c) {
            cout << "This is equilateral triangle!";
        }
        if (c == a && c == b) {
            cout << "This is equilateral triangle!";
        }
        if (a != b && a != c && b != c && pyt != true) {
            cout << "This is scalene triangle! \n";
        }
        if (pyt == true) {

            cout << "This is Pythagorean triangle \n";
        }

        if (a == b && a != c && b != c) {
            cout << "This is isosceles triangle!";
        }

        if (a != b && b == c && c != a) {
            cout << "This is isosceles triangle!";
        }

        if (a == c && c != b && a != b) {
            cout << "This is isosceles triangle!";
        }

        cout.flush();
        Sleep(5000);

        return;
    }

    if (option == 2) {

        float A1, A2;

        float Angle1 = pow(c, 2) - pow(a, 2) - pow(b, 2);
        float Angle2 = pow(c, 2) - pow(a, 2) - pow(b, 2);

        A1 = acos(Angle1);

        A2 = acos(Angle2);

        cout << "Angles of this triangle are:" << A1 << ", " << A2 << ", " << 180 - A1 - A2 << std::endl;

        cout.flush();
        Sleep(5000);

        return;
    }

    if (option == 3) {

        float Area;

        float h;

        //Heron's formula

        float p = a + b + c / 2;

        Area = sqrt(p * (p - a) * (p - b) * (p - c));

        h = (Area * 2) / a;

        cout << "Height: " << h << "\n";

        cout << "Area: " << Area << "\n";

        cout.flush();
        Sleep(5000);

        return;
    }

    if (option == 4) {

        float C;

        C = a + b + c;

        cout << "Circuit: " << C << "\n";

        cout.flush();
        Sleep(5000);

        return;
    }

    if (option == 5) {

        char hypo = 'd';

        //Type

        float T = -1;

        if (a > b && a > c) {
            hypo = 'a';
        }

        if (b > c && b > a) {
            hypo = 'b';
        }

        if (c > b && c > a) {
            hypo = 'c';
        }

        if (hypo == 'a') {

            if (pow(c, 2) + pow(b, 2) == pow(a, 2)) {

                T = 3;
            }
        }

        if (hypo == 'b') {

            if (pow(c, 2) + pow(a, 2) == pow(b, 2)) {

                T = 3;
            }
        }

        if (hypo == 'c') {

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

        //Angles

        float A1, A2;

        float Angle1 = pow(c, 2) - pow(a, 2) - pow(b, 2);
        float Angle2 = pow(c, 2) - pow(a, 2) - pow(b, 2);

        A1 = acos(Angle1);

        A2 = acos(Angle2);

        //Area

        float Area;

        /*Heron's formula*/

        float p = a + b + c / 2;

        Area = sqrt(p * (p - a) * (p - b) * (p - c));

        //Height

        float h;

        h = (Area * 2) / a;

        //Circuit

        float C;

        C = a + b + c;

        cout << "Generating triangle... \n\nIt will be take a moment \n\n";

        SaveData(a, b, c, h, Area, C, A1, A2, T);

        cout.flush();
        Sleep(2000);

        system("Visualisation.exe");

        cout << "Window will show automatically.\nWhen you want to generate the next triangle, close that window and enter the side lengths again\n\n";

        values();
    }

    if (option != 1 && option != 2 && option != 3 && option != 4 && option != 5) {
        cout << "ERROR! \n Enter those intigers 1, 2, 3, 4 or 5\n";

        cout.flush();
        Sleep(3000);

        return;
    }
}

int main() {
    values();
    calculate();
    values();
    calculate();
    values();
    calculate();
    values();
    calculate();
    values();
    calculate();

    system("pause>0");
}

int main();