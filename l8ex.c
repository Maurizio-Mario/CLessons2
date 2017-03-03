#include<stdio.h>
#include<stdlib.h>
#define DIM 10

/*int gcd2(int a, int b){
    	int temp;
    	while (b != 0){
        	temp = a % b;
		a = b;
        	b = temp;
    	}
    	return a;
}

void gdc3(){
	int m1 = 0;
	int m2 = 0;
	int a = 0; int b = 0; int c = 0;
	printf("Please type three integers:\n");
	scanf("%d%d%d", &a, &b, &c);
	m1 = gcd2(a, b);
	if(m1 != 0){
		m2 = gcd2(m1, c);
		printf("The gcd of %d, %d and %d is %d.\n",a, b, c, m2);
	}
}
*/
void isPrime(){
	int x = 0;
	int i;
	int prime = 0;
	printf("\nEs. 2 - Check if a positive integer is prime.\n");
	do{
		printf("\nPlease type a valid number!\n");
		scanf("%d", &x);
	}while(x < 1);
	for(i = 2; i < (x / 2); i++){ 
		if(x % i == 0)
			prime = 1;
	}
	if(prime)
		printf("\n%d is not prime number!\n", x);
	else
		printf("\n%d is a prime number.\n", x);
}

void nextPrime(){
    	int n, i, j, nonprime = 0;
    	printf("Es. 3 - Find next prime number. Enter the number less than 100:\n");
    	scanf("%d",&n);
    	for(i = n + 1; i <= 100; i++){
        	for(j = 2; j < i; j++){
           		if(i % j == 0){
                		nonprime = 1;
                		break;
            		}
        	}
       	 	if(nonprime == 0){
            		printf("\nThe first next prime number to %d is %d\n", n, i);
           		 break;
        	}
        	nonprime = 0;
    	}
}

void hundredPrimes(){
	int i;
	int counter = 0;
	int n = 1;
	int nonprime = 0;
	while(counter < 101){
		n++;
		for(i = 2; i < (n / 2); i++){
			if(n % i == 0){
				nonprime = 1;
				break;
			}
		}
		if(nonprime == 0){
			printf("%4d", n);
			counter++;
		}
	nonprime = 0;
	}
}



int main(int argc, char *argv[]){
	int es;
	printf("\n\nExamples from lesson 8. Please choose one:\n\n"
		"\t1\tEs. 1 :\t MCD of three numbers;\n"
		"\t2\tEs. 2 :\t Test for prime number;\n"
		"\t3\tEs. 3 :\t Find next prime number;\n"
		"\t4\tEs. 4 :\t Find the first 100 prime numbers;\n"
		"\t*\tOther :\t Exit.\n");
	scanf("%d", &es);
	do{
/*		if(es == 1)
			gdc3();*/
		/*else*/ if (es == 2)
			isPrime();
		else if(es == 3)
			nextPrime();
		else if(es == 4)
			hundredPrimes();
	}while(es > 0 && es < 5);
return 0;
}


