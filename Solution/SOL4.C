/* Serching  String In maintion It's Position
Program 4 */
#include<stdio.h>
#include<conio.h>
void main()
{
	char name[5][10],s[10];
	int i;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\nenter a string name=");
		gets(name[i]);
	}
	printf("\n enter name to serch:");
	gets(s);
	for(i=0;i<5;i++)
	{
		if(strcmp(s,name[i]==0))
		{
			printf("Name Is available at %d position",name[i]);
			break;
		}
	}
	if(i==5)
		printf("\n Sorry Name is not available here");
	getch();
}

