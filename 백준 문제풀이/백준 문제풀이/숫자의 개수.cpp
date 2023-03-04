//#include <iostream>
//
//using namespace std;
//
//int main(void) {
//
//	int A = 0, B = 0, C = 0;
//	int result = 0;
//	int count[10] = { 0, };
//
//	cin >> A >> B >> C;
//
//	result = A * B * C;
//
//	while (result >0) {
//		count[result % 10]++;
//		result /= 10;
//	}
//
//	for (int i = 0; i < 10; i++) {
//		cout << count[i] << endl;
//	}
//
//	return 0;
//}