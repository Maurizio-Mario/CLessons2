#include<stdio.h>
#define DIM 10

int push(float vect[], int *ptop, float item){
	if(*ptop < DIM){
		vect[*ptop] = item;
		(*ptop)++;
		return 1;
	}else
		return 0;
}

int pop(float vect[], int* ptop, float* pitem){
	if(*ptop > 0){
		(*ptop)--;
		*pitem = vect[*ptop];
		return 1;
	}else
		return 0;
}

int isEmpty(int top){
	return(top == 0);
}

int revSequence(){
	printf("\nThe aux function\n"
		"\tint push(float vect[], int *ptop, float item){\n"
        		"\t\tif(*ptop < DIM){\n"
                		"\t\t\tvect[*ptop] = item;\n"
		                "\t\t(*ptop)++;\n"
	                "\treturn 1;\n"
 		      	"\t!}else\n"
                		"\t\treturn 0;\n"
		"\t}\n\n"
		"places the input from the main program to the top level\n"
		"of the stack.\n");

	float myStack[DIM];
	int top = 0;
	float lettura;
	printf("\n\nType ten float numbers, separated by space:\n\n");
	do {
		scanf("%f", &lettura);
	}while(push(myStack, &top, lettura) && lettura != 0.0);
	while(!isEmpty(top)){
		pop(myStack, &top, &lettura);
		printf(" %.1f", lettura);
	}
	printf("\n\n");
	return 0;
}


int main(int argc, char argv[]){
	printf("\nWelcome to the lesson number 11 of the second semester!\n"
		"What would you like to do?\n\n");
	int es;
	do{
		printf("\t1\tEx. 1:\tInvert input data in array;\n"
			"\t*\tOther:\tExit\n\n");
		scanf("%d", &es);
		if(es == 1)
			revSequence();
	}while(es > 0 && es < 2);
	return 0;
} 
