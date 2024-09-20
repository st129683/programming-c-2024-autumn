#include <iostream>
 
int main(int argc, char* argv[])
{
    int v = 0;
    int t = 0;
    scanf("%d", &v);
    scanf("%d", &t);

    printf("%d\n", ((v * t) % 109 + 109) % 109 + 1);
     
    return EXIT_SUCCESS;
}
