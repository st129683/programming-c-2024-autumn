#include <iostream>
 
int main(int argc, char* argv[])
{
    unsigned int a = 0;
    scanf("%d", &a);

    printf("The next number for the number %d is %d.\n", a, a + 1);
    printf("The previous number for the number %d is %d.\n", a, a - 1);
     
    return EXIT_SUCCESS;
}
