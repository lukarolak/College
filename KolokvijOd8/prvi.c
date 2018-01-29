#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//PRVI
int ZZ(char a[], int lenA, char b[], int lenB){
		printf("%s\n%s\n", a,b);
		int output = a[0]-'0'+b[0]-'0'+a[lenA - 1]-'0'+b[lenB - 1]-'0';
		return output;
}

int main() {
	char ch = 'a'; int j = 0; //Upis char-ova
	char name[999];
	while(ch != '\n')    
    {
        ch = getchar();
        name[j] = ch;
        j++;
    }
    j--;
    char UpisA[j];
    int i = 0;
    for(i = 0; i < j; i++){
    	UpisA[i] = name[i];
	}
	//---
	ch = 'a'; int k = 0;
	char nameb[999];
	while(ch != '\n')    
    {
        ch = getchar();
        nameb[k] = ch;
        k++;
    }
    k--;
    char UpisB[j];
    for(i = 0; i < k; i++){
    	UpisB[i] = nameb[i];
	}
	
	printf("%d",ZZ(UpisA,j,UpisB,k));
	return 0;
}
