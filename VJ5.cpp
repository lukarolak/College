#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 

void Prvi(){
	int num = 5;
	int *p1num = &num;
	int *p2num = NULL;
	p2num = p1num;
	*p2num = 7;
	printf("%d\n", num);
}
void Drugi(){
		int j, k;
		int *ptr;
		j = 1;
		k = 2;
		ptr = &k;
		printf("\n");
		printf("j ima vrijednost %d i spremljen je na %p\n", j, (void *)&j);
		printf("k ima vrijednost %d i spremljen je na %p\n", k, (void *)&k);
		printf("ptr ima vrijednost %p i spremljen je na %p\n", ptr, (void *)&ptr);
		printf("Vrijednost cjelobrojne vrijedosti kojs pokazuje na ptr je %d\n", *ptr);
		getch();
}
void Treci(){
	int i = 3;
	printf("\n Adresa varijable i = %u", &i);
	printf("\n Vrijednost varijable i = %d", i);
	printf("\n Vrijednost varijable i = %u", *(&i));
	printf("\n");
	getch();
}
void Cetvrti(){
	int x = 5;
	int *p;
	p = &x; // inicijalizacija
	printf("%p %p\n", p, &p);

	x = 7;
	printf("%d %d\n", x, *p);

	*p = 9;
	printf("%d %d\n", x, *p);

	(*p)--;

	printf("%d %d\n", x, *p);
	*p--;
	printf("%d %d\n", x, *p);
	printf("%p %p\n", &x, p);


	getch();
}
void Peti(){
	int i = 3;
	int *j;
	j = &i;

	printf("\n Adresa varijable i = %u", &i);
	printf("\n Adresa varijable i = %u", j);
	printf("\n Adresa varijable j = %u", &j);
	printf("\n");

	printf("\n Vrijednost varijable i = %d", i);
	printf("\n Vrijednost varijable i = %u", *(&i));
	printf("\n Vrijednost varijable i = %d", *j);
	printf("\n Vrijednost varijable j = %u", j);
	printf("\n");

	getch();
}
void Sesti(){
	int * pt = NULL, i, a, n;
	pt = &a;
	printf("koliko brojeva treba upisati ");
	scanf("%d", &n);
	pt = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++)
	{
		printf("Upiši cijeli broj");
		scanf("%d", pt); pt = pt + 1;
	}
	for (i = n; i > 0; i--)
	{
		printf("%d ", *(pt - 1)); pt = pt - 1;
	}

	getch();
}


void Test(){ //neki moj kod
	int i = 0;
	int *pP = &i;
	for (int i = 0; i < 200; i++){
		printf("%d\n", *(pP++));

	}
	getch();

}


int main(){
	Test();
	return 0;

}
