#include <iostream>
#include <cmath>

using namespace std;
int main() {
	double Sm, S, k, i;

	Sm = 0;
	k = 1;
	while (k <= 20) {
		S = 0;
		i = k;
		while (i <= 40 - k) {
			S += i * i;
			i++;
		}
		Sm += (1 + sqrt(S)) / (k * k);
		k++;
	}
	cout << Sm << endl;

	Sm = 0;
	k = 1;
	do {
		S = 0;
		i = k;
		do {
			S += i * i;
			i++;
		} while (i <= 40 - k);
		Sm += (1 + sqrt(S)) / (k * k);
		k++;
	} while (k <= 20);
	cout << Sm << endl;

	Sm = 0;
	for (k = 1; k <= 20; k++) {
		S = 0;
		for (int i = k; i <= 40 - k; i++) {
			S += i * i;
		}
		Sm += (1 + sqrt(S)) / (k * k);
	}
	cout << Sm << endl;

	Sm = 0;
	for (k = 20; k >= 1; k--) {
		S = 0;
		for (int i = k; i <= 40 - k; i++) {
			S += i * i;
		}
		Sm += (1 + sqrt(S)) / (k * k);
	}
	cout << Sm << endl;

	return 0;
}