#include "iostream"

using namespace std;

int minNum(double c) {
	double l = 0;
	int n=0;
	while (l < c) {
		l += 1.0 / (n + 2);
		n++;
	}
	return n;
}

int main() {
	double c;
	while (1) {
		cin >> c;
		if (c == 0.0) break;
		cout << minNum(c) << " card(s)" << endl;
	}
	return 0;
}