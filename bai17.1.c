#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(){
	char name1[15];
	char name2[15];
	char chr = 'a',*loc;
	printf("Enter your nam1");
	scanf("%s",name1);
	printf("Enter your name2");
	scanf("%s",name2);
	loc=strchr(name1,chr);
	if(loc!=NULL)
	printf("%c occurs in %s\n", chr, name1);
	else
	printf("%c does not occur in %s\n", chr, name2);
	loc = strchr(name2, chr);
	/* Checks for the occurrence of the character in the second city name */
	if(loc != NULL)
	printf("%c occurs in %s\n", chr, name2);
	else
	printf("%c does not occur in %s\n", chr, name2);
	getch();
}
