#include "iostream"

using namespace std;

int main() {
	float s = 0, n;
	for (int i = 0; i < 12; i++) {
		cin >> n;
		s += n;
	}
	cout << "$" <<s / 12;

	return 0;
}