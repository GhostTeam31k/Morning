#include <iostream>

using namespace std;

int main() {
	// ��� �迭 �ʱ�ȭ
	int resultArray[9][10] = {
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
	};

	// �迭 ��ȯ
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 10; j++) {
			if ((i % 4 == 0) || (j % 4 == 0)) {
				resultArray[i][j] = 0;
			}
			else
			{
				resultArray[i][j] = 1;
			}
		}
	}

	// ��� ���
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 10; j++) {
			cout << resultArray[i][j];
		}
		cout << endl;
	}

	return 0;
}
