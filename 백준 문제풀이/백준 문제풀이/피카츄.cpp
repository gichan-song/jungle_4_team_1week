//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main(void) {
//
//	string S = "";
//
//	cin >> S;
//	string possible = "YES";
//	for (int i = 0; i < S.length(); i++) {
//		if (S[i] == 'p') {
//			if (S[i + 1] == 'i') {
//				i++;
//			}
//			else {
//				possible= "NO";
//				break;
//			}
//		}
//		else if (S[i] == 'k') {
//			if (S[i + 1] == 'a') {
//				i++;
//			}
//			else {
//				possible= "NO";
//				break;
//			}
//		}
//		else if (S[i] == 'c') {
//			if (S[i + 1] == 'h') {
//				if (S[i + 2] == 'u') {
//					i += 2;
//				}
//				else {
//					possible= "NO";
//					break;
//				}
//			}
//			else {
//				possible= "NO";
//				break;
//			}
//		}
//		else {
//			possible= "NO";
//			break;
//		}
//	}
//
//	cout << possible;
//
//	return 0;
//}