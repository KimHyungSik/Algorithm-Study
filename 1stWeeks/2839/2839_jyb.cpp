/*
1. Deliver sugar in container
2. Container A : 3kg && container B : 5kg
3. Bring the least amount of containers
4. Which and how many containers should the delivery boy bring?
*/

#pragma warning(disable: 4996)
#include <stdio.h>

int main()
{
	int sugar, containerA = 3, containerB = 5, tmp;
	scanf("%d", &sugar);

	// 설탕이 5배수 이면, 그냥 설탕 나누기 5 출력
	if (sugar % containerB == 0)
	{
		printf("%d", sugar / containerB);
		return 0;
	}

	// 만약에 아니면..
	else if (sugar % containerB != 0)
	{
		// 설탕을 5로 나누어서 남은 값을 tmp에 저장
		tmp = sugar % containerB;
		// 만약에 tmp가 3의 배수이면
		// 설탕 나누기 5 + 나머지 값 나누기 3 출력
		if (tmp % containerA == 0)
		{
			printf("%d", (tmp / containerA) + (sugar / containerB));
			return 0;
		}

		// 아니면 설탕이 3배수이면, 그냥 설탕 나누기 3 출력
		else if (sugar % containerA == 0)
		{
			printf("%d", sugar / containerA);
			return 0;
		}
	}

	// 위에 조건에 해당 되지 안으면...

	// i가 설탕 값에 저장하고
	// i가 3배수가 될 때 까지 계속 값을 주린다
	for(int i = sugar; i <= sugar ; i--) // i = 11
	{
			// i가 3배수가 된는지 체크
			if (i % containerA == 0) // i = 6
			{
				// tmp에 설탕에서 i를 뺀 값은 저장한다
				tmp = sugar - i; // tmp = 5
				// 만야에 tmp가 5배수이면 . . .
				if (tmp % containerB == 0)
				{
					// tmp 나누기 5 + i 나누기  3 출력하기
					//return 0이 없으면 -1까지 출력되서 필요함
					printf("%d", (tmp / containerB) + (i / containerA)); return 0;
				}
			}
	}

	// 아무 조건에 맞지 안으면 -1 출력.
	printf("-1");
	return 0;
}