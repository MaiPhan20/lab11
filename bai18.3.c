#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct{
    float args[5];
}City;
void args(City* city){
    int i,j;
    printf("\nNhap nhiet do C cho moi thanh pho ");
    for(i=0; i<5; i++){
        printf("\nThanh pho thu %d: \n",i+1);
        for(j=0; j<5; j++){
            printf("Nhiet do C nam thu %d: ",j+1);
            scanf("%f",&city[i].args[j]);
        }
    }
}
void maxs(City* city)
{
    float max;
    int i,j;
    for(i=0; i<5; i++)
	{
        max=city[i].args[0];
    for(j=0; j<5; j++)
		{
        	if(max<city[i].args[j])
			{
           		max=city[i].args[j];
            }
        }
        printf("\nNhiet do trung binh lon nhat cua thanh pho thu %d la: %0.1f",i+1,max);
    }
}
void mins(City* city)
{
    float min;
    int i,j;
    for(i=0; i<5; i++)
	{
        min=city[i].args[0];
    	for(j=0; j<5; j++)
		{
        	if(min>city[i].args[j])
			{
            min=city[i].args[j];
            }
        }
        printf("\nNhiet do trung binh nho nhat cua thanh pho thu %d la: %0.1f",i+1,min);
    }
}
main()
{
    City* city;
    city=(City*)malloc(5*sizeof(City));
    args(city);
    maxs(city);
    mins(city);

    return 0;
}
