#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
		{
		int num[5], ctr, sum = 0;
		int sum_arr(int num_arr[]); /* Function declaration */
		for(ctr = 0; ctr < 5; ctr++) /*Accepts numbers into the array*/
		{
		 printf("\nEnter number %d: ", ctr+1);
		 scanf("%d", &num[ctr]);
		}
		sum = sum_arr(num); /* Invokes the function */
		printf("\nThe sum of the array is %d", sum);
		getch();
		}
		int sum_arr(int num_arr[]) /* Function definition */
		{
		int i, total;
		for(i = 0, total = 0; i < 5; i++) /* Calculates the sum */
		 total += num_arr[i];
		return total; /* Returns the sum to main() */
		}
