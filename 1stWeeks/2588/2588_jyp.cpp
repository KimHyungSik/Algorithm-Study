#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 위, 아래 세 자리 수
	int topNumber, bottomNumber;
	// 아래 세 자리 수 넣을 배열
	int bottomNumberArray[3] = { '\0' };
	// 모듈로
	int mod = 100;

	scanf("%d %d", &topNumber, &bottomNumber);

	// 아래 세 자리 수 배열 안내 넣기
	for (int i = 0; i < 3; i++)
	{
		bottomNumberArray[i] = (bottomNumber / mod) % 10;
		mod = mod / 10;
	}

	// 배열에 있는 뒷 자리 수 부터 topNumber와 곱셈 하기
	for (int j = 2; j >= 0; j--)
	{
		printf("%d\n", bottomNumberArray[j] * topNumber);
	}

	printf("%d\n", topNumber * bottomNumber);

	return 0;
}