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

    int res = 0;
    int curr_max = 0;
    for (int i = n - 1; i >= 0; --i)
    {
        if (*(a + i) > curr_max)
        {
            curr_max = *(a + i);
        }
        res += curr_max;
    }
    std::cout << res;

    free(a);

    return EXIT_SUCCESS;
}
