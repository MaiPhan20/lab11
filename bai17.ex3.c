#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	char firstname[15];
	char lastname[15];
	printf("Enter your first name");
	scanf("%s",firstname);
	printf("Enter your lastname");
	scanf("%s",lastname);
	strcat(firstname,lastname);
	printf("%s",firstname);
	getch();
}
