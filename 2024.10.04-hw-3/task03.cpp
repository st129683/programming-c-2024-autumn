#include <stdio.h>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf("%d", &n);

	bool was_crash = false;
	for (int i = 0; i < n; ++i)
	{
		int k = 0;
		scanf("%d", &k);
		if (k <= 437)
		{
			printf("Crash %d", i + 1);
			was_crash = true;
			break;
		}
	}
	if (! was_crash)
	{
		printf("No crash");
	}

	return 0;
}


