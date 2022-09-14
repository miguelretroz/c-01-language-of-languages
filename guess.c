#include <stdio.h>

int main() {
  printf("****************************************\n");
  printf("*Bem vindo ao nosso jogo de adivinhacão*\n");
  printf("****************************************\n");

  int secretNumber = 42;

  int guess;

  for(int i = 1; i <= 3; i++) {
    printf("\n*** Tentativa %d de 3 ***\n", i);

    printf("Qual o seu chute? ");
    scanf("%d", &guess);

    printf("\nSeu chute foi %d\n", guess);

    if (guess == secretNumber) {
      printf("Parabéns! Voçê acertou!\n");

      break;
    } else {
      if (guess > secretNumber) {
        printf("Seu chute foi maior que o número secreto!\n");
      } else {
        printf("Seu chute foi menor que o número secreto!\n");
      }
    }
  }

  printf("\n*** Fim de game! ***");
}
