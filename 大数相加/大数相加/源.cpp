#include <iostream>
#define N 1000
using namespace std;

int 大数相加函数(int sum[], char stringA[], char stringB[]) {
	int a[N], b[N];
	int lenA, lenB, lenMax;

	lenA = strlen(stringA);
	lenB = strlen(stringB);

	for (int i = 0; i < N; i++) {
		a[i] = b[i] = sum[i] = 0;
	}

	for (int i = 0; i < lenA; i++) {
		a[lenA - 1 - i] = stringA[i] - '0';
	}

	for (int i = 0; i < lenB; i++) {
		b[lenB - 1 - i] = stringB[i] - '0';
	}

	if (lenA > lenB) {
		lenMax = lenA + 1;
	}
	else {
		lenMax = lenB + 1;
	}

	for (int i = 0; i < lenMax; i++) {
		sum[i] = a[i] + b[i];
	}

	for (int i = 0; i < lenMax; i++) {
		if (sum[i] - 10 >= 0) {
			sum[i + 1] += 1;
			sum[i] %= 10;
		}
	}

	while (sum[lenMax] == 0)
		lenMax--;

	return lenMax;
}


int main() {
	char a[N], b[N];
	int sum[N];
	int lenMax;
	while (cin >> a >> b) {
		lenMax = 大数相加函数(sum, a, b);

		for (int i = lenMax; i >= 0; i--) {
			cout << sum[i];
		}

		cout << endl;
	}

	return 0;
}