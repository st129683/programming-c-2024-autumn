#include<iostream>
#include<cmath>

int main(int argc, char* argv[]) {
  int k = 0;
  int m = 0;
  int n = 0;
  int a = 0;
  int s = 0;
  scanf("%d", &k);
  scanf("%d", &m);
  scanf("%d", &n);

  if (k > n)
  {
    printf("%d", 2 * m);
  }
  else if (n % k == 0)
  {
    printf("%d", 2 * m * (n / k));
  }
  else if (((n % k) <= k / 2) && (n/k>=2))
  {
    printf("%d", 2 * m * ((n / k) - 1) + 12 * m / 4);
  }
  else if ((n % k) <= k / 2)
  {
    printf("%d", 3 * m);
  }
  else 
  {
    printf("%d", 2 * m * (n / k) + 2 * m);
  }

  return EXIT_SUCCESS;
}