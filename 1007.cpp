#include "stdafx.h"
#include "iostream"
#include "algorithm"
using namespace std;

const int MAXLEN = 50;
const int MAXNUM = 100;

int unsortedness(char *seq, int n) {
	int c = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (seq[i] > seq[j]) {
				c++;
			}
		}
	}
	return c;
}

int main() {
	int n, m;
	int scores[MAXNUM];
	char seqs[MAXNUM][MAXLEN+1];
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> seqs[i];
		scores[i] = unsortedness(seqs[i], n) * MAXNUM + i;
	}
	sort(scores, scores + m);
	for (int i = 0; i < m; i++) {
		cout << seqs[scores[i] % MAXNUM] << endl;
	}
	return 0;
}