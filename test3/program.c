#include <stdio.h>

/* Dla jezyka C program skompilowal sie poprawnie(bo extern dziala poprawnie), natomiast dla jezyka C++ ukazuje nie zdefiniowane wartosc "PI" oraz "E" */
static const double PI;
static const double E;


int main()
{
  printf("  PI: %f\n",PI);
  printf("   E: %f\n",E);
  return 0;
}
