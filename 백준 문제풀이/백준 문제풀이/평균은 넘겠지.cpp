//#include <iostream>
//
//using namespace std;
//
//int main(void) {
//
//	int T = 0, N = 0;;
//	int sum = 0, pct=0;
//	double avg = 0.0;
//	int score[1000] = { 0, };
//
//	cin >> T;
//
//	cout << fixed;
//	cout.precision(3);
//
//	for (int i = 0; i < T; i++) {
//		cin >> N;
//		for (int j = 0; j < N; j++) {
//			cin >> score[j];
//			sum += score[j];
//		}
//		avg = sum / N;
//
//		for (int j = 0; j < N; j++) {
//			if (avg < score[j]) {
//				pct++;
//			}
//		}
//		cout << (double)pct / N * 100<<'%' << endl;
//
//		sum = 0;
//		pct = 0;
//	}
//
//	return 0;
//}