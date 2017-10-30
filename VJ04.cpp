#include <conio.h>
#include <stdio.h>
#include <math.h>

void Prvi(){
	int upis;
	scanf("%d", &upis);
	printf("a) ");
	int i = 0, suma = 0;
	while (i <= upis){
		suma += i;
		i++;
	}
	printf("%d \n", suma);

	printf("b) ");
	i = 0;
	suma = 0;
	while (i <= upis){
		if (i%2 == 0)
		suma += i;
		i++;
	}
	printf("%d \n", suma);

	printf("c) ");
	i = 0;
	suma = 0;
	while (i <= upis){
		if (i % 2 == 0)
			suma += i;
		i++;
	}
	printf("%d \n", suma/i);

	printf("d) ");
	i = 0;
	suma = 0;
	while (i <= upis){
		suma += i*i;
		i++;
	}
	printf("%d \n", suma);
	getch();
}
void Drugi(){
	int upis = 1;
	int suma = 0;
	int max = 0;
	int min = 10000;
	while (upis){
		scanf("%d", &upis);
		if (upis == 0)
			break;
		suma += upis;
		if (upis > max) 
			max = upis;
		if (min > upis)
			min = upis;
	}
	printf("Zbroj: %d \n", suma);
	printf("Najveci: %d \n", max);
	printf("Najmanji: %d \n", min);
	getch();
}
void Treci(){
	float i = 1.;
	float suma = 0;
	while (i <= 1000){
		suma += 1 / i;
		i = i + 1.;
	}
	printf("%f", suma);
	getch();
}
int fakrotrjela(int upis){
	int brojac = 1;
	int ispis = 1;
	while (brojac <= upis){
		ispis *= brojac;
		brojac++;
	}
	return ispis;
}
void Cetvrti(){
	int upis;
	scanf("%d", &upis);
	printf("%d", fakrotrjela(upis));
	int brojac = 1;
	float ispis = 1;
	while (brojac <= upis){
		ispis += 1/(float)fakrotrjela(upis);
		brojac++;
	}
	printf("\n %f", ispis);
	getch();
}
void Sesti(){
	int upis;
	scanf("%d", &upis);
	while (upis){
		printf("%d ", upis % 2);
		upis /= 2;
	}
	
	getch();
}
void Sedmi(){
	int a, b, brojac;
	scanf("%d %d", &a, &b);
	brojac = a;
	while (brojac < b){
		printf("%d \n", (char)brojac);
		brojac++;
	}
	getch();
}
int main(){
	Sedmi();
	return 0;
}
