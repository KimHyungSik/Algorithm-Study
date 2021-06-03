#include <stdio.h>

int main(void)
{
	for (int i = 0; ; )
	{
		int result = 0;
		int L = 0, P = 0, V = 0;

		scanf("%d %d %d", &L, &P, &V);

		if (L == 0 && P == 0 && V == 0) break;

		while (V > 0)
		{
			V -= P;
			if (V >= 0)
				result += L;
			else if (V < 0)
			{
				result += (P + V < L) ? (P + V) : L;
				break;
			}
		}

		printf("Case %d: %d\n", ++i, result);
	}

	return 0;
}