#include <stdio.h>

int main() {
  char nome[50] = "Daniel";
  int idade = 22;
  float salario = 1250.75;
  float altura = 1.75;
  float peso = 65;
  double porcentagem_desconto = 2.5;
  char genero = 'M';

  printf("\n");
  printf("O nome é: %s\n", nome);
  printf("A altura é:%f\n", altura);
  printf("O peso é:%f\n", peso);
  printf("A idade é: ¨%d\n", idade);
  printf("O salário é: %f\n", salario);
  printf("O desconto é de: %lf\n", porcentagem_desconto);
  printf("O genero é: %c", genero);
  return 0;
}
  