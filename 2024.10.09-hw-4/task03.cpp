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

	int mx = a[0];
	for (int i = 1; i < n; ++i)
	{
		if (a[i] > mx)
		{
			mx = a[i];
		}
	}
	int mn = a[0];
	for (int i = 1; i < n; ++i)
	{
		if (a[i] < mn)
		{
			mn = a[i];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		if (a[i] == mx)
		{
			a[i] = mn;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}

	return 0;
}

