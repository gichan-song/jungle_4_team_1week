//#include <iostream>
//
//using namespace std;
//
//int main(void) {
//
//	int N = 0;
//	int cnt = 0;
//
//	cin >> N;
//
//	if (N < 100) {
//		cout << N;
//	}
//	else if (N == 1000) {
//		cout << 144;
//	}
//	else {
//		for (int i = 100; i <= N; i++) {
//			if (i % 10 - (i / 10) % 10 == (i / 10) % 10 - (i / 100) % 10) {
//				cnt++;
//			}
//		}
//		cout << 99 + cnt;
//	}
//}