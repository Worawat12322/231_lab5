#include<stdio.h>
int check(int *a){
	while(*a%2!=1)
	{
		*a-=1;
	}
	return *a;
}
int main(){
	int n;
	scanf("%d",&n);
	check(&n);
	printf("%d",n);
	return 0;
}

