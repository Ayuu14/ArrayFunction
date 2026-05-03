#include <iostream>
#include <string >
using namespace std;

const int SIZE = 5;
void getMarks(double inputMark[]);
char* determineGrade(double allMarks[]);
void printMarkGrade(double printMark[], char* printGrade);
string numbering[SIZE] = { "1st" , "2nd", "3rd", "4th", "5th" };

int main() {

	char* pGrades;
	double marks[SIZE];
	getMarks(marks);
	pGrades = determineGrade(marks);

	printMarkGrade(marks, pGrades);


	return 0;
}

void getMarks(double inputMark[]) {
	cout << "-------RECORD MARKS-------\n";
	cout << "Marks from 0 to 100" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "Enter " << numbering[i] << " mark :";
		cin >> inputMark[i];
	}
}

char* determineGrade(double allMarks[]) {
	static char grades[SIZE];
	for (int i = 0; i < SIZE; i++) {
		if (allMarks[i] > 80)
			grades[i] = 'A';
		else if (allMarks[i] > 60)
			grades[i] = 'B';
		else if (allMarks[i] > 40)
			grades[i] = 'C';
		else
			grades[i] = 'D';
	}
	return grades;
}

void printMarkGrade(double printMark[], char* printGrade) {
	cout << "\n-------RESULTS------------\n";
	for (int i = 0; i < SIZE; i++) {
		cout << numbering[i] << " Mark and Grade : ";
		cout << printMark[i] << " " << *(printGrade + i);
		cout << endl;
	}
}

