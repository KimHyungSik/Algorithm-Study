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

	// ������ 5��� �̸�, �׳� ���� ������ 5 ���
	if (sugar % containerB == 0)
	{
		printf("%d", sugar / containerB);
		return 0;
	}

	// ���࿡ �ƴϸ�..
	else if (sugar % containerB != 0)
	{
		// ������ 5�� ����� ���� ���� tmp�� ����
		tmp = sugar % containerB;
		// ���࿡ tmp�� 3�� ����̸�
		// ���� ������ 5 + ������ �� ������ 3 ���
		if (tmp % containerA == 0)
		{
			printf("%d", (tmp / containerA) + (sugar / containerB));
			return 0;
		}

		// �ƴϸ� ������ 3����̸�, �׳� ���� ������ 3 ���
		else if (sugar % containerA == 0)
		{
			printf("%d", sugar / containerA);
			return 0;
		}
	}

	// ���� ���ǿ� �ش� ���� ������...

	// i�� ���� ���� �����ϰ�
	// i�� 3����� �� �� ���� ��� ���� �ָ���
	for(int i = sugar; i <= sugar ; i--) // i = 11
	{
			// i�� 3����� �ȴ��� üũ
			if (i % containerA == 0) // i = 6
			{
				// tmp�� �������� i�� �� ���� �����Ѵ�
				tmp = sugar - i; // tmp = 5
				// ���߿� tmp�� 5����̸� . . .
				if (tmp % containerB == 0)
				{
					// tmp ������ 5 + i ������  3 ����ϱ�
					//return 0�� ������ -1���� ��µǼ� �ʿ���
					printf("%d", (tmp / containerB) + (i / containerA)); return 0;
				}
			}
	}

	// �ƹ� ���ǿ� ���� ������ -1 ���.
	printf("-1");
	return 0;
}