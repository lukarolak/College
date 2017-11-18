#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 
void Prvi(){
	int n, ispis = 0;
	scanf("%d", &n);
	for(int i = 0 ; i < n+1; i++){
		for (int j = 0; j < i; j++){
			ispis++;
			if(i == n)
				printf("%d ", ispis);
		}
	}
}
void Drugi(){
	int n = 5, brojac = 0; 
	while(n % 3 != 0){
		scanf("%d",&n);
		brojac++;
	}
	printf("%d %d %d",brojac,n,brojac+n);
}
void Treci(){
	int n = 0,parni = 0, veci = 0, brojac = 0;
	while(n != 20){
		scanf("%d",&n);
		brojac++;
		if(n%2==0)
			parni++;
		if(n>20)
			veci++;
	}
	printf("parni: %d neparni: %d veci_od_20: %d manji_od_20: %d", parni, abs(brojac-parni),veci,abs(brojac-veci));
}
void Cetvrti(){
	int n, m,max; 
	scanf("%d %d",&n,&m);
	int A[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d",A[i][j]);
			//A[i][j] = rand()%10; //Automatski unos vrijednosti
			//printf("%d ",A[i][j]); //Automatski unos vrijednosti
		}
		//printf("\n"); //Automatski unos vrijednosti
	}
	max = A[0][0];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(max < A[i][j])
				max=A[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(max == A[i][j]){
			printf("redak: %d supac: %d",i,j);
			i = n; j = m; //ovo mi služi kao break; funkcija, u ovom sluæaju 
			//				ne mogu je koristiti jer mi break izlazi samo iz
			//				prve j petlje, a ne iz oba dvije kao bih htio,
			//				stoga ako je i=n && j=m prekidam obje petlje
			}
		}
	}
}
int main(){
	Cetvrti();
}
