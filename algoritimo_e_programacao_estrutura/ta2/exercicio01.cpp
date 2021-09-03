#include <iostream>

int main(int argc, char** argv) {
  float salario, inss, ir, salario_liquido;
  printf("Digite seu salário bruto: ");
  scanf("%f", &salario);
  if(salario <= 1693.72) {
    inss = salario * 0.080;
  } else if(salario >= 1693.73 && salario <= 2822.90) {
    inss = salario * 0.090;
  } else if(salario >= 2822.91 && salario < 5646.80) {
    inss = salario * 0.110;
  } else {
    inss = 621.04;
  }
  if(salario <= 1903.98) {
    ir = 0;
  } else if(salario >= 1908.99 && salario <= 2826.65) {
    ir = salario * 0.075;
  } else if(salario >= 2826.66 && salario <= 3751.05 ) {
    ir = salario * 0.150;
  } else if(salario >= 3751.06 && salario <= 4664.68) {
    ir = salario * 0.225;
  } else {
    ir = salario * 0.275;
  }
  salario_liquido = salario - inss - ir;
  printf("\n Desconto inss: %f", inss);
  printf("\n Desconto ir: %f", ir);
  printf("\n Salario liquido %f", salario_liquido);
  return 0;
}