#include <iostream>

using namespace std;

int main(void) {

	int x = 0, y = 0, w = 0, h = 0;

	cin >> x;
	cin >> y;
	cin >> w;
	cin >> h;

	if (w - x <= h - y) {
		if (x >= w - x && y >= w - x) {
			cout << w - x;
		}
		else {
			if (x > y) {
				cout << y;
			}
			else {
				cout << x;
			}
		}
	}
	else {
		if (x >= h - y && y >= h - y) {
			cout << h - y;
		}
		else {
			if (x > y) {
				cout << y;
			}
			else {
				cout << x;
			}
		}
	}


	return 0;
}