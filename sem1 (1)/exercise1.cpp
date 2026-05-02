//#include <iostream> 
//#include <string> 
//#include <iomanip> 
//
//using namespace std;
//
//int main() {
//
//	string cakeType;
//	int length, width, panArea, bigSlice, smallSlice, bigLength, bigWidth;
//	double bigPrice, smallPrice;
//
//	cout << "Enter the cake type :";
//	getline(cin, cakeType);
//	cout << "Enter the length of the pan( inches ) :";
//	cin >> length;
//	cout << "Enter the width of the pan( inches ) :";
//	cin >> width;
//
//	if (length < 1 || width < 1)
//		cout << "\nInvalid measurement ";
//
//	else {
//		if (length < 2 || width < 2) {
//			panArea = length * width;
//			bigSlice = 0;
//			smallPrice = panArea * 0.5;
//			bigPrice = 0;
//		}
//
//		else {
//			panArea = length * width;
//			smallPrice = panArea * 0.5;
//			if (length % 2 == 1)
//				bigLength = length - 1;
//			else
//				bigLength = length;
//			if (width % 2 == 1)
//				bigWidth = width - 1;
//			else
//				bigWidth = width;
//			bigSlice = (bigLength * bigWidth) / 4;
//			bigPrice = bigSlice * 0.9;
//		}
//
//		cout << "\n------------------------------------------------------" <<
//			endl;
//		cout << "\t\tSummary\n\tCake Type : " << cakeType << endl;
//		cout << "\tPan Dimension : " << length << " X " << width << endl;
//		cout << "------------------------------------------------------" << endl;
//		cout << "Type\t\t" << "Number of Slices\t" << "Price" << endl;
//		cout << "------------------------------------------------------" << endl;
//		cout << "Small Slice\t\t" << panArea << "\t\tRM " << setprecision(2) << fixed << smallPrice << endl;
//		cout << "Big Slice\t\t" << bigSlice << "\t\tRM " << setprecision(2) << fixed << bigPrice << endl;
//	}
//	return 0;
//}