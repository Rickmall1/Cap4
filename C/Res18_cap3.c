#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  float x, y, z;

  x = 50;
  y = 5;
  z = 7;

  if ((x < y + z) && (y < +x + z) && (z < x + y))
  {
    if ((x == y) && (y == z))
    {
      printf("Triangulo equitalero");
    }
    else if ((x == z) || (x == y) || (y == z))
    {
      printf("Triangulo isósceles");
    }
    else if ((x != z) && (x != y) && (z != y))
    {
      printf("Triangulo escaleno");
    }
  }
  else
  {
    printf("Não foi possível formar um triangulo");
  }

  return 0;
}