#include <stdio.h>
//九九乘法表的打印
int main() {
	int N=0;
	scanf("%d",&N);


	for(int i=1; i<=N; i++) {
		for(int j=1; j<=i; j++) {

			printf("%d*%d=%d",j,i,j*i);
			if(i*j<10) {
				printf("   ")	;
			} else {
				printf("  ")	;
			}

		}
		printf("\n") ;
	}

	return 0;
}
