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

    int min_idx = 0;
    int curr_min = *a;
    for (int i = 1; i < n; ++i)
    {
        if (curr_min > *(a + i))
        {
            min_idx = i;
            curr_min = *(a + i);
        }
    }

    for (int i = min_idx; i < n; ++i)
    {
        std::cout << *(a + i) << ' ';
    }
    for (int i = 0; i < min_idx; ++i)
    {
        std::cout << *(a + i) << ' ';
    }
    free(a);

    return EXIT_SUCCESS;
}
