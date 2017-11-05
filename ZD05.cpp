/***************************************/
/*      Luka Rolak                     */
/*      0246077844                     */
/*      Tjedan 03 Vjezba 05           */
/*      Naslov: main & comment         */
/***************************************/

#include <stdio.h>

int main() {
	int i;
	int *pt1, *pt2;
	i = 4;
	pt1 = &i;
	printf("%p", pt1);
	*pt1 += 4;
	printf("\n%p\n", pt1);
	//odgovor: nije
	
	//dodatni zadatak:
	printf("%p\n",pt2); 
	pt2 = pt1 + 1;
	printf("%p\n%p",*pt1,*pt2);
	//NULL pointer pokazuje na mjesto u meoriji ispred mjesta u memoriji variable i;
}
