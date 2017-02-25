#include<stdio.h>
#define DIM 10

double vett[] = {1.4, 5.2, 2.0, 5.1, 10.9,1.1, 0.1, 33.33, -12.2, 1.12};

int vett2[] = {6, 4, 5, 2, 13, -11, 7, -44, -12, 0};

void printAll(){

	int i; 		/*Indice di scorrimento*/
	for (i = 0; i < DIM; i = i + 1) {
		printf("In posizione %d si trova il valore %f\n",
		i, vett[i]);
	}
}

void sumAll(){
	int i = 0;
	float sum = 0; 	/*Accumulatore*/
	for (i = 0; i < DIM; i = i + 1){
		sum = sum + vett[i];
	}
	printf("La somma di tutti gli elementi del vettore è %f\n", sum); 
}

void pairIndex(){
	int i = 0;
	for (i = 0; i < DIM; i = i + 1){
		if (i % 2 == 0){
			printf("%i\n", i);
		}
	}
}

void testPairAll(){		/*Test if the elements of the array are even*/
	int i = 0;
	for (i = 0; i < DIM; i = i + 1){
		if (vett2[i]%2 == 0)
			printf("The element number %i of the vector is pair\n", i)
	}
}

void randomArray(){		/*Generate an integer array off 1000 elements ranging from 0 to 99)*/
	int vett3[1000];
	int i;
	randomize();		/*Initialize the number generator*/
	for (i = 0; i < 100; i++)
		vett3[i] = random(100);
}

void testOrderAll(){
	int vett4[] = {1; 2; 3; 4; 5; 6; 7; 8; 9}
	int i = 1;
	int order = 1;
	while (i < DIM && order){
		if (vett4[i - 1] > vett4[i]
			order = 0;
		i = i + 1;

	}
	if (order)
		printf("The array is ordered\n")
	else
		printf("The array is messed\n")
}




int main(int argc, char *argv[]) {
	int es;

	do {
		printf("Choose the part to execute:\n\t1 \t: Es 1 (Print every element of the array)\n\t2 \t: Es 2 (Sum every element of the array)\n\t3 \t: Es 3 (Print the pair elements in the array)\n\t4 \t: Es 4 (Test which elements of the array are even)\n\t5 t\: Es 5 (Test for ordered array)\n\t6 t\: Es 6 (Test for ordere array)\n  \t other \t: Exit\n\n");
		scanf("%d", &es);
		if(es==1){
			printAll();
		}
		else if (es == 2){
			sumAll();
		}
		else if (es == 3){
			pairIndex();
		}
		else if (es == 4){
			testPairAll();
		}
		else if (es == 5){
			randomArray();
		}
		else if (es == 6){
			testOrderAll();
		}
	} while (es>=1 && es <= 6);
	
	return 0;
}

