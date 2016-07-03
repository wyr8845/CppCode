#include <iostream>

using namespace std;
int main() {
	int T;
	int N;
	int a[1000];
	int temp;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> N;

		for (int j = 0; j < N; j++) {
			cin >> a[j];
		}

		for (int x = 0; x < N - 1; x++) {
			for (int y = x + 1; y < N; y++) {
				if (a[x] > a[y]) {
					temp = a[x];
					a[x] = a[y];
					a[y] = temp;
				}
			}
		}
		
		for (int k = 0; k < N - 1; k++) {
			cout << a[k] << " ";
		}

		cout << a[N - 1] << endl;
	}

	return 0;
}
