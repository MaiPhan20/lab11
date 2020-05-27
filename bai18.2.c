#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(){
	char name1[15];
	char name2[15];
	char name3[15];
	char name4[15];
	char name5[15];
	char chucDanh[15];
	printf("Enter your name1 ");
	scanf("%s",name1);
	printf("Enter your name2 ");
	scanf("%s",name2);
	printf("Enter your name3 ");
	scanf("%s",name3);
	printf("Enter your name4 ");
	scanf("%s",name4);
	printf("Enter your name5 ");
	scanf("%s",name5);
	printf("Enter your chuc danh ");
	scanf("\n%s",chucDanh);
	strcat(chucDanh,name1);
	printf(" %s ",chucDanh);
	getch();
}
