/*  Fa�a um Programa que pe�a um n�mero e ent�o mostre a mensagem O n�mero
informado foi [n�mero].             */        

#include <stdio.h>

int main(){
	float number;
	printf("Digite um numero: ");
	scanf("%f", &number);
	printf("O numero digitado foi: %.2f", number);
	
	return 0;
	
}
