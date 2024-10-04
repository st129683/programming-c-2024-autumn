#include <stdio.h>

int main(int argc, char* argv[])
{
	int k = 0;
	scanf("%d", &k);

	for (int i = 0; i < k; ++i)
	{
		int n = 0;
		int m = 0;
		scanf("%d", &n);
		scanf("%d", &m);
		printf("%d\n", 19 * m + (n + 239) * (n + 366) / 2);
	}

	return 0;
}
