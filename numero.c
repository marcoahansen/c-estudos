#include <stdio.h>
#include <math.h>

typedef struct
{
  float n;
} Numero;

float fatorial(float num)
{
  if (num < 0)
  {
    printf("Erro: Não é possível calcular o fatorial de um número negativo.\n");
    return -1; // Retorna um valor inválido para indicar erro
  }
  float resultado = 1.0;
  for (int i = 1; i <= num; ++i)
  {
    resultado *= i;
  }
  return resultado;
}

float potencia(float num, int x)
{
  return pow(num, x);
}

int parteInteira(float num)
{
  return (int)num;
}

float parteDecimal(float num)
{
  return num - parteInteira(num);
}

int main()
{
  Numero num;
  num.n = 5.5;

  printf("Fatorial de %.2f: %.2f\n", num.n, fatorial(num.n));
  printf("Potência de %.2f elevado a 2: %.2f\n", num.n, potencia(num.n, 2));
  printf("Parte inteira de %.2f: %d\n", num.n, parteInteira(num.n));
  printf("Parte decimal de %.2f: %.2f\n", num.n, parteDecimal(num.n));

  return 0;
}
