#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

//OVO JE BUGOVIT ZADATAK, AKO NETKO RIJESI PROBLEM NA LINIJI 41 RIJESIO JE ZADATAK
int ZbrojiParne(int Array[],int Zbroj[],int len){
	int brojac = 0; int ArrayPos = 0; int Suma = 0;
	const int K = len;
	int i = 0;
	for(i = 0; i < K; i++){
		int j = 0;
		for(j = 0; j < K; j++){
			if(i%2!=0 && j%2!=0){
				Zbroj[brojac]=Array[ArrayPos];
				printf("%d\n",Zbroj[brojac]);
				brojac++;
			}
			if(i == j){
				Suma += Array[ArrayPos];
			}
			ArrayPos++;
		}
	}
	printf("\n");
	return Suma;
}

int main() {
	int N = 0;
	scanf("%d", &N);
	const int K = N;
	int Array[K][K];
	int Zbroj[K][K];
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
	printf("%d",ZbrojiParne(Array[0],Zbroj[0],K));
}
