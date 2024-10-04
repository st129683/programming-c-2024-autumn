#include <stdio.h>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	scanf("%d", &a);
	scanf("%d", &b);

	int product = a * b;

	while (b %= a)
	{
		a ^= b ^= a ^= b;
	}
	printf("%d", product / (a + b));

	return 0;
}
