#include <iostream> 
#include <string> 
#include <iomanip> 
using namespace std;
int main() {
	string cakeType;
	int length, width, panArea, bigSlice;
	double smallPrice, bigPrice;

	cout << "Enter cake type :";
	getline(cin, cakeType);
	cout << "Enter the length of pan :";
	cin >> length;
	cout << "Enter the width of pan :";
	cin >> width;

	panArea = length * width;
	bigSlice = panArea / 4;
	smallPrice = panArea * 0.5;
	bigPrice = bigSlice * 0.9;

	cout << "\n---------------------------------------------" << endl;
	cout << "\t\tSummary\n\tCakeType : " << cakeType << endl;
	cout << "\tPan Dimension : " << length << " X " << width << endl;
	cout << "----------------------------------------------" << endl;
	cout << setw(12) << "Type" << setw(20) << "Number of Slices" << setw(10) <<
		"Price" << endl;
	cout << "----------------------------------------------" << endl;
	cout << setw(12) << left << "Small Slice";
	cout << setw(20) << right << panArea;
	cout << setw(10) << "RM " << smallPrice << endl;
	cout << setw(12) << left << "Big Slice";
	cout << setw(20) << right << bigSlice;
	cout << setw(10) << "RM " << bigPrice << endl;

	return 0;

}