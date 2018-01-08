#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAXCHAR 1000
void Prvi(){
	FILE *fp;
	int c;
	int n = 0;

	fp = fopen("c:\\temp\\ulaz.txt", "r");
	if (fp == NULL) {
		perror("Error in opening file");
		return;
	} do {
		c = fgetc(fp);
		if (feof(fp)) {
			break;
		}

		printf("%c", toupper(c));
	} while (1);
	getch();
	fclose(fp);
}
int Drugi(char Ulaz[MAXCHAR]){
	int brojac = 0;
	FILE *fp;
	int c;
	int n = 0;
	char Temp[1000] = {};
	strcat(Temp, "c:\\temp\\");
	strcat(Temp, Ulaz);
	strcat(Temp, ".txt");
	fp = fopen(Temp, "r");
	if (fp == NULL) {
		perror("Error in opening file");
		return -1;
	} do {
		c = fgetc(fp);
		if (feof(fp)) {
			break;
		}
		c = toupper(c);
		if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
			brojac++;
	} while (1);
	fclose(fp);
	return (brojac);
}
int Treci(FILE *fp){
	int brojac = 0;
	int c;
	int n = 0;
	char Temp[1000] = {};
	
	if (fp == NULL) {
		perror("Error in opening file");
		return -1;
	} do {
		c = fgetc(fp);
		if (feof(fp)) {
			break;
		}
		c = toupper(c);
		if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
			brojac++;
	} while (1);
	fclose(fp);
	return (brojac);
}

int main(){
	//Prvi() //prvizad
	/* //Drugi
	char Upis[MAXCHAR];
	gets(Upis); //input ulaz
	printf("%d",Drugi(Upis));
	*/
	/* //Treci
	FILE *fp;
	char Ulaz[1000];
	char Temp[1000] = {};
	gets(Ulaz);
	strcat(Temp, "c:\\temp\\");
	strcat(Temp, Ulaz);
	strcat(Temp, ".txt");
	fp = fopen(Temp, "r");
	printf("%d", Treci(fp));
	*/
	getch();
	return(0);
}
