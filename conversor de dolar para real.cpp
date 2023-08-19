#include <cstdio>
#include <cstdlib> 
#include <locale>

int main()
{		
	setlocale(LC_ALL, "Portuguese");
	
	double dolar = 5.20;
	double real = 1.0 / dolar;
	
	int opcao;
	double valor;
	
	do{
			printf("       Bem vindo ao conversor!\n\n\n");
			printf("O que deseja fazer hoje?\n\n");
			printf("1-converter real para dolar\n");
			printf("2-converter dolar para real\n\n");
			printf("0-Sair\n\n");
			printf("Resposta:");
			scanf("%d", &opcao);
			system("cls");
		
			
				switch (opcao)
				{
					
					case 0:
						
						printf("obrigado por usar o nosso programa\n\n");
						break;
			
					
					case 1:
						
						printf("coloque o valor em reias: ");
						scanf("%lf", &valor );
						printf("Valor em dolares: %.2f\n\n", valor / dolar);
						system("pause");
						system("cls");
						break;
					
					
					case 2:
					
						printf("coloque o valor em dolar: ");
						scanf("%lf", &valor);
						printf("valor em real: %.2f\n\n", valor * dolar);
						system("pause");
						system("cls");
						break;
						
				
					default:
					
						printf("opçao invalida\n\n");
						system("pause");
						system("cls");
						break;
			
		
				}
		}while (opcao !=0);
		
	return 0;
	
	
}
