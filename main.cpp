#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	fstream fs;
	string fname = "myFirstFile.txt";

	fs.open(fname, fstream::app | fstream::in | fstream::out);

	if (!fs.is_open()) {
		cout << "Error for opening file!\n";
		return 0;
	}
	else {
		cout << "File is opened!\n";
	}
	int number;
	cout << "Input 1 for write the message.\n";
	cout << "Input 2 for reading the file.\n";
	cin >> number;

	string msg;

	if (number == 1) {
		cout << "Input your message: ";
		cin >> msg;
		fs << msg << "\n";
	}

	if (number == 2) {
		while (!fs.eof()) {
			msg = "";
			fs >> msg;
			cout << msg << endl;
		}
	}

	fs.close();
	return 0;
}
