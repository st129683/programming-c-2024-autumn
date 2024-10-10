#include <stdio.h>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf("%d", &n);

	int a[1002] = {0};
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &a[i]);
	}
	a[n] = a[0];
	a[n + 1] = a[1];

	int mx = 0;
	for (int i = 1; i < n + 1; ++i)
	{
		if (mx < a[i - 1] + a[i] + a[i + 1])
		{
			mx = a[i - 1] + a[i] + a[i + 1];
		}
	}
	printf("%d", mx);

	return 0;
}
