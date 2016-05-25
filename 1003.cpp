#include <iostream>

using namespace std;
int main() {
	int T;
	int a;
	int b;
	int sum;
	int max;
	int start;
	int end;
	int lo;

	cin >> T;

	if (T <= 0) {
		return 0;
	}

	for (int i = 0; i < T; i++) {
		cin >> a;

		for (int j = 1; j <= a; j++) {
			cin >> b;

			if (j == 1) {
				max = sum = b;
				lo = start = end = j;
			} else {
				if (b + sum < b) {
					sum = b;
					lo = j;
				} else {
					sum += b;
				}
			}

			if (sum > max) {
				max = sum;
				end = j;
				start = lo;
			}
		}

		cout << "Case " << i + 1 << ":" << endl;

		if (i < T - 1) {
			cout << max << " " << start << " " << end << endl << endl;
		} else {
			cout << max << " " << start << " " << end << endl;
		}
	}

	return 0;
}