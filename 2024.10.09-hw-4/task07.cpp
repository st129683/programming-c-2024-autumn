#include <stdio.h>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf("%d", &n);

	int a[1000] = {0};
	for (int i = n - 1; i >= 0; --i)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}

	return 0;
}
