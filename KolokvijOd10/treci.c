#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

//OVO JE BUGOVIT ZADATAK, AKO NETKO RIJESI PROBLEM NA LINIJI 58 RIJESIO JE ZADATAK
int ZbrojiParne(int Array[],int Zbroj[],int len){
	int brojac = 0; int ArrayPos = 0; int Suma = 0;
	const int K = len;
	int i = 0;
	for(i = 0; i < K; i++){
		int j = 0;
		for(j = 0; j < K; j++){
			if(i == j){
				Suma += Array[ArrayPos];
			}
			ArrayPos++;
		}
	}
	Zbroj[0] = Suma;
	Suma = 0;
	int cnt = 5;
	for(i = 0; i < K; i++){
		int j = 0;
		for(j = len-1; j >-1 ; j--){
			if(cnt == (j-i)){
				cnt--;
				Suma += Array[ArrayPos];
			}
			ArrayPos++;
		}
	}
	Zbroj[1] = Suma;
	Suma = 0;
		for(i = 0; i < K; i++){
		int j = 0;
		for(j = 0; j < K; j++){
			Suma += Array[ArrayPos];
			ArrayPos++;
		}
	}
	printf("%d\n%d\n",Zbroj[0],Zbroj[1]);
	printf("\n");
	return Suma;
}

int main() {
	int N = 0;
	scanf("%d", &N);
	const int K = N;
	int Array[K][K];
	int Zbroj[2];
	int i = 0;
	for(i = 0; i < K; i++){
		int j = 0;
		for(j = 0; j < K; j++){
			//scanf("%d",&Array[i][j]); 
			Array[i][j] = rand()%10; //automatski upis
			printf("%d ",Array[j][i]);
		}
		printf("\n");
	}
	printf("%d",ZbrojiParne(Array[0],Zbroj,K));
}
