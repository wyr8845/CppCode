#include <iostream>
#include <string>
using namespace std;

char ch[5][1000];
int pos;

//数字变成5*3的样子
void change(int num) {
	switch (num) {
	case 0:
		ch[0][pos] = ' '; ch[0][pos + 1] = '-'; ch[0][pos + 2] = ' ';
		ch[1][pos] = '|'; ch[1][pos + 1] = ' '; ch[1][pos + 2] = '|';
		ch[2][pos] = ' '; ch[2][pos + 1] = ' '; ch[2][pos + 2] = ' ';
		ch[3][pos] = '|'; ch[3][pos + 1] = ' '; ch[3][pos + 2] = '|';
		ch[4][pos] = ' '; ch[4][pos + 1] = '-'; ch[4][pos + 2] = ' ';
		pos = pos + 3;
		break;
	case 1:
		ch[0][pos] = ' '; ch[0][pos + 1] = ' '; ch[0][pos + 2] = ' ';
		ch[1][pos] = ' '; ch[1][pos + 1] = ' '; ch[1][pos + 2] = '|';
		ch[2][pos] = ' '; ch[2][pos + 1] = ' '; ch[2][pos + 2] = ' ';
		ch[3][pos] = ' '; ch[3][pos + 1] = ' '; ch[3][pos + 2] = '|';
		ch[4][pos] = ' '; ch[4][pos + 1] = ' '; ch[4][pos + 2] = ' ';
		pos = pos + 3;
		break;
	case 2:
		ch[0][pos] = ' '; ch[0][pos + 1] = '-'; ch[0][pos + 2] = ' ';
		ch[1][pos] = ' '; ch[1][pos + 1] = ' '; ch[1][pos + 2] = '|';
		ch[2][pos] = ' '; ch[2][pos + 1] = '-'; ch[2][pos + 2] = ' ';
		ch[3][pos] = '|'; ch[3][pos + 1] = ' '; ch[3][pos + 2] = ' ';
		ch[4][pos] = ' '; ch[4][pos + 1] = '-'; ch[4][pos + 2] = ' ';
		pos = pos + 3;
		break;
	case 3:
		ch[0][pos] = ' '; ch[0][pos + 1] = '-'; ch[0][pos + 2] = ' ';
		ch[1][pos] = ' '; ch[1][pos + 1] = ' '; ch[1][pos + 2] = '|';
		ch[2][pos] = ' '; ch[2][pos + 1] = '-'; ch[2][pos + 2] = ' ';
		ch[3][pos] = ' '; ch[3][pos + 1] = ' '; ch[3][pos + 2] = '|';
		ch[4][pos] = ' '; ch[4][pos + 1] = '-'; ch[4][pos + 2] = ' ';
		pos = pos + 3;
		break;
	case 4:
		ch[0][pos] = ' '; ch[0][pos + 1] = ' '; ch[0][pos + 2] = ' ';
		ch[1][pos] = '|'; ch[1][pos + 1] = ' '; ch[1][pos + 2] = '|';
		ch[2][pos] = ' '; ch[2][pos + 1] = '-'; ch[2][pos + 2] = ' ';
		ch[3][pos] = ' '; ch[3][pos + 1] = ' '; ch[3][pos + 2] = '|';
		ch[4][pos] = ' '; ch[4][pos + 1] = ' '; ch[4][pos + 2] = ' ';
		pos = pos + 3;
		break;
	case 5:
		ch[0][pos] = ' '; ch[0][pos + 1] = '-'; ch[0][pos + 2] = ' ';
		ch[1][pos] = '|'; ch[1][pos + 1] = ' '; ch[1][pos + 2] = ' ';
		ch[2][pos] = ' '; ch[2][pos + 1] = '-'; ch[2][pos + 2] = ' ';
		ch[3][pos] = ' '; ch[3][pos + 1] = ' '; ch[3][pos + 2] = '|';
		ch[4][pos] = ' '; ch[4][pos + 1] = '-'; ch[4][pos + 2] = ' ';
		pos = pos + 3;
		break;
	case 6:
		ch[0][pos] = ' '; ch[0][pos + 1] = '-'; ch[0][pos + 2] = ' ';
		ch[1][pos] = '|'; ch[1][pos + 1] = ' '; ch[1][pos + 2] = ' ';
		ch[2][pos] = ' '; ch[2][pos + 1] = '-'; ch[2][pos + 2] = ' ';
		ch[3][pos] = '|'; ch[3][pos + 1] = ' '; ch[3][pos + 2] = '|';
		ch[4][pos] = ' '; ch[4][pos + 1] = '-'; ch[4][pos + 2] = ' ';
		pos = pos + 3;
		break;
	case 7:
		ch[0][pos] = ' '; ch[0][pos + 1] = '-'; ch[0][pos + 2] = ' ';
		ch[1][pos] = ' '; ch[1][pos + 1] = ' '; ch[1][pos + 2] = '|';
		ch[2][pos] = ' '; ch[2][pos + 1] = ' '; ch[2][pos + 2] = ' ';
		ch[3][pos] = ' '; ch[3][pos + 1] = ' '; ch[3][pos + 2] = '|';
		ch[4][pos] = ' '; ch[4][pos + 1] = ' '; ch[4][pos + 2] = ' ';
		pos = pos + 3;
		break;
	case 8:
		ch[0][pos] = ' '; ch[0][pos + 1] = '-'; ch[0][pos + 2] = ' ';
		ch[1][pos] = '|'; ch[1][pos + 1] = ' '; ch[1][pos + 2] = '|';
		ch[2][pos] = ' '; ch[2][pos + 1] = '-'; ch[2][pos + 2] = ' ';
		ch[3][pos] = '|'; ch[3][pos + 1] = ' '; ch[3][pos + 2] = '|';
		ch[4][pos] = ' '; ch[4][pos + 1] = '-'; ch[4][pos + 2] = ' ';
		pos = pos + 3;
		break;
	case 9:
		ch[0][pos] = ' '; ch[0][pos + 1] = '-'; ch[0][pos + 2] = ' ';
		ch[1][pos] = '|'; ch[1][pos + 1] = ' '; ch[1][pos + 2] = '|';
		ch[2][pos] = ' '; ch[2][pos + 1] = '-'; ch[2][pos + 2] = ' ';
		ch[3][pos] = ' '; ch[3][pos + 1] = ' '; ch[3][pos + 2] = '|';
		ch[4][pos] = ' '; ch[4][pos + 1] = '-'; ch[4][pos + 2] = ' ';
		pos = pos + 3;
		break;
	default:
		break;
	}
}

//设置乘号*
void multiSign() {
	ch[0][pos] = ' ';
	ch[1][pos] = ' ';
	ch[2][pos] = '*';
	ch[3][pos] = ' ';
	ch[4][pos] = ' ';
	pos = pos + 1;
}

//设置终结\0
void endSign() {
	ch[0][pos] = '\0';
	ch[1][pos] = '\0';
	ch[2][pos] = '\0';
	ch[3][pos] = '\0';
	ch[4][pos] = '\0';
}

//分解
void decomposition(int num) {
	bool flag = false;

	for (int i = 2; num > 1;) {
		if (num % i == 0) {
			if (flag) {
				multiSign();
			} else {
				flag = true;
			}

			int temp = i;
			int j = 1;

			while (temp / j / 10 != 0) {
				j *= 10;
			}

			for (; j >= 1; j /= 10) {
				change(temp / j);
				temp %= j;
			}
			
			num = num / i;
		} else {
			i++;
		}
	}
	endSign();
}

//输出最终变形数字
void print() {
	for (int i = 0; i < 5; i++) {
		cout << ch[i] << endl;
	}
}

//主程序
int main() {
	int num;
	
	while (cin >> num) {
		pos = 0;
		decomposition(num);
		print();
	}

	return 0;
}