/***************************************/
/*      Luka Rolak                     */
/*      0246077844                     */
/*      Tjedan 03 Vjezba 02            */
/*      Naslov: main & comment         */
/***************************************/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int Broj;
	printf("Ucitaj s tastature jedan(1) cijeli troznamenkasti broj");
	scanf("%3d",&Broj);
	printf("Zbroj je: %d",Suma(Broj));
	printf("\n%d",(Broj/10)%10);
	return 0;
}
int Suma(int Upis) {
	int Zbroj = 0;
	int i;
	for(i = 0; i < 3; i++){
		Zbroj += Upis%10;
		Upis /= 10;
	}
	return Zbroj;
}
