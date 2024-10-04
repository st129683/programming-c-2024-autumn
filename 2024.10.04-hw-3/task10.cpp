#include <stdio.h>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf("%d", &n);

	int cnt = 0;
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		int t = 0;
		scanf("%d", &t);

		if (t > 0)
		{
			++cnt;
		}
		else
		{
			if (cnt > ans)
			{
				ans = cnt;
			}
			cnt = 0;
		}
	}

	if (cnt > ans)
	{
		printf("%d", cnt);
	}
	else
	{
		printf("%d", ans);
	}

	return 0;
}
