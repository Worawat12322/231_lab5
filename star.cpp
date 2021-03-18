#include<stdio.h>
int main(){
	int n,x,i,j,k,cout=0;
	scanf("%d",&n);
	if(n%2==0)
	{
		x=n-1;
	}
	else x=n;
	for(i=1;i<=(n+1)/2;i++,cout++)
	{
		if(i==1||i==n)
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
			for(k=1;k<=(x+1)/2;k++)
		}
		printf("\n");	
	}
	return 0;
}

