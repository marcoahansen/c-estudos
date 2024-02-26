#include <stdio.h>
#include <math.h>

typedef struct
{
  int peso;
  float altura;
} alunoAcademia;

float imc(int peso, float altura)
{
  return (peso / pow(altura, 2));
}

float pesoMinimo(float altura)
{
  return (18.5 * pow(altura, 2));
}

float pesoMaximo(float altura)
{
  return (24.5 * pow(altura, 2));
}

float pesoMedio(float altura)
{
  return (pesoMinimo(altura) + pesoMaximo(altura)) / 2;
}

int main()
{
  alunoAcademia aluno;
  aluno.peso = 70;
  aluno.altura = 1.75;

  printf("IMC: %.2f\n", imc(aluno.peso, aluno.altura));
  printf("Peso mínimo: %.2f\n", pesoMinimo(aluno.altura));
  printf("Peso máximo: %.2f\n", pesoMaximo(aluno.altura));
  printf("Peso médio: %.2f\n", pesoMedio(aluno.altura));

  return 0;
}
