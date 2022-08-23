#include "SaveData.h"

#include <iostream>

using std::ofstream;

#include <fstream>
#include <cstdlib>

void SaveData(float a, float b, float c, float h, float Pole, float O, float k1, float k2, int T) {

	ofstream file("data/a.txt");
	file << "let a = " << a << ";";
	file.close();

	ofstream file1("data/b.txt");
	file1 << "let b = " << b << ";";
	file1.close();

	ofstream file2("data/c.txt");
	file2 << "let c = " << c << ";";
	file2.close();

	ofstream file3("data/h.txt");
	file3 << "let h = " << h << ";";
	file3.close();

	ofstream file4("data/p.txt");
	file4 << "let p = " << Pole << ";";
	file4.close();

	ofstream file5("data/o.txt");
	file5 << "let o = " << O << ";";
	file5.close();

	ofstream file6("data/t.txt");
	file6 << "let t = " << T << ";";
	file6.close();

	ofstream file7("data/k1.txt");
	file7 << "let k1 = " << k1 << ";";
	file7.close();

	ofstream file8("data/k2.txt");
	file8 << "let k2 = " << k2 << ";";
	file8.close();
}