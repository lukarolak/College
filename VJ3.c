#include <conio.h>
#include <stdio.h>
#include <math.h>


void prvi(){
	int a, b;
	scanf("%d %d", &a, &b);
	if (a > b)
		printf("%d \n", a);
	else
		printf("%d \n", b);
	if (a % 2 == 0)
		printf("a je paran \n");
	else
		printf("a je neparan \n", a);
	if (b % 2 == 0)
		printf("b je paran \n");
	else
		printf("b je neparan \n", a);
	if (a > 0)
		printf("a je veci od nule \n");
	if (b > 0)
		printf("b je veci od nule \n");
	getch();

}

void drugi(){
	char znak = getch();
	if ((znak >= 'a' && znak <= 'z') || (znak >= 'A' && znak <= 'Z')){
		printf("slovo je");
		if (znak >= 'a' && znak <= 'z')
			printf(" malo ");
		else
			printf(" veliko ");

	}
	else
		if (znak >= '0' && znak <= '9')
			printf(" broj je ");
		else
			printf(" znak je ");
	getch();
}

void treci(){
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	float max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	printf("Najveci broj je %f \n", max);
	float vrijednost = 0;
	if (fabs(a - vrijednost)<fabs(b - vrijednost) && fabs(a - vrijednost)<fabs(c - vrijednost))
		printf("najblizi broj %f je %f", vrijednost, a);
	if (fabs(b - vrijednost)<fabs(a - vrijednost) && fabs(b - vrijednost)<fabs(c - vrijednost))
		printf("najblizi broj %f je %f", vrijednost, b);
	if (fabs(c - vrijednost)<fabs(a - vrijednost) && fabs(c - vrijednost)<fabs(b - vrijednost))
		printf("najblizi broj %f je %f", vrijednost, b);
	getch();


}
void cetvrti(){
	char ocj = getch();
	if (ocj == '1')
		printf("jedan");
	else if (ocj == '2')
		printf("dva");
	else if (ocj == '3')
		printf("tri");
	else if (ocj == '4')
		printf("cetri");
	else 
		printf("pet");
	printf("\n");
	switch (ocj){
	case '1':
		printf("jedan"); break;
	case '2':
		printf("dva"); break;
	case '3':
		printf("tri"); break;
	case '4':
		printf("cetri"); break;
	case '5':
		printf("pet"); break;

	}
	getch();

}
void peti(){
	int upis; 
	scanf("%d", &upis);
	int brojac = 1;
	while (upis / 10 != 0){
		brojac++;
		upis /= 10;
	}
	printf("broj ima %d znamenki", brojac);
	getch();
}
void sesti(){
	char dan = getch();
	switch (dan){
		case '1':
		printf("pon"); break;
		case '2':
		printf("uto"); break;
		case '3':
		printf("sri"); break;
		case '4':
		printf("cet"); break;
		case '5':
		printf("pet"); break;
		case '6':
		printf("sub"); break;
		case '7':
		printf("ned"); break;
	}
	getch();

}
void sedmi(){
	int a, b, c;
	scanf("%d %d %d", a, b, c);
	float d = b*b - 4 * a*c;
	printf("%d \n", (-b + sqrt(d) / 2 * a));
	printf("%d", (-b - sqrt(d) / 2 * a));
}

int main(){
	sesti();


	return 0;
}
