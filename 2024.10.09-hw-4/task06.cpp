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

	int p[100] = {0};
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &p[i]);
	}

	double curr_max = (double) a[0] * (double) p[0] / 100.0;
	int ans = 1;
	for (int i = 1; i < n; ++i)
	{
		double curr_tax = (double) a[i] * (double) p[i] / 100.0;
		if (curr_max < curr_tax)
		{
			curr_max = curr_tax;
			ans = i + 1;
		}
	}
	printf("%d", ans);

	return 0;
}

