#include <stdio.h>
#include <cmath>

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

	int eps = std::abs(a[0] - x);
	int ans = a[0];
	for (int i = 1; i < n; ++i)
	{
		if (std::abs(a[i] - x) < eps || std::abs(a[i] - x) == eps and a[i] < ans)
		{
			eps = std::abs(a[i] - x);
			ans = a[i];
		}
	}
	printf("%d", ans);

	return 0;
}

