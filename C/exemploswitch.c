#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{

  int a;

  printf("Digite um numero entre 1 a 3:\n");
  scanf("%d", &a);

  switch (a)
  {
  case 1:
    printf("ola");
    break;
  case 2:
    printf("hello");
    break;
  case 3:
    printf("bonjur");
    break;
  }

  return 0;
}