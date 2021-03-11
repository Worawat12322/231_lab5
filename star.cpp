#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	check(&n);
	printf("%d",n);
	return 0;
}
int check(int *a){
	while(*a%2!=1)
	{
		*a--;
	}
	return *a;
}
