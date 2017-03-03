#include<stdio.h>
#include<stdlib.h>
#define DIM 10

void prePostfix(){		/*Test the different loop with the two operators.*/
	int x = 0;
	int i;
	int choice = 0;
	while(x < 1 || x > 10){
		printf("Es. 1 - Please type a positive integer up to 10:\n");
		scanf("%d/n", &x);
	}
	printf("Good, %d is a reasonable choice.\n", x);
	printf("Type 1 to use the prefix or 2 for the postfix operator\n");
	scanf("%d", &choice);
	if (choice == 1)	
		for(i = x; i < 11; i)
			printf("%3d", ++i);
	else 
		for(i = x; i < 11; i){
			printf("%3d", i++);
			printf("As you can see, there is a last increment after "
				"the evaluation of the condition!\n"); 
		}
}

void readString(){
	char myString[DIM];
	int i = 0;
	printf("Es. 2 - Type a string:\n");
	scanf("%s", myString);
	printf("The string read is:\n");
	while(myString[i] != '\0'){ 
		printf("%c", myString[i]);
		i++;
	}
}

void compareStrings(){
	char myString1[10] = "Pippo";
	char myString2[10] = "Pippo";
	int equal = 1;
	int i;
	printf("Es. 3 - Let's compare two strings.\n\nPlease type the first one:\n\n");
	scanf("%9s", myString1);
	printf("Now, please type the second one:\n");
	scanf("%9s", myString2);
	for(i = 0; i < 10; i++) 
		if(myString1[i] != myString2[i])
			equal = 0;
	if(equal == 1)
		printf("The strings are equal!\n");
	else 
		printf("The strings are not equal!\n");
}



int main(int argc, char *argv[]){
	int es;
	printf("\nChoose the example to execute:\n\n"
		"\t1\tEs 1:\tPostfix and prefix operators;\n"
		"\t2\tEs 2:\tRead a string;\n"
		"\t3\tEs 3:\tCompare two strings;\n\t"
		"\tother\t:\tExit\n");
	scanf("%d", &es);
	do{
		if(es == 1)
			prePostfix();
		else if(es == 2)
			readString();
		else if(es == 3)
			compareStrings();
	}while(es > 0 && es < 4);
return 0;
}

