#include <stdio.h>
int main() {
	// 水仙花数 水仙花数是指在一个N的正整数（N>=3） ,每个位上的数字的N次幂之和等于它本身，，要求编写程序，计算所有N位水仙花数。
	printf("输入在一行中给出一个正整数N(3<=N<=7)\n") ;
	int N;
	scanf("%d",&N);
	/*
	 解题思路：3位数则从100到1000
	*/
	int first=10;
	int a=N;
	while(a>2) {

		first*=10 ;
		a-=1;

	}

	int i=first;
	while( i< first*10) {

		int b=N;
		int p=i;
		int sum=0;
		while(b>=1) {

			int d=p%10; //个位数

			int m=d;
			int c=N;
			while(c>1) {
				m*=d;
				c-=1;
			}
			sum=sum+m;
			b-=1;
			p=p/10;
		}


		if(sum==i) {

			printf("%d\n",i);
		}
		i++;

	}
	return 0;
}
