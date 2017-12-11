#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
char B[100];
void Prvi(char *A){
	int brojac = 0;
	for (A; *A != '\0'; A++){
		brojac++;
	}
	int counter = 0;
	for (int i = 0; i < brojac; i++){
		A--;
		if (*A != '.' && *A != '?' && *A != '!'){
			B[counter] = *A;
			counter++;
		}
	}
}
void Drugi(char *A, char *C){
	int counter = 0;
	while(*A){
		if (*A == *C){
			B[counter] = *A;
			counter++;
		}
		A++;
		C++;
	}
	
}
void Treci(char *A, char *C){
	char Pbroj[100] = { 0 }, Dbroj[100] = {0};
	int Apredznak = 1,Cpredznak = 1;
	int brojac = 0;
	if (*A == '-'){
		Apredznak = -1;
		A++;
		for (A; *A != '\0'; A++){
			Pbroj[brojac] = *A;
			brojac++;
		}
	}
	else{
		for (A; *A != '\0'; A++){
			Pbroj[brojac] = *A;
			brojac++;
		}
	}
	brojac = 0;
	if (*C == '-'){
		Cpredznak = -1;
		C++;
		for (C; *C != '\0'; C++){
			Dbroj[brojac] = *C;
			brojac++;
		}
	}
	else{
		for (C; *C != '\0'; C++){
			Dbroj[brojac] = *C;
			brojac++;
		}
	}
	printf("%d", atoi(Pbroj)*Apredznak + atoi(Dbroj)*Cpredznak);
	

}
void Cetvrti(char *A){
	for (A; *A != '\0'; A++){
		if (*A != '?' && *A != '!' && *A != '.')
			printf("%c", *A);
		else{
			printf("%c", *A);
			printf("\n");
		}
	}

}
struct Imena{
	char Ime[30];
	char Prezime[30];
};
void Peti(Imena Unos[20]){
	int Poredak[20];
	for (int i = 0; i < 20; i++){
		Poredak[i] = i;
	}
	for (int i = 0; i < 19; i++){
		for (int j = 0; j < 19; j++){
			if (Unos[i].Prezime[0] < Unos[i + 1].Prezime[0]){
				Imena Temp;
				Temp = Unos[i];
				Unos[i] = Unos[i + 1];
				Unos[i + 1] = Temp;
			}
		}
	}
	for (int i = 0; i < 20; i++){
		puts(Unos[i].Ime);
		puts(Unos[i].Prezime);
	}
}
int main(){
	/* //PRVI
	char Unos[100];
	fgets(Unos, 100, stdin);
	Prvi(&Unos[0]);
	puts(B);
	getch();
	*/

	/* //DRUGI
	char UnosA[100], UnosB[100];
	fgets(UnosA, 100, stdin); fgets(UnosB, 100, stdin);
	Drugi(&UnosA[0], &UnosB[0]);
	puts(B);
	getch();
	*/

	/* //Treci
	char UnosA[100], UnosB[100];
	fgets(UnosA, 100, stdin); fgets(UnosB, 100, stdin);
	Treci(&UnosA[0], &UnosB[0]);
	getch();
	*/

	/* //CETVRTI
	char Unos[100];
	fgets(Unos, 100, stdin);
	Cetvrti(&Unos[0]);
	getch();
	*/
	/* PETI
	Imena Upis[20];
	for (int i = 0; i < 20; i++){
		fgets(Upis[i].Ime, 30, stdin);
		fgets(Upis[i].Prezime, 30, stdin);
	}
	Peti(Upis);
	*/
	
}
