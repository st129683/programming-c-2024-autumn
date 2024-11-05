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

    int k = 0;
    std::cin >> k;
    k = (k % n + n) % n;

    for (int i = n - k; i < n; ++i)
    {
        std::cout << *(a + i) << " ";
    }
    for (int i = 0; i < n - k; ++i)
    {
        std::cout << *(a + i) << " ";
    }

    free(a);

    return EXIT_SUCCESS;
}
