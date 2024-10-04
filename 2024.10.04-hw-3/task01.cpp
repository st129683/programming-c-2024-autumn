#include <stdio.h>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf("%d", &n);

	int cnt0 = 0;
	int cnt1 = 0;
	for (int i = 0, temp; i < n; ++i)
	{
		scanf("%d", &temp);
		if (temp == 0)
		{
			++cnt0;
		}
		else
		{
			++cnt1;
		}
	}
	if (cnt0 > cnt1)
	{
		printf("%d", cnt1);
	}
	else
	{
		printf("%d", cnt0);
	}

	return 0;
}
