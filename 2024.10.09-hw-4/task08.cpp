#include <stdio.h>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf("%d", &n);

	int a[1000] = {0};
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &a[i]);
	}

	int m = 0;
	scanf("%d", &m);

	for (int i = 0; i < m; ++i)
	{
		int x = 0;
		int y = 0;
		scanf("%d", &x);
		scanf("%d", &y);

		for (int j = x - 1; j < y; ++j)
		{
			printf("%d ", a[j]);
		}
		printf("\n");
	}

	return 0;
}
