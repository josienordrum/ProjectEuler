/*
	Josie Nordrum
	April 4, 2019

	https://projecteuler.net/problem=1
*/

#include <stdio.h>
#include<math.h>

int main(void){
		
	int N = 999; 	

	// sum of all numbers divisible by 3
	int div3 = floor(N/3);
	int sumDiv3 = 3* ( div3*(div3+1)/2);
	printf("sumDiv3 is %d\n", sumDiv3);

	// sum of all numbers divisible by 5
	int div5 = floor(N/5);
	int sumDiv5 = 5* ( div5*(div5+1)/2);
	printf("sumDiv5 is %d\n", sumDiv5);
	
	// sum of all numbers divisible by 15
	int div15 = floor(N/15);
	int sumDiv15 = 15* ( div15*(div15+1)/2);
	printf("sumDiv15 is %d\n", sumDiv15);
	
	// sum of numbers divisible by 3 OR 15
	int sumDiv3OR5 = sumDiv3+sumDiv5-sumDiv15;
	printf(" %d\n", sumDiv3OR5);

	return 0;
}