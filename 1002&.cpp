#include "iostream"
#include "string"
#include "map"
using namespace std;

string toStandardForm(string s) {
	char nummap[] = "2223334445556667 77888999 ";
	string ns(7, ' ');
	int j = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= '0' && s[i] <= '9') {
			ns[j++] = s[i];
		}
		else if (s[i] >= 'A' && s[i] <= 'Z') {
			ns[j++] = nummap[s[i] - 'A'];
		}
	}
	return ns;
}

int main() {
	int n;
	string s;
	bool noDuplicate = true;
	map<string, int> d;
	cin >> n;
	while (n--) {
		cin >> s;
		s = toStandardForm(s);
		if (d.count(s)) {
			d[s] += 1;
		}
		else {
			d[s] = 1;
			noDuplicate = false;
		}
		
	}
	for (auto kv : d) {
		if (kv.second > 1) {
			cout << kv.first.substr(0, 3) << "-" << kv.first.substr(3, 4) << " " << kv.second << endl;
		}
	}
	if (noDuplicate) {
		cout << "No duplicates. " << endl;
	}
	return 0;
}