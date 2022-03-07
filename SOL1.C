/* WAP to create to 3*3 matrics & print sum of it
Program 1 */
#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[3][3],m2[3][3],i,j;
	int sum[3][3];
	clrscr();
	for(i=0;i<3;i++)//for m1
	{
		for(j=0;j<3;j++)
		{
			printf("\nenter value for m1[%d][%d]:",i,j);
			scanf("%d",&m1[i][j]);
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d \t",m1[i][j]);
		printf("\n");
	}
	printf("\n--------------------------------------------\n");
	for(i=0;i<3;i++)//for m2
	{
		for(j=0;j<3;j++)
		{
			printf("\n enter value for m2[%d][%d]:",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d \t",m2[i][j]);
		printf("\n");
	}
	printf("\n\n----------SUM----------\n");
	for(i=0;i<3;i++)//for sum
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=m1[i][j]+m2[i][j];
			printf("%d \t",sum[i][j]);
		}
		printf("\n");
	}
	getch();
}