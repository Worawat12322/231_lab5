#include<stdio.h>
int main(){
	int n,i,div[3]={2,3,5},di_n=0,test,a;
	scanf("%d",&n);
	int ans[n]={1};
	if(n==1){
		printf("1");
	}
	else {
	
	for(i=2;i<=n;i++)
	{
		test=ans[i-1]+1;
		a=test;
		di_n=0;
		while(di_n<3)
		{
			if(a%div[di_n]==0)
			{
				while(a%div[di_n]==0)
				{
					a/div[di_n];
				}
			}
			else di_n++;
		}
		if(a==0)
		{
			ans[i]=test;	
		}
	}
}
	for(i=0;i<n;i++)
	{
		printf("%d",ans[n-1]);
	}
	
	return 0;
}
