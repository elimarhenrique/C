#include <math.h>
#include <stdio.h>

int main ()
{
  // Qual a saida do programa se a=3 e b = 4.
  int a, b;
  double h;
  scanf ("%d %d", &a, &b);
  printf ("pow a %.2f\n", pow (a, 2));
  printf ("pow b %.2f\n", pow (b, 2));
  h = sqrt (pow (a, 2) + pow (b, 2));
  h = pow (a, 2);
  printf ("%.21f\n", h);


  return 0;
}
