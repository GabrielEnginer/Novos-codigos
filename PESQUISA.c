#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){

    setlocale(LC_ALL, "");

	float salario;
	int nfilho, numeroEntrevistado;
	float somaSalario, mediaSalario, maiorSalario;
	float somaFilho, mediaFilho;
	int contadorSalario, contadorFilho;
	int faixaSalarial;
	float percentualSalario;
	
	printf("informe seu sal�rio");
	scanf("%f", &salario);
	
	while(salario > 0){
		
		numeroEntrevistado = numeroEntrevistado + 1;
		
		printf("Informe o numero de filhos: ");
		scanf("%d", &nfilho);
		
		contadorSalario = contadorSalario + 1;
		
		somaSalario = somaSalario + salario;
		somaFilho = somaFilho + nfilho;
		
		if(salario > maiorSalario){
			maiorSalario = salario;
		}		
		
		if(salario <= 100){
			faixaSalarial = faixaSalarial + 1;
		}
		
		printf("\nInforme o seu salario: ");
		scanf("%f", &salario);
		
	}
	
	mediaFilho = somaFilho / contadorFilho;
	mediaSalario = somaSalario / contadorSalario;
	
	percentualSalario = (faixaSalarial * 100)/ numeroEntrevistado;
	
	printf("\n m�dia de sal�rio da popula��o: %.2f", mediaSalario);
	printf("\n m�dia de filhos da popula��o: %.2f", mediaFilho);
	printf("\n Maior de sal�rio da popula��o: %.2f", maiorSalario);
	printf("\n Percentual de sal�rios da popula��o at� R$ 100,00: %.1f", percentualSalario);
	
	return 0;
}
