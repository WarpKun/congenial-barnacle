#include <cstdio>
#include <cstdlib> 

int main()
{		
	double dolar = 5.20;
	double real = 1.0 / dolar;
	
	int opcao;
	double valor;
	
	printf("escolha a opcao desejada:\n");
	printf("1- converter real para dolar\n");
	printf("2- converter dolar para real\n");
	scanf("%d", &opcao);

	
		switch (opcao)
		{
			case 1:
				
				printf("coloque o valor em reias:");
				scanf("%lf", &valor );
				printf("Valor em dolares: %.2f\n", valor / dolar);
				break;
			
			
			case 2:
			
				printf("coloque o valor em dolar");
				scanf("%lf", &valor);
				printf("valor em real: %.2f", valor * dolar);
				break;
				
		
			default:
			
				printf("opcao invalida");
				break;
			
		
		}
	
	system("pause");
	return 0;
	
	
}
