#include <stdio.h>

int main() {
  printf("****************************************\n");
  printf("*Bem vindo ao nosso jogo de adivinhacão*\n");
  printf("****************************************\n");

  int secretNumber = 42;

  int guess;

  printf("Qual o seu chute? ");
  scanf("%d", &guess);

  printf("\n...\n\n");
  printf("Seu chute foi %d\n", guess);

  if (guess == secretNumber) {
    printf("Parabéns! Voçê acertou!\n");
  } else {
    if (guess > secretNumber) {
      printf("Seu chute foi maior que o número secreto!\n");
    } else {
      printf("Seu chute foi menor que o número secreto!\n");
    }
  }
}
