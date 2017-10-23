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
	if ((znak >= 'a' && znak <= 'z' ) || (znak >= 'A' && znak <= 'Z')){
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
	float min = 0;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	printf("Najveci broj je %f", max);


}

int main(){
	drugi();








	return 0;
}
