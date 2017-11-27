#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 
#include <math.h> 
void Prvi(void);
void PrviB(void);
void Treci(void);
void Cetvrti(void);
void Peti(void);
int main(){
	Peti();

}
int faktorjela(int a){
	int f;
	if (a == 0)
		return 1;
	f = 1;
	for (int i = 1; i < a + 1; i++)
		f *=i;
	return f;
}
void Prvi(void){
	int n, r;
	scanf("%d %d", &n, &r);
	printf("%d", faktorjela(n) / (faktorjela(n - r) * pow((double)n, (double)r)));
	getch();
}
void PrviB(){
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++){
		for (int j = 0; j < i; j++){
			printf("%d,%d ", i, j);
		}
		printf("\n");
	}getch();
	for (int i = 0; i < a; i++){
		for (int j = 0; j < i; j++){
			//printf("%d,%d,%d", faktorjela(i), faktorjela(i - j), faktorjela(j));
			printf("%d ", faktorjela(i)/(faktorjela(i-j)*faktorjela(j)));
		}
		printf("\n");
	}getch();

}
int B[100];

void sort(){
	for (int j = 0; j < 100; j++){
		for (int i = 1; i < 100; i++){
			if (B[i - 1] > B[i]){
				int temp = B[i];
				B[i] = B[i - 1];
				B[i - 1] = temp;
			}
		}
	}
	
}
void Treci(){
	time_t t;
	srand((unsigned)time_t(&t));
	for (int i = 0; i < 100; i++){
		B[i] = rand() % 10;
		printf("%d",B[i]);
	}
	printf("\n");
	sort();
	for (int i = 0; i < 100; i++){
		printf("%d", B[i]);
	}
	getch();
}

int prost(int n){
	int i, flag = 0;


	for (i = 2; i <= n / 2; ++i)
	{
		// condition for nonprime number
		if (n%i == 0)
		{
			flag = 1;
			break;
		}
	}

	if (flag == 0)
		return n;
	return 0;
}
void Cetvrti(){
	for (int i = 0; i < 100; i++)
		if (prost(i) != 0)
			printf("%d ", prost(i));
	getch();
}
float f(float x)
{
	return x*log10(x) - 1.2;
}
float df(float x)
{
	return log10(x) + 0.43429;
}
void Peti() // nemam pojma sta ovaj kod radi.. http://www.codewithc.com/c-program-for-newton-raphson-method/
{
	int itr, maxmitr;
	float h, x0, x1, allerr;
	x0 = 2; allerr = 0.0001; maxmitr = 10;
	//scanf("%f %f %d", &x0, &allerr, &maxmitr);
	for (itr = 1; itr <= maxmitr; itr++)
	{
		h = f(x0) / df(x0);
		x1 = x0 - h;
		printf(" interacija: %3d, x = %9.6f\n", itr, x1);
		if (fabs(h) < allerr)
		{
			printf("After %3d iterations, root = %8.6f\n", itr, x1);
			itr = maxmitr + 1;
			break;
		}
		x0 = x1;
	}
	
	getch();
}
