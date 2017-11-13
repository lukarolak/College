#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 
int Prvi(){
	int polje[10], i = 0;
	for (i; i <= 8; i++)
		scanf("%d\n", &polje[i]);
	for (i; i >= 0; i--)
		printf("%d\n", polje[i]);
	getch();
	return 0;
}
int Drugi(){
	const int brojevi = 40;
	int polje[brojevi];
	polje[0] = 1;
	polje[1] = 1;
	printf("%d\n%d\n", polje[0], polje[1]);
	for (int i = 2; i < brojevi; i++){
		polje[i] = polje[i - 1] + polje[i - 2];
		printf("%d\n", polje[i]);
	}
	getch();
	return 0;
}
int Treci(){
	int poljeA[3] = { 1, 2, 3 }, poljeB[3] = {1,2,3};
	int Vek[3] = { poljeA[0] + poljeB[0], poljeA[1] + poljeB[1], poljeA[2] + poljeB[2] };
	printf("vektor: %d, %d, %d\n", Vek[0], Vek[1], Vek[2]);
	int produkt = poljeA[0] * poljeB[0] + poljeA[1] * poljeB[1] + poljeA[2] * poljeB[2];
	printf("skal prdkt: %d", produkt);
	getch();
	return 0;
}
int Cetvrti(){
	int poljeA[3][3], poljeB[3];
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			scanf("%d\n", &poljeA[i][j]);
		}
	}
	for (int i = 0; i < 3; i++)
		scanf("%d\n", &poljeB[i]);
	getch();
	return 0;
}
int Peti(){
	int poljeA[4][4], poljeB[4][4], polje[4][4];
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			scanf("%d\n", &poljeA[i][j]);
			//poljeA[i][j] = i + j; //dio za test
		}
	}
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			scanf("%d\n", &poljeB[i][j]);
			//poljeB[i][j] = i + j; //dio za test
		}
	}
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			int zbroj = 0;
			for (int i = 0; i < 4; i++){
				zbroj += poljeA[j][i] * poljeB[i][j];
			}
			polje[i][j] = zbroj;
			printf("%d\n", polje[i][j]);
		}
	}
	
	getch();
	return 0;
}
int Sesti(){
	int poljeA[4][4];
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			scanf("%d\n", &poljeA[i][j]);
		}
	}
	for (int i = 0; i < 4; i++)
		printf("%d\n", poljeA[i][i]);
	getch();
	return 0;
}
int Sedmi(){
	int n, i, flag = 0, brojac = 0, polje[500];
	for (int n = 1; n < 50000; n++){
		flag = 0;
		if (brojac == 500)
			break;
		for (i = 2; i <= n / 2; ++i)
		{
			if (n%i == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0){
			polje[brojac] = n;
			brojac++;
		}
	}
	for (int i = 0; i < 500; i++){
		printf(" %d", polje[i]);
	}
	getch();
	return 0;
}

int main(){
	

}
