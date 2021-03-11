#include<stdio.h>
int main(){
	int n,x,i,j,cout=0;
	scanf("%d",&n);
	if(n%2==0)
	{
		x=n-1;
	}
	else x=n;
	for(i=1;i<=(n+1)/2;i++,cout++)
	{
		if(i==1)
		{
			for(j=1;j<=x/2;j++)
			{
				printf("_");
			}
			printf("*");
			for(j=1;j<=x/2;j++)
			{
				printf("_");
			}
			printf("\n");
		}
		else for(j=1;j<=x;j++)
		{
			if(j==((x+1)/2)-cout)
			{
				printf("*");
			}
			else printf("_");
			if(j==((x+1)/2)+cout)
			{
				printf("*");
			}
			else printf("_");
		}
		printf("\n");	
	}
	return 0;
}

