//#include <iostream>
//using namespace std;
//
//const int branchCount = 3, monthCount = 6;
//
//int main() {
//	int min = 999;
//	string minBranch;
//	string branchName[branchCount];
//	string  month[monthCount];
//	int sales[branchCount][monthCount];
//	int total[branchCount];
//
//	for (int i = 0; i < monthCount; i++) {
//		cout << "Enter the month selected : ";
//		cin >> month[i];
//	}
//
//	cout << endl;
//	for (int i = 0; i < branchCount; i++) {
//		cout << "Enter the name of the branch : ";
//		cin >> branchName[i];
//
//		for (int j = 0; j < monthCount; j++) {
//			cout << "Enter the sales for " << month[j] << " : ";
//			cin >> sales[i][j];
//
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < branchCount; i++) {
//		int sum = 0;
//
//		for (int j = 0; j < monthCount; j++) {
//			sum += sales[i][j];
//		}
//		total[i] = sum;
//		cout << "The total sales for " << branchName[i] << " is " << total[i];
//		cout << endl;
//
//	}
//	cout << endl;
//	for (int i = 0; i < branchCount; i++) {
//		if (total[i] < min) {
//				min = total[i];
//			minBranch = branchName[i];
//		}
//	}
//	cout << endl;
//	cout << "The branch that got the lowest sale is " << minBranch << "which is " << min;
//	cout << endl;
//
//	return 0;
//
//}