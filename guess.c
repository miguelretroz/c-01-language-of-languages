#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INITIAL_POINTS 1000

int main() {
  printf("****************************************\n");
  printf("*Bem vindo ao nosso jogo de adivinhacão*\n");
  printf("****************************************\n");

  srand(time(0));
  int secretNumber = rand() % 100;

  int guess;
  int numberOfAttempts = 1;
  double losing_points = 0;

  while(1) {
    printf("\n****** Tentativa n.º%d ******\n\n", numberOfAttempts);

    printf("Qual o seu chute? ");
    scanf("%d", &guess);

    printf("\nSeu chute foi %d \n\n", guess);

    if (guess < 0) {
      printf("Você não pode chutar números negativos!\n");
      printf("Tente novamente!\n");

      continue;
    }

    if (guess == secretNumber) {
      printf("Parabéns! Voçê acertou!\n");

      break;
    } else {
      losing_points += abs(guess - secretNumber) / 2.0;

      if (guess > secretNumber) {
        printf("Seu chute foi maior que o número secreto!\n");
      } else {
        printf("Seu chute foi menor que o número secreto!\n");
      }
    }

    numberOfAttempts++;
  }
  double totalPoints = INITIAL_POINTS - losing_points;

  printf("\nForam realizadas %d tentativas.\n", numberOfAttempts);
  printf("Total de pontos: %.1f", totalPoints);
  printf("\n****** Fim de game! ******");
}
