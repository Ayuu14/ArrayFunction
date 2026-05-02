#include <iostream> 
#include <string> 
#include <iomanip> 
using namespace std;
struct registrationDate {
	int day;
	int month;
	int year;
};
struct Group {
	int groupID;
	int round;
	registrationDate second;
};
struct Participant {
	string id;
	int score[3];
	double average;
	Group first;
};
Participant  insertData(Participant student) {
	cout << "Enter Parcipant ID :";
	getline(cin, student.id);
	cout << "Enter the Group ID :";
	cin >> student.first.groupID;
	cout << "Enter registration date (day month year ) : ";
	cin >> student.first.second.day >> student.first.second.month >>
		student.first.second.year;
	cout << "Enter the round number :";
	cin >> student.first.round;
	for (int j = 0; j < 3; j++) {
		cout << "Enter score " << j + 1 << " : ";
		cin >> student.score[j];
	}
	cin.ignore();
	cout << endl;
	return student;
}
double calculateAverage(Participant student) {
	int total = 0;
	for (int j = 0; j < 3; j++) {
		total += student.score[j];
	}
	return static_cast<double>(total) / 3;
}
void displayData(Participant student[]) {
	cout << "\n---Average Score Report---\n";
	for (int i = 0; i < 3; i++) {
		cout << "Participant ID :" << student[i].id << endl;
		cout << "Group ID : " << student[i].first.groupID << endl;
		cout << "Registration Date : " << student[i].first.second.day << "/"
			<< student[i].first.second.month << "/";
		cout << student[i].first.second.year << endl;
		cout << "Round Number : " << student[i].first.round << endl;
		for (int j = 0; j < 3; j++) {
			cout << "Score " << j + 1 << " : " << student[i].score[j] <<
				endl;
		}
		cout << "Average score : ";
		cout << setprecision(2) << fixed << student[i].average << endl <<
			endl;
	}




}


int main() {

	Participant student[3];
	Group first[3];

	for (int i = 0; i < 3; i++) {
		student[i] = insertData(student[i]);
	}


	for (int i = 0; i < 3; i++) {

		student[i].average = calculateAverage(student[i]);
	}

	displayData(student);



	return 0;
}








