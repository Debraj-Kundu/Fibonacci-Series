#include<stdio.h>

main()
{
	int fun(int);
	int i, n;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
		printf("%d ", fun(i));
}

int fun(int n)
{
	if(n==1 || n==2)
		return(1);
	
	return(fun(n-1)+fun(n-2));
}
