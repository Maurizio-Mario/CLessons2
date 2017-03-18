#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
#define DIM 10
/*Array management with pointers arithmetics*/

float vect[DIM];

void arrayManagement(){
	float *pc;
	for(pc = &vect[0]; pc < &vect[0] + DIM; ++pc)
		*pc = (*pc) / 2.0;
	printf("\nEvery element of the array has been modified!\n\n");
}


int main(int argc, char *argv[]){
	printf("\nWelcome to the 10th lesson of the second semester, you dumbass.\n"
        	"What would you like to do?\n\n");
	int es;
	do{
		printf("\t1\tEs. 1:\tArray management;\n"
			"\t*\tOther:\tExit.\n\n");
		scanf("%d", &es);
		if(es == 1)
			arrayManagement();
	}while(es > 0 && es < 2);

	return 0;
}
