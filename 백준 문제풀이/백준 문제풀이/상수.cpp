//#include <iostream>
//
//using namespace std;
//
//
//int main(void) {
//
//	int A = 0, B = 0;
//	int A_arr[3] = { 0 };
//	int B_arr[3] = { 0 };
//
//	cin >> A>> B;
//
//
//	for (int i = 0; i < 3; i++) {
//		A_arr[i] = A % 10;
//		A /= 10;
//		B_arr[i] = B % 10;
//		B /= 10;
//	}
//
//	A = A_arr[0] * 100 + A_arr[1] * 10 + A_arr[2];
//	B = B_arr[0] * 100 + B_arr[1] * 10 + B_arr[2];
//
//	if (A > B) {
//		cout << A;
//	}
//	else {
//		cout << B;
//	}
//
//	return 0;
//}