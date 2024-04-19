#include<stdio.h>

int main (void){

float real;
float dolar;
float euro;
int esc;
float conv;

printf("Converso de moeda 1 para dolar 2 para euro: ");
scanf("%d", &esc);

switch (esc){
	case 1:
	printf("Digite o valor em reais: ");
	scanf("%f", &real);
	printf("Digite a cotação do dolar hoje: ");
	scanf("%f", &dolar);
	conv = real / dolar;
	printf("O valor convertido é de  %f dolares", conv);

	case 2:
        printf("Digite o valor em reais: ");
        scanf("%f", &real);
        printf("Digite a cotação do euro hoje: ");
        scanf("%f", &euro);
        conv = real / euro;
        printf("O valor convertido é de  %f euros", conv);
}
return 0;
}
