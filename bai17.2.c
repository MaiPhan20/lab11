#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
{
     int ary[10];
     int i, total;

     for (i = 0;  i < 10; i++)
     {
         printf("\nEnter value: %d: ", i + 1);
         scanf("%d", &ary[i]);

}
     /* Prints average of value entered for ary[10] */
     for (i = 0, total = 0; i < 10; i++)
          total = total + ary[i];

      printf("\nThe average of the element of ary is %d", total/i);
}
