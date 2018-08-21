/*
#include <iostream>
using namespace std;

int t, m, n;
int main() {
	int t, m, n;
	cin >> t;
	while (t--) {
		cin >> n;
		m = n;
		while (n != 1) {
			if (n % 2) n = n * 3 + 1;
			else n /= 2;
			m = m < n ? n : m;
		}
		cout << m << endl;
	}
	return 0;
}
*/

#include <cstdio>

int t, m, n;
int main() {
	scanf_s("%d", &t);
	while (t--) {
		scanf_s("%d", &n);
		while (n != 1) {
			if (n % 2) n = n * 3 + 1;
			else n /= 2;
			m = m < n ? n : m;
		}
		printf("%d\n", m);
	}
	return 0;
}