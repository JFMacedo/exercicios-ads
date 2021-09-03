#include <iostream>

int main(int argc, char** argv) {
  float nota01;
  float nota02;
  float media;

  printf("Insira nota 01: ");
  scanf("%f", &nota01);

  printf("Insira nota 02: ");
  scanf("%f", &nota02);

  media = (nota01 + nota02) / 2;

  printf("Média: %f", media);

  return 0;
}
