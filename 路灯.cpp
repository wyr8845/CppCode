#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <functional>
using namespace std;

//主程序
int main() {
	cout << setiosflags(ios::fixed) << setprecision(2);
	int n;
	int l;
	int a[1000];

	while (cin >> n >> l) {
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		sort(a, a + n, greater<int>());
		
		double d = 0;

		for (int i = 0; i < n - 1; i++) {
			d = max(d, (a[i] - a[i + 1]) / 2.0);
		}

		d = max(d, (l - a[0]) / 1.0);
		d = max(d, a[n - 1] / 1.0);

		cout << d << endl;
	}

	return 0;
}