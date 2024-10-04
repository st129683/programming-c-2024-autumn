#include <stdio.h>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf("%d", &n);

	int cnt = 0;
	for (int i = 0; i < n * n; ++i)
	{
		int j = 0;
		scanf("%d", &j);
		if (j == 1)
		{
			++cnt;
		}
	}
	printf("%d", cnt / 2);

	return 0;
}

