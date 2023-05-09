#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  // Variaveis de apoio
  int A, B, C, I;

  // Inicio dos inputs para o usuário
  printf("Digite um número real:");
  scanf("%d", &A);

  printf("Digite um número real:");
  scanf("%d", &B);

  printf("Digite um número real:");
  scanf("%d", &C);

  printf("Digite um número inteiro e positivo:");
  scanf("%d", &I);

  // Inicio das condicionais
  if ((I == 1))
  {
    if ((A < B) && (B < C))
    {
      printf("Ordem crescente:%d,%d,%d", A, B, C);
    }
    else if ((B < A) && (A < C))
    {
      printf("Ordem crescente:%d,%d,%d", B, A, C);
    }
    else if ((C < B) && (B < A))
    {
      printf("Ordem crescente:%d,%d,%d", C, B, A);
    }
    else if ((A < C) && (C < B))
    {
      printf("Ordem crescente:%d,%d,%d", A, C, B);
    }
    else if ((B < C) && (C < A))
    {
      printf("Ordem crescente:%d,%d,%d", B, C, A);
    }
    else if ((C < A) && (A < B))
    {
      printf("Ordem crescente:%d,%d,%d", C, A, B);
    }
  }
  else if ((I == 2))
  {
    if ((A > B) && (A > C))
    {
      printf("Ordem decrescente:%d,%d,%d", A, B, C);
    }
    else if ((A > C) && (C > B))
    {
      printf("Ordem decrescente:%d,%d,%d", A, C, B);
    }
    else if ((B > A) && (A > C))
    {
      printf("Ordem decrescente:%d,%d,%d", B, A, C);
    }
    else if ((B > C) && (C > A))
    {
      printf("Ordem decrescente:%d,%d,%d", B, C, A);
    }
    else if ((C > A) && (A > B))
    {
      printf("Ordem decrescente:%d,%d,%d", C, A, B);
    }
    else if ((C > B) && (B > A))
    {
      printf("Ordem decrescente:%d,%d,%d", C, B, A);
    }
  }
  else if ((I == 3))
  {
    if ((A > B) && (B > C))
    {
      printf("O maior valor entre os outros dois números:%d,%d,%d", C, A, B);
    }
    else if ((B > C) && (C > A))
    {
      printf("O maior valor entre os outros dois números:%d,%d,%d", A, B, C);
    }
    else if ((C > A) && (A > B))
    {
      printf("O maior valor entre os outros dois números:%d,%d,%d", B, C, A);
    }
  }
  else
  {
    printf("Programa não executado");
  }
  return 0;
}