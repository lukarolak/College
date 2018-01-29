#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int BrojInter(char a[], int len){
	int brojac = 0;
	int i = 0;
	for (i = 0; i < len; i++){
		if (a[i] == ',' || a[i] == '.' || a[i] == ';' || a[i] == ':' || a[i] == '!' || a[i] == '?')
			brojac++;
	}
	return brojac;
}

int main() {
	char upis[1000];
	char ch = 'a';
	int i = 0;
	while (ch != '\n')    // terminates if user hit enter
	{
		if (i == 999)
			break;
		ch = getchar();
		upis[i] = ch;
		i++;
	}
	printf("%d\n", BrojInter(upis,i));
}
