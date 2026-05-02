//#include <iostream>
//using namespace std;
//int main() {
//	int length;
//	char word[10];
//	char reverse[10];
//	cout << "Enter a word :";
//	cin >> word;
//	length = strlen(word);
//
//	for (int i = 0; i < length; i++) {
//		word[i] = toupper(word[i]);
//	}
//
//	for (int fwd = length - 1, bwd = 0; fwd >= 0; fwd--, bwd < length, bwd
//		++) {
//		reverse[bwd] = word[fwd];
//	}
//
//	for (int i = 0; i < length; i++) {
//		if (word[i] != reverse[i]) {
//			cout << "This is a regular word " << endl;
//
//			break;
//		}
//		if (i == length - 1)
//			cout << "This is a palindrome word " << endl;
//
//	}
//
//	return 0;
//}