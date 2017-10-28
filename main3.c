/***************************************/
/*      Luka Rolak                     */
/*      0246077844                     */
/*      Tjedan 03 Vjezba 04           */
/*      Naslov: main & comment         */
/***************************************/

#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int zbroj = 0;
	int i;
	for(i = 0; i < 10; i++){
		zbroj += i;
	}
	printf("%d \n", zbroj);
	int brojac =  0;
	i = 0;
	zbroj = 0;
	while(brojac < 10) {
		i += 1;
		if(i%2 != 0){
			brojac += 1;
			zbroj += i;
		}
	}
	printf("%d \n", zbroj);
		return 0;
}
