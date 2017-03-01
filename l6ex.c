#include<stdio.h>
#include<stdlib.h>
#define DIM 10

double vett[] = {1.4, 5.2, 2.0, 5.1, 10.9,1.1, 0.1, 33.33, -12.2, 1.12};

int vett2[] = {6, 4, 5, 2, 13, -11, 7, -44, -12, 0};

/*Es 1*/
void printAll(){
	int i; 		/*Indice di scorrimento*/
	for (i = 0; i < DIM; i = i + 1) {
		printf("In posizione %d si trova il valore %f\n",i, vett[i]);
	}
}

/*Es 2*/
void sumAll(){
	int i = 0;
	float sum = 0; 	/*Accumulatore*/
	for (i = 0; i < DIM; i = i + 1){
		sum = sum + vett[i];
	}
	printf("La somma di tutti gli elementi del vettore è %f\n", sum); 
}

/*Es 3*/
void pairIndex(){
	int i = 0;
	for (i = 0; i < DIM; i = i + 1){
		if (i % 2 == 0){
			printf("%i\n", i);
		}
	}
}

/*Es 4*/
void testPairAll(){		/*Test if the elements of the array are even*/
	int i = 0;
	for (i = 0; i < DIM; i = i + 1)
		if (vett2[i]%2 == 0)
			printf("The element number %i of the vector is pair\n", i);
}

/*Es 5 - Create a 1000 elements array. Elements from 0 to 99*/
int vett3[1000];
int i;
void ranArray(){                       /*Initialize randomize*/
        for (i =0; i < 1000 ; i ++){
            vett3[i] = rand()%100;
            /*printf("%d\n", vett3[i]);*/
        }
}

/*Es 6 - Check for ordered array*/
void orderedArray(){
	int i = 1;
	int ordered = 1;
	int vett4[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	while(ordered && i < 10){
		if (vett4[i - 1] > vett4[i])
			ordered = 0;
		i = i + 1;
	}
	if (ordered)
		printf("The array is ordered\n\n");
	else 
		printf("The array is not ordered. Fucker.\n\n");
}

/* Es 7 - Check if at least an element is negative*/

void checkNegative(){
	double vett5[4] = {1.4, 5.5, 2.3, 6.7};
	int i = 0;
	int check = 1;			/*Condition test*/
	while(check && i < 4){
		if(vett[i] < 0.0)
			check = 0;
		i = i + 1;
	}
	if (check) 
		printf("No negative numbers here!\n\n");
	else
		printf("Ay dude, no good here.\n\n");
}

/* Es 8 - Find biggest value in array.*/

void arrayMax(){
	int vett6[DIM] = {1, 3, 5, 6, 8, 0, 11, 22, 33, 5};
	int max = 0;
	int pos = 0;
	for(i = 0; i < DIM; i++)
		if(vett6[i] > max){
			max = vett6[i];
			pos = i;
		}
	printf("The biggest element of the array is %d.\n", max);
	printf("It occupies the position number %d of the array.\n\n", pos);
}

/* Es 9 - Print the elements of a two dimensional array.*/
void printMatrix(){
	int matrix[3][4] = {
		{0, 1, 2, 3},
		{4, 5, 6, 7},
		{8, 9, 10, 11}
	};
	int i;
	int j;
	for(i = 0; i < 3; i++)
		for(j = 0; j < 4; j++)
			printf("%d\t", matrix[i][j]);
}
	

int main(int argc, char *argv[]) {
	int es;
	do {
		printf("Choose the part to execute:\n\t1 \t: Es 1 (Print every element of the array)\n\t2 \t: Es 2 (Sum every element of the array)\n\t3 \t: Es 3 (Print the pair elements in the array)\n\t4 \t: Es 4 (Test which elements of the array are even)\n\t5 \t: Es 5 (Generate 1000 elements array from 0 to 99)\n\t6 \t: Es 6 (Test if the array is ordered)\n\t7 \t: Es 7 (Check if there are negative numbers in the array)\n\t8 \t: Es 8 (Find the biggest value in the array)\n\t9 \t: Es 9 (Print a matrix)\n\tother \t: Exit\n\n");
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
			ranArray();
		}
		else if (es == 6){
			orderedArray();
		}
		else if (es == 7){
			checkNegative();
		}
		else if (es == 8){
			arrayMax();
		}
		else if (es == 9){
			printMatrix();
		}
	} while (es>=1 && es <= 9);
	
	return 0;
}

