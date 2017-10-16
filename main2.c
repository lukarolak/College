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
	printf("%d\n",Broj);
	printf("%d",(Broj/10)%10);
	return 0;
}
