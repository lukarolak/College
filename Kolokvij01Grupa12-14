#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h> 
void Prvi(){
	int n, brojac = 0;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		int upis,znamenka;
		scanf("%d",&upis);
		znamenka = upis % 10;
		while(upis >= 10)
        	upis = upis / 10;
        if(upis % 2 != 0 && znamenka % 2 != 0)
        	brojac++;
	}
	printf("%d",brojac);
}
int Drugi(){
	int upis = 1, brojac = 0;
	while(upis != 0){
		int parne = 0;
		scanf("%d",&upis);
		while(upis >= 10){
			if(upis % 2 == 0)
				parne++;
        	upis = upis / 10;
        }
        if (parne == 1)
        	brojac++;
	}
	printf("%d",brojac);
}
void Treci(){
	int n,x;
	scanf("%d %d",&n,&x);
	int s = 1;
	for (int i = 1; i < n; i++){
		int factorial = 1;
		for(int j = 1; j<=i; ++j)
        {
            factorial *= i;       
        }
		s += pow(x,2*n)/factorial;
	}
	printf("%d",s);
	
}
int Cetvrti(){
	int n;
	scanf("%d", &n);
	if(n<3 || n>100)
		return 0;
	int A[n][n];
	for (int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d",&A[i][j]);
		}
	} 
	int ispis[n];
	for (int i = 0; i < n; i++){
		int zbroj = 0;
		for(int j = 0; j < n; j++){
			zbroj += A[i][j];
		}
		ispis[i] = zbroj/n + 1;
	}
	for (int i = 0; i < n; i++){
		printf("%d\n", ispis[i]);	
	}
}
int main(){
	Cetvrti();
}
