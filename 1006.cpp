#include "iostream"
#include "math.h"
using namespace std;


int main() {
	int p, e, i, d;
	int c = 1;
	while (1) {
		cin >> p >> e >> i >> d;
		if (p == -1) break;
		p %= 23;
		e %= 28;
		i %= 33;
		while (1) {
			if (p == e && e == i && p>d) {
				cout << "Case " << c << ": the next triple peak occurs in " << p-d << " days." << endl;
				break;
			}
			if (p > (d+21252) || e > (d+21252) || i >  (d+21252)) {
				cout << "Case " << ": the next triple peak occurs in 21252 days." << endl;
				break;
			}
			if (p <= e && p <= i) {
				p += 23;
			}
			else if (e <= p && e <= i) {
				e += 28;
			}
			else if (i <= p && i <= e) {
				i += 33;
			}
			//cout << p << e << i << d;
		}
		c += 1;
	}
	return 0;
}