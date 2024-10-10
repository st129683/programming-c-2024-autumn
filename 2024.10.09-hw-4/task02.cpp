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

	int l = 0;
	int r = 0;
	scanf("%d", &l);
	scanf("%d", &r);

	int curr_max = a[l - 1];
	int idx = l;
	for (int i = l; i < r; ++i)
	{
		if (a[i] > curr_max)
		{
			curr_max = a[i];
			idx = i + 1;
		}
	}
	printf("%d %d", curr_max, idx);

	return 0;
}
