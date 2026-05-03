#include <iostream> 
#include <string> 
#include <fstream> 

using namespace std;
int main() {
	string name;
	int age;

	ofstream outputFile("input.txt", ios::out);
	do {
		cout << "Enter name (@ to stop): ";
		getline(cin, name);
		if (name == "@")
			break;
		cout << "Enter age :";
		cin >> age;
		cin.ignore();

		outputFile << name << '#' << age;

	} while (name != "@");

	outputFile.close();

	cout << endl;

	ifstream inputFile("input.txt");

	if (!inputFile) {
		cerr << "Error. Could not open the file." << endl;
		return 1;
	}

	string nameFile;
	int ageFile;
	cout << "Content of the file:" << endl;

	while (!inputFile.eof()) {
		getline(inputFile, nameFile, '#');
		inputFile >> ageFile;

		cout << "Name :" << nameFile << endl;
		cout << "Age : " << ageFile << endl;

	}

	inputFile.close();
	return 0;
}