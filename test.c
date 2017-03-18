#include<stdio.h>
#include<stdlib.h>

int col(int p, int n) {
        int q;
        q = ((p + 1) / n) + 1;
        return q;
}

int rig(int p, int n) {
        int q;
        q = (p % n) + 1;
        return q;
}


int quadrato_magico(int m[], int n2) {
	int i, j = 0, k, l = 0, q;
	int a, b;
	int p, n;
	int magic = 1;
	for(i = 0; i < n; i++){			/*Sum first square side/column*/
		a += m[i];
	}
        while(col(p, n) == j && j <= n && magic == 1){
		for(k = 1; k <= n; k++){
			b += m[k];
			if(b == a){
				a = b;
				b = 0;
			}
			else{
				printf("\nFailure: column %d\n", j);
				magic = 0;
			}
		}
		j++;
	}
	while(rig(p, n) == l && l <= n && magic == 1){
		for(q = 1; q <= n; q++){
			b += m[q];
			if(b == a){
				a = b;
				b = 0;
			}
			else{
				printf("Failure: row %d\n", n); 
				magic = 0;
			}
		}
		l++;
	}
	if(magic == 1)
		printf("It is magic!");
	else
		printf("Fuck");
return 0;
}



