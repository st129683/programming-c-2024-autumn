#include <stdio.h>

int main(int argc, char* argv[])
{
        int x = 0;
        int y = 0;
        scanf("%d", &x);
        scanf("%d", &y);

        while (y %= x)
        {
                x ^= y ^= x ^= y;
        }

        int fib0 = 0;
        int fib1 = 1;
        for (int i = 2; i <= x + y; ++i)
        {
                fib1 += fib0;
                fib0 = fib1 - fib0;
		fib1 %= 1000000000;
        }
        printf("%d", fib1);

        return 0;
}
