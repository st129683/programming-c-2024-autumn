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

    int even = 0;
    for (int i = 0; i < n; ++i)
    {
        if (*(a + i) % 2 == 0)
        {
            ++even;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if (*(a + i) % 2 != 0)
        {
            std::cout << *(a + i) << ' ';
        }
    }
    std::cout << "\n";
    for (int i = 0; i < n; ++i)
    {
        if (*(a + i) % 2 == 0)
        {
            std::cout << *(a + i) << ' ';
        }
    }
    std::cout << "\n" << ((2 * even >= n) ? "YES" : "NO");

    free(a);

    return EXIT_SUCCESS;
}
