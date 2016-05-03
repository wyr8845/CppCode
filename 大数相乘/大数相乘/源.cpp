#include <iostream>
#define N 1000
using namespace std;

int 大数相乘函数(int mul[], char stringA[], char stringB[]) {
	int a[N], b[N];
	int lenA, lenB, lenMax;

	lenA = strlen(stringA);
	lenB = strlen(stringB);

	for (int i = 0; i < N; i++) {
		a[i] = b[i] = 0;
	}

	for (int i = 0; i < 2 * N; i++) {
		mul[i] = 0;
	}

	for (int i = 0; i < lenA; i++) {
		a[lenA - 1 - i] = stringA[i] - '0';
	}

	for (int i = 0; i < lenB; i++) {
		b[lenB - 1 - i] = stringB[i] - '0';
	}

	lenMax = lenA + lenB;

	for (int i = 0; i < lenA; i++) {
		for (int j = 0; j < lenB; j++) {
			mul[i + j] += a[i] * b[j];
		}
	}

	for (int i = 0; i < lenMax; i++) {
		if (mul[i] - 10 >= 0) {
			mul[i + 1] += mul[i] / 10;
			mul[i] %= 10;
		}
	}

	while (mul[lenMax] == 0)
		lenMax--;

	return lenMax;
}


int main() {
	char a[N], b[N];
	int mul[N * 2];
	int lenMax;
	while (cin >> a >> b) {
		lenMax = 大数相乘函数(mul, a, b);

		for (int i = lenMax; i >= 0; i--) {
			cout << mul[i];
		}

		cout << endl;
	}

	return 0;
}