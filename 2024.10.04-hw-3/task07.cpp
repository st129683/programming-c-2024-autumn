#include <stdio.h>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	scanf("%d", &n);
	scanf("%d", &m);

	int a = n;
	int b = m;
	while (b %= a)
	{
		a ^= b ^= a ^= b;
	}
	printf("%d", n / (a + b));

	return 0;
}
