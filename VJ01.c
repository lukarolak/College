/***************************************/
/* Luka Rolak */
/* 0246077844 */
/* Tjedan 02 Vjezba 01 */
/* Naslov: main & comment */
/***************************************/
#include <stdio.h>
int main(){
	int i,j; 
	float x;

	printf("upis 4znamenkastog cijelog broja\n");
	scanf("%4d", &i);
	printf("upis 3znamenkastog cijelog broja\n");
	scanf("%3d", &j);
	printf("upis 5znamenkastog broja s dvije decimale\n");
	scanf("%5f", &x);
	//a
	printf("i=%d j=%d x=%f\n", i, j, x);
	//b
	printf("i=%4d j=%4d x=%5.2f\n", i, j, x);
	//c
	printf("i=%3d j=%3d x=%2.1f\n", i, j, x);
	//d
	printf("i=%4d j=%4d x=%4d\n", i, j, x);
	//e
	printf("i=%f j=%f x=%f\n", i, j, x);
	//f
	printf("i=%o j=%o x=%o\n", i, j, x);
	//g
	printf("i=%x j=%x x=%x\n", i, j, x);
	return 0;
}
