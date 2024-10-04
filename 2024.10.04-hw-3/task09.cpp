#include <stdio.h>

int main(int argc, char* argv[])
{
	long long a = 0;
	long long b = 0;
	long long c = 0;
	long long d = 0;
	scanf("%lld", &a);
	scanf("%lld", &b);
	scanf("%lld", &c);
	scanf("%lld", &d);

	for (long long i = -100; i < 101; ++i)
	{
		if (a * i * i * i + b * i * i + c * i + d == 0)
		{
			printf("%lld ", i);
		}
	}

	return 0;
}
