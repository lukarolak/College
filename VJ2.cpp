#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int PrviZad(){
	int TempFer;
	scanf("%d", &TempFer);
	printf("%f", (float)5 / 9 * (TempFer - 32));
	getch();
	return 0;
}int DrugiZad(){
	int Arel, Aimg, Brel, Bimg;
	scanf("%d %d %d %d", &Arel, &Aimg, &Brel, &Bimg);
	printf("Zbroj je: %d + %d i", Arel + Brel, Aimg + Bimg);
	printf("\numnozak je: %d + %d i", Arel * Brel - Aimg * Bimg,Aimg*Brel+Arel*Bimg);
	getch();
	return 0;
}
int TreciZad(){
	int Broj;
	scanf("%d", &Broj);
	int Rev=0;
	for (int i = 3; i > 0; i--){
		Rev += Broj % 10 * pow(10.,i);
		Broj /= 10;
	}
	Rev /= 10;
	for (int i = 0; i < 3; i++){
		printf("%d\n", Rev % 10);
		Rev /= 10;
	}
	getch();
	return 0;
}
int TreciZadB(){
	int Broj;
	scanf("%5d", &Broj);
	printf("Druga znamenka: %d", (Broj / 1000) % 10);
	printf("\nCetvrtaznamenka: %d", (Broj / 10) % 10);
	getch();
	return 0;
}
int CetvrtiZad(){
	int A, B;
	scanf("%d %d", &A, &B);
	if (A > B)
		printf("%d", A);
	else
		printf("%d", B);
	getch();
	return 0;
}
int PetiZad(){
	int r;
	scanf("%d", &r);
	printf("opseg= %f", 2 * r*3.14);
	getch();
	return 0;
}
int SestiZadA(){
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = a;
	a = b;
	b = c;
	printf("%d %d", a, b);
	getch();
	return 0;
}
int SestiZadB(){
	int a, b;
	scanf("%d %d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d", a, b);
	getch();
	return 0;
}



int main() {
	CetvrtiZad();
}
