#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INITIAL_POINTS 1000

int main() {
  printf("****************************************\n");
  printf("*Bem vindo ao nosso jogo de adivinhacão*\n");
  printf("****************************************\n\n");

  srand(time(0));
  int secretNumber = rand() % 100;

  int guess;
  int attemptsMade = 1;
  double losing_points = 0;

  int level;
  while(1) {
    printf("Qual o nível de dificuldade?\n");
    printf("(1)-Fácil (2)-Médio (3)-Difícil\n\n");
    printf("Escolha: ");
    scanf("%d", &level);

    if (level == 1 || level == 2 || level == 3) {
      break;
    }

    printf("\nOpção inexistente!\n");
    printf("Tente novamente!\n\n");
  }

  int attemptsNumber;
  switch(level) {
    case 1:
      attemptsNumber = 20;
      break;
    case 2:
      attemptsNumber = 15;
      break;
    default:
      attemptsNumber = 5;
  }

  for(int attempt = 1; attempt < attemptsNumber; attempt++) {
    printf("\n****** Tentativa n.º%d de %d ******\n\n", attempt, attemptsNumber);

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

    attemptsMade++;
  }
  double totalPoints = INITIAL_POINTS - losing_points;

  printf("\nForam realizadas %d tentativas.\n", attemptsMade);
  printf("Total de pontos: %.1f\n\n", totalPoints);

  printf("****** Fim de game! ******");
}
