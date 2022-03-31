#include<stdio.h>
#include<conio.h>
void add();
void sub();
int divison();
int mod(int,int);
int menu();
void main()
{
	int c,x,y,div;
	char yn;
	clrscr();
	do
	{
	c=menu();
	switch(c)
	{
		case 1:
			add(); //call
			break;
		case 2:
			printf("\n enter two no:");
			scanf("%d %d",&x,&y);
			sub(x,y); //call
			break;
		case 3:
			div=division();  //call
			printf("\n division is: %d",div);
			break;
		case 4:
			printf("enter two value:");
			scanf("%d %d",&x,&y);
			div=mod(x,y); //call
			printf("\n modulas of %d and %d is %d",x,y,div);
			break;
		case 5:
			exit(0);
		default:
			printf("\n Invalid choice..PLZ enter no. between 1 to 5");
	}
	printf("\n\t Do you word to continue ?(yes:Y/y or no=N/n):");
	flushall();
	scanf("%c",&yn);
	}while(yn=='Y'||yn=='y');
	getch();
}
int menu()
{
	int choice;
	printf("\n Menu");
	printf("\n----------");
	printf("\n1)addition \n2)subtraction \n3)division \n4)modulas \n5)exit");
	printf("\n-------------");
	printf("\n enter your choice:");
	scanf("%d",&choice);
	return(choice);
}
void add()
{
	int x,y;
	printf("\n enter two value:");
	scanf("%d %d",&x,&y);
	printf("\n addition of %d and %d is %d",x,y,x+y);
}
void sub(int a,int b)
{
	printf("\n subtraction of %d and %d is %d",a,b,a-b);
}
int division()
{
	int x,y;
	printf("\n enter two value:");
	scanf("%d %d",&x,&y);
	return(x/y);
}
int mod(int x,int y)
{
	return(x%y);
}
