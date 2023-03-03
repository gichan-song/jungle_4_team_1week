#include <iostream>

using namespace std;


int main(void) {

	int jumsu = 0;

	cin >> jumsu;

	
	if (jumsu >= 90 && jumsu <= 100) {
		cout << "A" << endl;
	}
	else if (jumsu >= 80 && jumsu <= 89) {
		cout << "B" << endl;
	}
	else if (jumsu >= 70 && jumsu <= 79) {
		cout << "C" << endl;
	}
	else if (jumsu >= 60 && jumsu <= 69) {
		cout << "D" << endl;
	}
	else {
		cout << "F" << endl;
	}

	return 0;
}