#include <stdio.h> 

void fun(unsigned long *n) 
{ 
	unsigned long x=0, i; int t; 
	i=1; 
	while(*n) 
	/**********found**********/ 
	{ 
		t=*n % __1__; 
		/**********found**********/ 
		if(t%2!= __2__) 
		{
			x=x+t*i;
			i=i*10;
		} 
		*n =*n /10; 
	} 
	/**********found**********/ 
	*n=__3__; 
}

main() 
{ 
	unsigned long n=-1; 
	while(n>99999999||n<0) 
	{
		printf("Please input(0<n<100000000): ");
		scanf("%ld",&n);
	} 
	fun(&n); 
	printf("\nThe result is: %ld\n",n); 
} 
