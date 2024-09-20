#include <iostream>

int main(int argc, char* argv[])
{
    unsigned short h = 0;
    unsigned short a = 0;
    unsigned short b = 0;
    scanf("%d", &h);
    scanf("%d", &a);
    scanf("%d", &b);

    printf("%d\n", (a >= h) + (a < h) * ((h + a - 2*b - 1) / (a - b)));

    return EXIT_SUCCESS;
}
