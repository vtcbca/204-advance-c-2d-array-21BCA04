/* Count Vowels In the available String
Program 5
*/#include<stdio.h>
#include<conio.h>
void main()
{
	char name[5][10];
	int i,count=0;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\nenter string name=");
		gets(name[i]);
	}
	for(i=0;i<strlen(name);i++)
	{
		if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
			count++;
	}
	for(i=0;i<5;i++)
	{
		printf("\n number of vowels in string= %d",count);
	}

	getch();
}