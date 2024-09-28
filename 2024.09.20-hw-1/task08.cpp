#include <iostream>

int main(int argc, char* argv[])
{
    unsigned short n = 0;
    scanf("%d", &n);

    printf("%d\n", n % 10 + ((n / 10) % 10) + ((n / 100) % 10));

    return EXIT_SUCCESS;
}