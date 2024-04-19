#include <stdio.h>

int main (void)
{
	int esc;
	float litro;
	float preço;
	float vf;

	printf("Digite 1 para alcool e 2 para gasolina: ");
	scanf("%i", &esc);

switch(esc){
	case 1:
	printf("Digite a quanto litros de alcus: ");
	scanf("%f,", &litro);
	if (litro <= 20){
	vf = (litro * 3.39) - (litro * 3.39 * 0.03);
	printf("o valor final do alcool sera: %f ", vf);
	}
	else if (litro > 20 ) {
	vf = (litro * 3.39) - (litro * 3.39 * 0.05);
	printf ("o valor final do alcool sera: %f", vf);}
        case 2:
        printf("Digite a quanto litros de gaza: ");
        scanf("%f,", &litro);
        if (litro <= 20){
        vf = (litro * 5.39) - (litro * 5.39 * 0.04);
        printf("o valor final da gasosa sera: %f ", vf);
        }
        else if (litro > 20 ) {
        vf = (litro * 3.39) - (litro * 3.39 * 0.06);
        printf ("o valor final da gasosa sera: %f", vf); }
}



}
