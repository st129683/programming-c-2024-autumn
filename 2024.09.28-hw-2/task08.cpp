#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    int m = 0;
    scanf("%d", &n);
    scanf("%d", &m);

    if (n == 1 || m == 1)
    {
        printf("%d\n", 4 * n * m);
    }
    else
    {
        int ans = (n + 2) * m + n * (m + 2);
        if (n % 2 == 1 && m % 2 == 1)
        {
            ans -= 2;
        }
        printf("%d\n", ans);
    }

    return EXIT_SUCCESS;
}