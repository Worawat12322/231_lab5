#include<stdio.h>
int main(){
	int n,i,div[3]={2,3,5},di_n=0,test,a;
	scanf("%d",&n);
	int ans[n]={1};
	if(n==1){
		printf("1");
	}
	else {
	
	for(i=1;i<=n;i++)
	{
		test=ans[i-1];
		while(1)
		{
			test++;
			if(test%7!=0&&test%7!=0&&test%13!=0&&test%11!=0)
			if(test%2==0)
			{
				
					ans[i]=test;
					break;
			}
			else if(test%3==0||test%5==0)
			{
				ans[i]=test;
				break;
			}
		}
	}
}
	for(i=0;i<n;i++)
	{
		printf("%d ",ans[i]);
	}
	
	return 0;
}
