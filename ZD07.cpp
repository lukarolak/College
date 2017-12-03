#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void func(double a, double b);
double a; double b;
int main(){
	scanf("%lf %lf",&a, &b);
	func(a,b);
	printf("%f %f",a,b);
}
void func(double prvi, double drugi){
	 if(a>b){
	 	a = prvi;
	 	b = drugi;
	 }
 	else{
 		b = prvi;
	 	a = drugi;
	 }
 }
