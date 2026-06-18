#include <stdio.h>
#include <stdlib.h>

int main()
{
  double a = 0.1;
  double b = 0.2;
  double c = 0.3;

      if(a + b == c)
      {
          printf("Equal\n");
      }
      else
        printf("Not equal\n");

      printf("a = %0.20lf\n", a);
      printf("b = %0.20lf\n", b);
      printf("a + b = %0.20lf\n",  a + b);
      printf("c = %0.20lf\n", c);
      return 0;
}
