#include<stdio.h>

int fib(int n){
	if(n<=1)
		return n;
	return fib(n-1)+fib(n-2);
}

int main()
{
	int n;
	printf("Enter value of n:\t");
	scanf("%d", &n);

	printf("The %dth fibonacci number is %d\n", n, fib(n));
	return 0;
}