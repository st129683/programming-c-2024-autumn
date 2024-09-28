#include <iostream>

int main(int argc, char* argv[])
{
    int l1 = 0;
    int w1 = 0;
    int h1 = 0;
    int l2 = 0;
    int w2 = 0;
    int h2 = 0;
    int lc = 0;
    int wc = 0;
    int hc = 0;
    scanf("%d", &l1);
    scanf("%d", &w1);
    scanf("%d", &h1);
    scanf("%d", &l2);
    scanf("%d", &w2);
    scanf("%d", &h2);
    scanf("%d", &lc);
    scanf("%d", &wc);
    scanf("%d", &hc);

    if (l1 < w1)
    {
        std::swap(l1, w1);
    }
    if (l2 < w2)
    {
        std::swap(l2, w2);
    }
    if (lc < wc)
    {
        std::swap(lc, wc);
    }

    if (h1 + h2 <= hc && l1 <= lc && w1 <= wc && l2 <= lc && w2 <= wc) 
    {
        printf("YES\n");
    }
    else if (l1 <= lc && w1 <= wc && l2 <= lc && w2 <= wc && h1 <= hc && h2 <= hc)
    {
        if (l1 <= lc && w1 <= wc)
        {
            if ((l2 <= wc - w1 && w2 <= lc) || (w2 <= wc - w1 && l2 <= lc)
                ||
                (l2 <= lc - l1 && w2 <= wc) || (w2 <= lc - l1 && l2 <= wc))
            {
                printf("YES\n");
            }
            else if (w1 <= lc && l1 <= wc)
            {
                if ((l2 <= wc - l1 && w2 <= lc) || (l2 <= lc && w2 <= wc - l1)
                    ||
                    (l2 <= lc - w1 && w2 <= wc) || (w2 <= lc - w1 && l2 <= wc))
                {
                    printf("YES\n");
                }
                else
                {
                    printf("NO\n");
                }
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            printf("NO\n");
        }
    }
    else
    {
        printf("NO\n");
    }

    return EXIT_SUCCESS;
}
