#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

const int N = 3;
const int M = 3;
int Desno(int A[][M], int B[]);
int Max(int A[][M], int B[]);
int Min(int A[][M], int B[]);
int Aritmetika(int A[][M], int B[]);
void ScanPrvi(void);
int main(){
	int B[M*N];
	int A[N][M];
	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			A[i][j] = rand() % 50;
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	//printf("%d", Aritmetika(A, B)); //Prvi
	//printf("%d", Desno(A, B)); //Drugi
	//printf("%d", Max(A,B)); //Treci
	//printf("%d", Min(A,B)); //Cetvrti
	ScanPrvi();
	getch();
	return 0;
}
int Aritmetika(int A[][M], int B[]){
	int brojac = 0; int suma = 0;
	for (int i = 0; i < N; i++){
		int raz = A[i][0];
		for (int j = i; j < M; j++){
			raz -= A[j][i];
		}
		B[brojac] = raz;
		printf("%d", B[brojac]);
		suma += B[brojac];
		brojac++;
	}
	printf("\n");
	return suma;
}
int Desno(int A[][M],int B[]){
	int brojac = 0; int suma = 0;
	for (int i = 0; i < N; i++){
		for (int j = i + 1; j < M; j++){
			suma += A[i][j];
			B[brojac] = A[i][j];
			printf("%d ", B[brojac]);
			brojac++;
		}
		printf("\n");
	}
	printf("\n");
	return suma;
}
int Max(int A[][M], int B[]){
	int brojac = 0; int maximum = A[0][0];
	for (int i = 0; i < N; i++){
		int max = A[0][0];
		for (int j = 0; j < M; j++){
			if (max < A[i][j])
				max = A[i][j];
			if (maximum < A[i][j])
				maximum = A[i][j];
		}
		B[brojac] = max;
		printf("%d ", B[brojac]);
		brojac++;
	}
	printf("\n");
	return maximum;
}
int Min(int A[][M], int B[]){
	int brojac = 0; int minimum = A[0][0];
	for (int i = 0; i < N; i++){
		int min = A[0][0];
		for (int j = 0; j < M; j++){
			if (min > A[j][i])
				min = A[j][i];
			if (minimum > A[j][i])
				minimum = A[j][i];
		}
		B[brojac] = min;
		printf("%d ", B[brojac]);
		brojac++;
	}
	printf("\n");
	return minimum;
}
void ScanPrvi(void){
	char ispis[100];
	for (int i = 0; i < 1; i++){
		int dan[2], mjesec[2], god[2]; char ime[100];
		scanf("%2d.%2d.%4d%s", &dan, &mjesec, &god, &ime);
		int maxa = 0, maxb = 0, maxc = 0;
		if (maxa < dan[0] && maxb < mjesec[0] && maxc < god[0]){
			maxa = dan[0];  maxb = mjesec[0]; maxc = god[0];
			for (int i = 0; i < 100; i++)
				ispis[i] = ime[i];
		}
	}
	printf("%s \n", ispis);
}
