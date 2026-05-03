#include<iostream> 
using namespace std;
int main() {
	double length;
	cout << "Enter the length (cm):";
	cin >> length;
	if (length < 0)
		cout << "Invalid measurement ";
	else
		if (length <= 30)
			cout << "Approved to export ";
		else if (length > 30 && length <= 50)
			cout << "Ready to material ";
		else if (length > 50 && length <= 70)
			cout << "Open to selling ";
		else
			cout << "Recycle to community ";
	return 0;

}
