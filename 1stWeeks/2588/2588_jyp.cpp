#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// ��, �Ʒ� �� �ڸ� ��
	int topNumber, bottomNumber;
	// �Ʒ� �� �ڸ� �� ���� �迭
	int bottomNumberArray[3] = { '\0' };
	// ����
	int mod = 100;

	scanf("%d %d", &topNumber, &bottomNumber);

	// �Ʒ� �� �ڸ� �� �迭 �ȳ� �ֱ�
	for (int i = 0; i < 3; i++)
	{
		bottomNumberArray[i] = (bottomNumber / mod) % 10;
		mod = mod / 10;
	}

	// �迭�� �ִ� �� �ڸ� �� ���� topNumber�� ���� �ϱ�
	for (int j = 2; j >= 0; j--)
	{
		printf("%d\n", bottomNumberArray[j] * topNumber);
	}

	printf("%d\n", topNumber * bottomNumber);

	return 0;
}