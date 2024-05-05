#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int row=5,i,j,space,coef=1;
	for(i=0;i<row;i++)
	{
		for(space=1;space<=row-i;space++)
		printf(" ");
		for(j=0;j<=i;j++)
		{
			if(j==0 || i==0)
			coef=1;
			else
			coef=coef*(i-j+1)/j;
			printf("%4d" ,coef);
		}
		printf("\n");
       }
   }
