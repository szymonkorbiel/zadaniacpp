#include <iostream>

using namespace std;

int main () {
	cout << "Podaj wielkosc A od 1 do ";
	long t = (1 << (sizeof (unsigned) * 4)) - 1;
	cout << t << "." << endl;
	unsigned n = -1;
	cin >> n;
	while (n < 1 || n > t) {
		cout << "podaj liczbe z zakresu 1 do " << t << endl;
		cin >> n;
	}
	n += 5;
	for (int y = 0; y < n / 2 + 1; y++) {
		for (int x = 0; x < n + 1; x++) {
			if (y == 0 && x == n / 2) {
			    cout << "A";
			} else if (x == n / 2 - y || x == n / 2 + y) {
				cout << "A";
			} else if (y == n / 4 + 1 && x >= n / 2 - y && x <= n / 2 + y) {
				cout << "A";
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
