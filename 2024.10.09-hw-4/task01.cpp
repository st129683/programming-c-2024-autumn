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

	int x = 0;
	scanf("%d", &x);

	int cnt = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == x)
		{
			++cnt;
		}
	}
	printf("%d", cnt);

	return 0;
}
