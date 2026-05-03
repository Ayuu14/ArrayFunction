#include <iostream> 
#include <string> 
using namespace std;

const int BUS = 3, DAY = 7;

int menuOperation();
int menuBus(string b[]);
int menuDay(string d[]);
void viewBusDay(int p);
void viewBus(int vB[], string vDay[]);
void viewAll(int vA[][DAY], string bA[], string dA[]);

int main() {
	int operation, plateNo, day;
	string busList[BUS] = { "MAW 4572 " , "MJV 441" , "MBV 6560" };
	string dayList[DAY] = { "Monday" , "Tuesday" , "Wednesday" , "Thursday",
   "Friday" , "Saturday" , "Sunday" };
	int passenger[BUS][DAY] = {
	 { 40 ,35, 37, 32 , 44 , 44, 44 },
	 { 44 ,35, 30 , 32 ,44 , 37 , 35 },
	 {40 ,40 ,40, 40, 40, 40, 40}
	};

	do {
		operation = menuOperation();

		if (operation == 1) {
			plateNo = menuBus(busList);
			day = menuDay(dayList);
			viewBusDay(passenger[plateNo][day]);
		}
		else if (operation == 2) {
			plateNo = menuBus(busList);
			viewBus(passenger[plateNo], dayList);
		}
		else if (operation == 3) {
			viewAll(passenger, busList, dayList);
		}
		else
			cout << "Program terminated\n";

	} while (operation >= 1 && operation <= 3);

	return 0;
}



int menuOperation() {
	int choice;
	cout << "LIST OF REPORTS\n";
	cout << "1. View number of passenger according to bus and day selected\n";
	cout << "2. View number of passenger according to bus only\n";
	cout << "3. View all data\n";
	cout << "Press any other key to exit the program\n";
	cout << "Your choice :";
	cin >> choice;

	return choice;
}

int menuBus(string b[]) {
	int choice;
	do {
		cout << "\nLIST OF BUSSES\n";
		for (int i = 0; i < BUS; i++) {
			cout << i + 1 << ". " << b[i] << endl;
		}
		cout << "Choose the bus : ";
		cin >> choice;
	} while (choice < 1 || choice > BUS);

	return choice - 1;
}

int menuDay(string d[]) {
	int choice;
	do {
		cout << "\nDAY IN A WEEK\n";
		for (int i = 0; i < DAY; i++) {
			cout << i + 1 << ". " << d[i] << endl;
		}
		cout << "Choose the day : ";
		cin >> choice;
	} while (choice < 1 || choice > 7);

	return choice - 1;
}

void viewBusDay(int p) {
	cout << "\nThe number of passengers is " << p << " passengers\n";
}

void viewBus(int vB[], string vDay[]) {
	cout << "\nNumber of passengers in a week:\n";
	for (int i = 0; i < DAY; i++)
		cout << vDay[i] << " : " << vB[i] << " passengers\n";
	cout << endl;
}

void viewAll(int vA[][DAY], string bA[], string dA[]) {
	int total = 0;

	cout << "\nNumber of passengers Bus X Day";

	for (int i = 0; i < BUS; i++) {
		int totalWeek = 0;
		cout << "\nPlate No : " << bA[i] << endl;

		for (int j = 0; j < DAY; j++) {
			cout << dA[j] << " : " << vA[i][j] << " passengers\n";
			totalWeek += vA[i][j];
		}
		cout << "Total passengers in a week: " << totalWeek << endl;
		total += totalWeek;
	}
	cout << "\nTotal passengers of all buses: " << total << endl << endl;

}