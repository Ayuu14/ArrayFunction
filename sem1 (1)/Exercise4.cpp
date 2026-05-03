#include <iostream> 
#include <cstdlib> 
#include <ctime> 
using namespace std;
int main() {
	int number1, number2, userAnswer, actualAnswer;
	char choice;
	do {
		srand(time(0));
		number1 = rand() % 10 + 1;
		number2 = rand() % 10 + 1;
		cout << "\nWhat is the answer of " << number1 << " X " << number2 << " ? : "; 
		cin >> userAnswer;

		actualAnswer = number1 * number2;

		if (userAnswer == actualAnswer)
			cout << "Congratulation\n";
		else
			cout << "The correct answer is " << actualAnswer << endl;
		cout << "Do you want to continue? (Y|N) : ";
		cin >> choice;
	} while (choice == 'Y');
	return 0;
}