#include<stdio.h>
#include<stdlib.h>

int main(){
            char myString[10];
            int i = 0;
            printf("Es. 2 - Type a string:\n");
            scanf("%s", myString);
            printf("The string read is:\n");
            while(myString[i] != '\0'){ 
                    printf("%2c", myString[i]);
                    i++;
            }
    return 0;
    }
