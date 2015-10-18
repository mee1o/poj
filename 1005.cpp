#include "stdafx.h"
#include "iostream"
#include "math.h"
using namespace std;

double erosionRadius(int r) {
	return sqrt(100.0*r / 3.14159265358979323846);
}

int main() {
	int n;
	float x, y;
	int year;
	float radius;
	cin >> n;
	for (int i = 0; i < n;i++) {
		cin >> x >> y;
		radius = sqrt(x*x + y*y);
		year = 1;
		while (1) {
			if (erosionRadius(year) > radius) {
				break;
			}
			else {
				year++;
			}
		}
		cout << "Property " << i+1 << ": This property will begin eroding in year " << year << "." << endl;
	}
	cout << "END OF OUTPUT." << endl;
}