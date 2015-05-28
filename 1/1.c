/*
	Problem 1: Multiples of 3 and 5
		If we list all the natural numbers below 10 that are multiples 
		of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is
		23.
                
		*Find the sum of all the multiples of 3 or 5 below 1000.*

	First solution implemented naively  
 */

const int ulimit = 1000;
const int llimit = 0;

#include <stdio.h>

static int naive()
{
	int i;
	int sum = 0;

	for(i = llimit; i < ulimit; i++)
	{
		if(( i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	return sum;
}

int main(){
	int sum = 0;

	sum = naive();

	printf("Sum strictly between %d and %d: %d \n", llimit ,ulimit - 1, sum );
}