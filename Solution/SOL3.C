/* WAP to create to 3*3 matrics & print multiplication of it
Program 3 */
#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[3][3],m2[3][3],i,j,k;
	int mul[3][3];
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
	//multiplication of matrix
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			mul[i][j]=0;
			for(k=1;k<=3;k++)
			{
				mul[i][j]=mul[i][j]+m2[i][k]*m2[k][j];
			}
		}
	}
	//print multiplication matrix
	printf("\n---------------------------------\n");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("\t %d",mul[i][j]);
		}
		printf("\n");
	}
	getch();
}