//#include <iostream> 
//using namespace std;
//
//int main() {
//	int type;
//	double length;
//	cout << "Enter the length (cm):";
//	cin >> length;
//
//	if (length < 0)
//		cout << "Invalid measurement ";
//	else {
//		if (length <= 30)
//			type = 1;
//		else if (length > 30 && length <= 50)
//			type = 2;
//		else if (length > 50 && length <= 70)
//			type = 3;
//		else
//			type = 4;
//
//		switch (type) {
//		case 1:cout << "type 1 " << "Ready to export " << endl;
//			break;
//
//		case 2:cout << "type 2 " << "Ready to material " << endl;
//			break;
//
//		case 3:cout << "type 3 " << "Open selling " << endl;
//			break;
//
//		case 4:cout << "type 4 " << "Recycle to community " << endl;
//			break;
//
//		}
//	}
//	return 0;
//}