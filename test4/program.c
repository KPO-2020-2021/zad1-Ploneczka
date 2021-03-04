#include <stdio.h>

/* Dla jezyka C caly program wyswietla sie poprawnie, a dla jezyka c++ trzeba dodac typy danych do deklaracji funkcji */
double Dodaj(double, double);


int main( )
{
  double  Skl1 = 2.0,  Skl2 = 2.0;
  double  Wynik = Dodaj(Skl1,Skl2);

  printf("  Wynik dodawania:  %f + %f = %f\n",Skl1,Skl2,Wynik);

  return 0;
}
