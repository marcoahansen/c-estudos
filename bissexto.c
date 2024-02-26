#include <stdio.h>

int bissexto(int ano)
{
  if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0))
  {
    return 1;
  }
  return 0;
}

int anosBissextos(int anoInicial, int anoFinal)
{
  int anosBissextos = 0;
  for (int i = anoInicial; i <= anoFinal; ++i)
  {
    if (bissexto(i))
    {
      ++anosBissextos;
    }
  }
  return anosBissextos;
}

int menu()
{
  int opcao;
  printf("1 - Verificar se um ano é bissexto\n");
  printf("2 - Contar anos bissextos em um intervalo\n");
  printf("3 - Sair\n");
  printf("Escolha uma opção: ");
  scanf("%d", &opcao);
  return opcao;
}

int main()
{
  int opcao;
  do
  {
    opcao = menu();
    switch (opcao)
    {
    case 1:
    {
      int ano;
      printf("Digite um ano: ");
      scanf("%d", &ano);
      if (bissexto(ano))
      {
        printf("%d é bissexto.\n", ano);
      }
      else
      {
        printf("%d não é bissexto.\n", ano);
      }
      break;
    }
    case 2:
    {
      int anoInicial, anoFinal;
      printf("Digite o ano inicial: ");
      scanf("%d", &anoInicial);
      printf("Digite o ano final: ");
      scanf("%d", &anoFinal);
      printf("Anos bissextos entre %d e %d: %d\n", anoInicial, anoFinal, anosBissextos(anoInicial, anoFinal));
      break;
    }
    case 3:
      printf("Saindo...\n");
      break;
    default:
      printf("Opção inválida.\n");
      break;
    }
  } while (opcao != 3);
  return 0;
}