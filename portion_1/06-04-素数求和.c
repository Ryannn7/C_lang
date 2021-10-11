//06-04 求解给定的两个数之间所有的素数的个数并对他们求和
#include <stdio.h>
int main() {

	int N;
	int M;
	scanf("%d %d",&M,&N) ;//给定了两个范围 。1<=M<=N<=500


	int i=	M ; //m 是较小的值 。
	int sum=0;
	int total=0;
	while  (i<= N) {
		int num=0;
		//求解质数，非1和本身的数
		for(int j=2; j<i; j++) {

			if((i%j)==0) {
				num=0;
				break;
			} else {
				num++;
			}
		}
		if(num!=0) {
			//说明此数值i是质检，没有公约数
			total++;
			sum=sum+i;
		}
		i++;
	}
	printf("%d %d",total,sum);

	return 0;
}
