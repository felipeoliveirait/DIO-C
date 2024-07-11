#include <stdio.h>
#include <math.h>

int main() {
  float largura, comprimento, area, tempo;
  int tempototal;
  
  printf("Insira a largura da sala: \n");
  scanf("%f", &largura);
  printf("Insira o comprimento da sala: \n");
  scanf("%f", &comprimento);
  
  area = largura * comprimento;
  
  printf("A area da sala: %.2f metros quadrados\n", area);
  
  tempo = area / 5;
  tempototal = (int)ceil(tempo);
  
  printf("O robo devera limpar a sala em aproxidamente %.d minutos\n", tempototal);

  //TODO: Calcular a área do local e o tempo que o robo levará para limpá-lo.

  //TODO: Imprimir a saída de acordo com o enunciado deste desafio.

  return 0;
}