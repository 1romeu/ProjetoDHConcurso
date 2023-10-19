#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float salario, valorPRT;
	
	printf("Hello Word!");
	printf("Bem Vindo!");
	printf("Digite um Valor: ");
	scanf("%f", &salario);
	printf("Valor da presta��o: ");
	scanf("%f", &valorPRT);
	
	if(valorPRT>salario*0.2){
		printf("Emprestimo n�o concedido!");
	
	}else{
		printf("Emprestimo concedido!");	
    }
	
	return 0;
}
 