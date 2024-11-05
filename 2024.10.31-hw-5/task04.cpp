#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    std::cin >> n;

    int* a = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i)
    {
        std::cin >> *(a + i);
    }

    int sum_pos = 0;
    for (int i = 0; i < n; ++i)
    {
        if (*(a + i) > 0)
        {
            sum_pos += *(a + i);
        }
    }

    int idx_min = 0;
    int curr_min = *a;
    int idx_max = 0;
    int curr_max = *a;
    for (int i = 0; i < n; ++i)
    {
        int temp = *(a + i);
        if (curr_min > temp)
        {
            curr_min = temp;
            idx_min = i;
        }
        if (curr_max < temp)
        {
            curr_max = temp;
            idx_max = i;
        }
    }

    if (idx_min > idx_max)
    {
        idx_min ^= idx_max ^= idx_min ^= idx_max;
    }

    int prod_btw = 1;
    for (int i = idx_min + 1; i < idx_max; ++i)
    {
        prod_btw *= *(a + i);
    }

    std::cout << sum_pos << ' ' << prod_btw;

    free(a);

    return EXIT_SUCCESS;
}
