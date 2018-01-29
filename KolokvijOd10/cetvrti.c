#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Student{
		char Ime[100];
		int OcjA;
		int OcjB;
		int OcjC;
		int OcjD;
	};
int q = 0;

int main() {
	
	struct Student Studenti[4];
	FILE *fp;
	char c;
	int n = 0; int brojac = 0; int flag = 0; int brocj = 0; int abc = 0;
	char ime[100];
	fp = fopen("c:\\temp\\ocjene.txt", "r");
	if (fp == NULL) {
		perror("Error in opening file");
		return 0;
	} do {
	//printf("%s",Studenti[0].Ime);
		c = fgetc(fp);
		if (feof(fp)) {
			break;
		}
		if(c != ','){
		if(flag == 0){
		if(c != '0' && c != '1' && c != '2' && c != '3' && c != '4' && c != '5'){
			ime[brojac] = c;
			brojac++;
		}else {
			strcpy(Studenti[brocj].Ime,ime);
			brojac = 0;
			int i = 0;
			flag = 1;
				int BRUpis = c-'0';
				if(abc == 0){
					Studenti[brocj].OcjA = BRUpis;
				}
				else if(abc == 1){
					Studenti[brocj].OcjB = BRUpis;
				}
				else if(abc == 2){
					Studenti[brocj].OcjC = BRUpis;
				}
				else {
					Studenti[brocj].OcjD = BRUpis;
				}
				abc++;
		}
		}else{
		if(c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5'){
				int BRUpis = c-'0';
				if(abc == 0){
					Studenti[brocj].OcjA = BRUpis;
				}
				else if(abc == 1){
					Studenti[brocj].OcjB = BRUpis;
				}
				else if(abc == 2){
					Studenti[brocj].OcjC = BRUpis;
				}
				else {
					Studenti[brocj].OcjD = BRUpis;
				}
				abc++;
		}else{
			brocj++;
			flag = 0;
			ime[brojac] = c;
			brojac++;
		}	
		}
		}
	} while (1);
	fclose(fp);
	int Ocj[4] = {0};
	int i = 0;
	for(i = 0; i < 4; i++){
		Ocj[i] += Studenti[i].OcjC;
		printf("%d %d %d %d\n",Studenti[i].OcjA,Studenti[i].OcjB , Studenti[i].OcjC , Studenti[i].OcjD);
	}
	int max = 100;
	for(i = 0; i < 4; i++){
		if(max > Ocj[i])
			max = Ocj[i];
	}
	for(i = 0; i < 4; i++){
		if(max == Ocj[i])
		printf("%s",Studenti[i].Ime);
	}
	
	getch();
}
