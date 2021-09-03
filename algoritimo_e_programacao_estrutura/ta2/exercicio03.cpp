#include <iostream>

int main(int argc, char** argv) {
  int contador;
  printf("Digite um valor: ");
  scanf("%d", &contador);
  for(contador; contador >= 1; contador--) {
    printf("%d ", contador);
  }
  return 0;
}
