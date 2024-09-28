#include <iostream>

int main(int argc, char* argv[])
{
    int a1 = 0;
    int b1 = 0;
    int c1 = 0;
    int a2 = 0;
    int b2 = 0;
    int c2 = 0;
    scanf("%d", &a1);
    scanf("%d", &b1);
    scanf("%d", &c1);
    scanf("%d", &a2);
    scanf("%d", &b2);
    scanf("%d", &c2);

    int min1 = std::min(a1,std::min(b1, c1));
    int max1 = std::max(a1, std::max(b1, c1));
    int avg1 = 0;
    if (min1 == a1 && min1 == b1 || min1 == b1 && min1 == c1 || min1 == a1 && min1 == c1)
    {
        avg1 = min1;
    }
    else if (max1 == a1 && max1 == b1 || max1 == b1 && max1 == c1 || max1 == a1 && max1 == c1)
    {
        avg1 = max1;
    }
    else
    {
        avg1 = (a1 != min1 && a1 != max1) ? a1 : (b1 != min1 && b1 != max1) ? b1 : c1;
    }

    int min2 = std::min(a2, std::min(b2, c2));
    int max2 = std::max(a2, std::max(b2, c2));
    int avg2 = 0;
    if (min2 == a2 && min2 == b2 || min2 == b2 && min2 == c2 || min2 == a2 && min2 == c2)
    {
        avg2 = min2;
    }
    else if (max2 == a2 && max2 == b2 || max2 == b2 && max2 == c2 || max2 == a2 && max2 == c2)
    {
        avg2 = max2;
    }
    else
    {
        avg2 = (a2 != min2 && a2 != max2) ? a2 : (b2 != min2 && b2 != max2) ? b2 : c2;
    }

    if (min1 == min2 && avg1 == avg2 && max1 == max2)
    {
        printf("Boxes are equal");
    }
    else if (min1 >= min2 && avg1 >= avg2 && max1 >= max2)
    {
        printf("The first box is larger than the second one");
    }
    else if (min2 >= min1 && avg2 >= avg1 && max2 >= max1)
    {
        printf("The first box is smaller than the second one");
    }
    else
    {
        printf("Boxes are incomparable");
    }

    return EXIT_SUCCESS;
}
