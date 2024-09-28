#include <iostream>

int main(int argc, char* argv[])
{
    short x1 = 0;
    short y1 = 0;
    short x2 = 0;
    short y2 = 0;
    scanf("%d", &x1);
    scanf("%d", &y1);
    scanf("%d", &x2);
    scanf("%d", &y2);

    short dx = x2 - x1;
    short dy = y2 - y1;
    if (x1 == x2 || y1 == y2 || dx == dy || dx == -dy)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return EXIT_SUCCESS;
}
