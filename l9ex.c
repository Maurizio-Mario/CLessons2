#include<stdio.h>
#include<stdlib.h>

/*Support function for rev. It changes the values between two variables.*/
int revAux(int a, int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
	return a;
	return b;
}

void rev(){
	int x, y;
	printf("\nEs. 1 - This function changes the values between two variables\n\n");
	int num;
	char term;
	if(scanf("%d%c", &num, &term) != 1 || term != '\0')
    		printf("failure\n");
	else
    		printf("valid integer followed by enter key\n");
}




int main(int argc, char *argv[]){
	printf("\nWelcome to the 9th lesson of the second semester, you dumbass.\n"
		"What would you like to do?\n\n");
	int es;
	do{
		printf("\t1\tEs. 1 :\tFirst function!\n"
			"\t*\tOther:\tExit\n");
		scanf("%d", &es);
		if(es == 1)
			rev();
	}while(es > 0 && es < 2);
	return 0;
}
