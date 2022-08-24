#include "SaveData.h"

#include <iostream>
#include <fstream>
#include <cstdlib>

using std::ofstream;

void SaveData(float a, float b, float c, float h, float Area, float C, float a1, float a2, int T) {

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

	ofstream file4("data/area.txt");
	file4 << "let area = " << Area << ";";
	file4.close();

	ofstream file5("data/cir.txt");
	file5 << "let cir = " << C << ";";
	file5.close();

	ofstream file6("data/t.txt");
	file6 << "let t = " << T << ";";
	file6.close();

	ofstream file7("data/a1.txt");
	file7 << "let a1 = " << a1 << ";";
	file7.close();

	ofstream file8("data/a2.txt");
	file8 << "let a2 = " << a2 << ";";
	file8.close();
}