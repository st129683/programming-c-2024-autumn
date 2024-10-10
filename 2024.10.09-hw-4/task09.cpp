#include <stdio.h>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf("%d", &n);

	int a[100] = {0};
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &a[i]);
	}

	int x = 0;
	scanf("%d", &x);

	bool flag = true;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] < x)
		{
			printf("%d", i + 1);
			flag = false;
			break;
		}
	}
	if (flag)
	{
		printf("%d", n + 1);
	}

	return 0;
}
