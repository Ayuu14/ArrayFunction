#include <iostream> 
#include <string> 
#include <cctype> 

using namespace std;

int main() {
	char matricNo[11], confirmation;
	int length;

	cout << "Enter Matric Number :";
	cin >> matricNo;
	length = strlen(matricNo);
	cout << "The length of Matric Number entered is " << length << endl;
	cout << endl;

	if (isalpha(matricNo[0])) {
		if (islower(matricNo[0])) {
			matricNo[0] = toupper(matricNo[0]);
			cout << "Correct format of Matric Number :" << matricNo << endl;
		}
	}
	
	else
		cout << "Invalid Matric No";
	cout << endl;

	char firstName[30], lastName[30];
	cout << "Enter your first name :";
	cin >> firstName;
	cout << "Enter your lastName :";
	cin >> lastName;

	if (strcmp(firstName, lastName) == 0) {
		cout << "Are you sure your first name and last name are identified ? (Y | N) : "; 
			cin >> confirmation;
		if (confirmation == 'N')
			cout << "Invalid names provided";
		else {
			strcat_s(firstName, " ");
			strcat_s(firstName, lastName);
			cout << "Your name is " << firstName << endl;

		}
	}
	else {
		strcat_s(firstName, " ");
		strcat_s(firstName, lastName);
		cout << "Your name is " << firstName << endl;
	}
	return 0;
}





