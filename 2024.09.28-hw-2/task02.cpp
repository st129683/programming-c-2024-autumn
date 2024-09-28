#include <iostream>

int main(int argc, char* argv[])
{
    unsigned int x = 0;
    unsigned int y = 0;
    scanf("%d", &x);
    scanf("%d", &y);

    if (x == y && x == 1)
    {
        printf("%d", 0);
    }
    else if (x == y)
    {
        printf("%d", 2);
    }
    else
    {
        printf("%d", 1);
    }

    return EXIT_SUCCESS;
}
