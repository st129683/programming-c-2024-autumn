#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf("%d", &n);

    int cnt = (3 * n + 4) / 5;
    int baz = 2 * n - 3 * cnt;
    int alice = 5 * cnt - 3 * n;
    printf("%d %d", baz, alice);

    return EXIT_SUCCESS;
}
