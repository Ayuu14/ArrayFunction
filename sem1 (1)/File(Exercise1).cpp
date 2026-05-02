//#include <iostream> 
//#include <string> 
//#include <fstream> 
//#include <iomanip> 
//using namespace std;
//
//int menu();
//string chooseFile();
//void addNumOfStudent(string fileName);
//void printList(string fileName);
//
//int main() {
//	int choice;
//	string fileName;
//
//	do {
//		choice = menu();
//		if (choice == 1) {
//			fileName = chooseFile();
//			addNumOfStudent(fileName);
//		}
//		else if (choice == 2) {
//			fileName = chooseFile();
//			printList(fileName);
//		}
//		else {
//			cout << "Program terminated." << endl;
//			break;
//		}
//	} while (choice == 1 || choice == 2);
//	return 0;
//}
//
//int menu() {
//	int yourChoice;
//	cout << "---------------------MENU--------------------------\n";
//	cout << "---------------------------------------------------\n";
//	cout << "1. Add the number of students\n";
//	cout << "2. Print list of number of students\n";
//	cout << "3. Exit\n";
//	cout << "Your choice :";
//	cin >> yourChoice;
//	return yourChoice;
//
//}
//
//string chooseFile() {
//	string fileName;
//	cout << "Enter file name:";
//	cin >> fileName;
//	fileName = fileName + ".txt";
//	cout << endl;
//	return fileName;
//}
//
//void addNumOfStudent(string fileName) {
//	char id[5];
//	int num;
//
//	ofstream writeFile(fileName, ios::out | ios::app);
//	cout << "------Add the number of Students(Programme)------\n";
//	do {
//		cout << "Enter your programme:";
//		cin >> id;
//		if (id[0] == '@')
//			break;
//		cout << "Enter Number of Students:";
//		cin >> num;
//		writeFile << setw(5) << id << " " << num << endl;
//		cout << endl;
//	} while (id[0] != '@');
//	writeFile.close();
//	cout << "------------------------------------------------------\n\n";
//}
//
//void printList(string fileName) {
//	int count = 1;
//	char fileID[5];
//	int fileNumber;
//
//	ifstream readFile(fileName, ios::in);
//	if (!readFile)
//		cout << "File does not exist" << endl;
//	else {
//		cout << "------List of Programme------\n";
//		while (readFile >> fileID >> fileNumber) {
//			cout << setw(3) << count << ". ";
//			cout << setw(6) << fileID << " " << fileNumber << endl;
//			count++;
//		}
//		readFile.close();
//		cout << "-------End of List--------\n\n";
//
//	}
//}