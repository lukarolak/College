#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char lineA[] ="/***************************************/";
	char lineB[] ="/*      Luka Rolak                     */";
	char lineC[] ="/*      0246077844                     */";
	char lineD[] ="/*      Tjedan 02 Vjezba 01            */";
	char lineE[] ="/*      Naslov: main & comment         */";
	char lineF[] ="/***************************************/";
	
	printf("%s\n%s\n%s\n%s\n%s\n%s\n",lineA,lineB,lineC,lineD,lineE,lineF);
	int a, b;
	scanf("%d%d",&a,&b);
	zadatakB(a,b);
	return 0;
}
void zadatakB(int a, int b){
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d%d",a,b);
}
