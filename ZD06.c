#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 
int main(){
	int polje[10] = {0}, *p;
	p=&polje[0];
	int *max, brojac = 0;
	for(int i = 0; i < 10; i++){
		scanf("%d\n",&polje[i]);
	}
	max = &polje[0];
	for(int i = 0; i < 10; i++){
		if(*max > *(p+i)){
			max = (p+i);
			brojac = i;
		}
	}
	printf("najmanji element: %d\nsljedeci element: %d", brojac,*(p+brojac+1));
}
