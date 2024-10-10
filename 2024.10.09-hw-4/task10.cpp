#include <stdio.h>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf("%d", &n);

	int a[1000] = {1};
	for (int i = 1; i < n; ++i)
	{
		a[i] = i + 1;
	}

	for (int k = 0; k < 2; ++k)
	{
		int x = 0;
		int y = 0;
		scanf("%d", &x);
		scanf("%d", &y);

		int i = x - 1;
		int j = y - 1;
		while (i < j)
		{
			a[i] ^= a[j] ^= a[i] ^= a[j];
			++i;
			--j;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}

	return 0;
}
