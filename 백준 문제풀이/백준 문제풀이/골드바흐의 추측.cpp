//#include <iostream>
//
//using namespace std;
//
//int main(void) {
//
//	int T = 0, n = 0;
//	int prime[10000] = { 0 };
//
//	for (int i = 2; i <= 10000; i++) {
//		for (int j = i * 2; j <= 10000; j = i + j) {
//			prime[j] = 1;
//		}
//	}
//
//	cin >> T;
//
//	for (int i = 0; i < T; i++) {
//		cin >> n;
//
//		for (int j = 0; j < n; j++) {
//			if (prime[n / 2 + j] + prime[n / 2 - j] == 0) {
//				cout << n / 2 - j << ' ' << n / 2 + j << endl;
//				break;
//			}
//		}
//	}
//
//	return 0;
//}