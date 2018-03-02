#include <stdio.h>

double fun ( int n )
{ 
	double result = 1.0 ; 
	/************found************/ 
	if n = = 0 
		return 1.0 ; 
	while( n >1 && n < 170 ) 
	/************found************/ 
		result *= n-- 
	return result ; 
} 

main ( ) 
{ 
	int n ; 
	printf("Input N:") ; 
	scanf("%d", &n) ; 
	printf("\n\n%d! =%lf\n\n", n, fun(n)) ; 
} 
