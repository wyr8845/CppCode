#include <iostream>

using namespace std;

int * f(int A, int B) {
	int sum[49];

	sum[0] = 1;
	sum[1] = 1;

	for (int i = 2; i < 49; i++) {
		sum[i] = (A * sum[i - 1] + B * sum[i - 2]) % 7;
	}

	return sum;
}


int main() {
	int A;
	int B;
	int n;

	for (int i = 0; i < 100; i++) {
		cin >> A;
		cin >> B;
		cin >> n;

		if (A == 0 && B == 0 && n == 0) {
			break;
		}

		int * sum = f(A, B);

		cout << sum[(n - 1) % 49] << endl;
	}

	return 0;
}
