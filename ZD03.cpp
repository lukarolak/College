/***************************************/
/*      Luka Rolak                     */
/*      0246077844                     */
/*      Tjedan 03 Vjezba 03           */
/*      Naslov: main & comment         */
/***************************************/
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	if(a<b && a<c)
		printf("%f\n",a);
	if(b<a && b<c)
		printf("%f\n",b);
	if(c<b && c<a)
		printf("%f\n",c);
	
	char Upis;            //Drugi Zadatak
	scanf("\n %s",&Upis);
	switch(Upis){
		case '1':
			printf("jedan");
		
	}
	return 0;
}
