#include <iostream>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    int n = 0;
    int m = 0;
    std::cin >> n;
    std::cin >> m;

    int curr_max = 0;
    int curr_min = 100000;
    int* a = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i)
    {
        int temp = 0;
        std::cin >> temp;
        *(a + i) = temp;
        if (curr_max < temp)
        {
            curr_max = temp;
        }
        if (curr_min > temp)
        {
            curr_min = temp;
        }
    }

    int* b = (int*)malloc(m * sizeof(int));
    for (int i = 0; i < m; ++i)
    {
        int temp = 0;
        std::cin >> temp;
        *(b + i) = temp;
        if (curr_max < temp)
        {
            curr_max = temp;
        }
        if (curr_min > temp)
        {
            curr_min = temp;
        }
    }

    ++curr_max;
    int* res = (int*)calloc(curr_max, sizeof(int));

    for (int i = 0; i < n; ++i)
    {
        int temp = *(a + i);
        *(res + temp) = 1;
    }
    for (int i = 0; i < m; ++i)
    {
        int temp = *(b + i);
        if (*(res + temp) == 1)
        {
            *(res + temp) = 2;
        }
    }

    for (int i = curr_min; i < curr_max; ++i)
    {
        if (*(res + i) == 2)
        {
            std::cout << i << ' ';
        }
    }

    free(a);
    free(b);
    free(res);

    return EXIT_SUCCESS;
}
