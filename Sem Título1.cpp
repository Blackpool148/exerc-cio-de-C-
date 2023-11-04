/*  Faça um Programa que peça um número e então mostre a mensagem O número
informado foi [número].             */        

#include <stdio.h>

int main(){
	float number;
	printf("Digite um numero: ");
	scanf("%f", &number);
	printf("O numero digitado foi: %.2f", number);
	
	return 0;
	
}
