#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int codigo;
	float precoFinal;
	float precoEtiqueta;  
	
	printf("Informe as condições de pagamento:");
	scanf("%d", &codigo);
	
	printf("Informe o preço da etiqueta:");
	scanf("%f", &precoEtiqueta);
	
	switch(codigo) {
		
		case 1:
		precoFinal = precoEtiqueta - (precoEtiqueta * 10 /100);
		printf("O valor a vista com 10 por cento de desconto é: %.2f",precoFinal);//não coloar o % se não, ele entende como uma variavel.
				break;
			case 2:
			precoFinal = precoEtiqueta - (precoEtiqueta * 5 /100);-
			printf("O valor a vista com 5 por cento de desconto é: %.2f",precoFinal);
					break;
				case 3:
				precoFinal = precoEtiqueta / 2;
				printf("O valor da etiqueta parcelado em duas vezes é: %.2f",precoFinal);
						break;
					case 4:
					precoFinal = (precoEtiqueta + (precoEtiqueta * 10 /100))/3;
					printf("O valor a vista com 10 por cento de juros é: %f",precoFinal);
							break;
						default:
						printf("Opção invalida");
								break;
			
	}
	
	
	return 0;
}
