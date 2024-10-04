#include <stdio.h>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf("%d", &n);

	int curr_max = 0;
	int ans = -1;
	for (int i = 0; i < n; ++i)
	{
		int v = 0;
		int s = 0;
		scanf("%d", &v);
		scanf("%d", &s);
		if (s == 1 && v > curr_max)
		{
			curr_max = v;
			ans = i + 1;
		}
	}
	printf("%d", ans);

	return 0;
}

