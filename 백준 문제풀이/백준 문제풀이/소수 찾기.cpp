//#include <iostream>
//
//using namespace std;
//
//int main(void) {
//
//	int N = 0, temp=0;
//	int cnt = 0,result=0;
//
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		cin >> temp;
//
//		for (int div = 1; div <= temp; div++) {
//			if (temp % div == 0) {
//				cnt++;
//			}
//		}
//		if (cnt == 2) {
//			result++;
//		}
//		cnt = 0;
//	}
//	cout << result;
//	return 0;
//}