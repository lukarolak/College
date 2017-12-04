#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
char A[] = { 'a', 'b','c','d','e','f','g','h','i','\0' }; //Za drugi zadatak
float B[] = { 0.0, 1.0, -1.0, 'abc','abc'};
void Prvi(int *n){
	*n = *n * *n;
}
void Drugi(char *p){
	for (p; *p != '\0'; ++p)
	{
		if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u'){
			char *k = &A[0];
			for (k; *k != '\0'; ++k){
				if (*k == '0'){
					*k = *p;
					break;
				}
			}
		}
		else
			*p = '0';
	}
}
void Treci(float *b, int *veci, int *manji, int *jednak){
	for (b; *b != 'abc'; ++b){
		if (*b > 0.0)
			*veci = *veci + 1;
		else if (*b < 0.0)
			*manji += 1;
		else
			*jednak += 1;
	}
}
int main(){
	/* //Prvi
	int n;
	scanf("%d", &n);
	Prvi(&n);
	printf("%d", n);
	getch();
	*/

	/* //Drugi
	Drugi(&A[0]);
	for (int i = 0; i < 3; i++)
		printf("%c", A[i]);
	getch();
	*/

	/*
	int veci = 0, manji = 0, jednak = 0;
	Treci(&B[0], &veci, &manji, &jednak);
	printf("%d %d %d", veci, manji, jednak);
	getch();
	*/
	
}
