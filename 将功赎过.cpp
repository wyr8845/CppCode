#include <iostream>
#include <string>
using namespace std;

//主程序
int main() {
	int l, r, m;

	while (cin >> l >> r >> m) {
		int sum = 0;
		for (int i = l; i <= r; i++) {
			int j = i, count = 0;
			while (j > 0) {
				if (j & 1) {
					count++;
				}
				j >>= 1;
			}

			if (count == m) {
				sum++;
			}
		}

		if (sum > 0) {
			cout << sum << endl;
		} else {
			cout << -1 << endl;
		}
	}

	return 0;
}