//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int OX(string& OX) {
//	
//	int score = 0, count = 0;
//	int N_O = 0;
//	
//	for (char& c : OX) {
//
//		if (c == 'O') {
//			N_O++;
//			count += N_O;
//		}
//		else {
//			N_O = 0;
//		}
//	}
//	return count;
//}
//
//
//
//int main(void) {
//	int T = 0;
//	cin >> T;
//	string s = "";
//	for (int i = 0; i < T; i++) {
//		cin >> s;
//		cout << OX(s) << endl;
//
//	}
//
//	return 0;
//}