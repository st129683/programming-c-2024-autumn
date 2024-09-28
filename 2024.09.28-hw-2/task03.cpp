#include <iostream>

int main(int argc, char* argv[])
{
    int x1 = 0;
    int y1 = 0;
    int r1 = 0;
    int x2 = 0;
    int y2 = 0;
    int r2 = 0;
    scanf("%d", &x1);
    scanf("%d", &y1);
    scanf("%d", &r1);
    scanf("%d", &x2);
    scanf("%d", &y2);
    scanf("%d", &r2);

    double d2 = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    if (d2 <= (r1 + r2) * (r1 + r2) && d2 >= (r1 - r2) * (r1 - r2))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    

    return EXIT_SUCCESS;
}
