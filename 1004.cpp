#include <iostream>
#include <string>

using namespace std;
int main() {
	string str[1000];
	int num[1000];
	int N;
	int max;
	int x;

	while(1) {
		max = 1;
		x = 0;

		cin >> N;

		if (N <= 0 || N > 1000) {
			break;
		}

		for (int i = 0; i < N; i++) {
			cin >> str[i];
			num[i] = 1;
		}

		for (int i = 0; i < N - 1; i++) {
			if (num[i] == 0) {
				continue;
			}

			for (int j = i + 1; j < N; j++) {
				if (num[j] == 0) {
					continue;
				}

				if (str[i] == str[j]) {
					num[i]++;
					num[j]--;

					if (num[i] > max) {
						x = i;
						max = num[i];
					}
				}
			}
		}

		cout << str[x] << endl;
	}

	return 0;
}