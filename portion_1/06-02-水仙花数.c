#include <stdio.h>
int main() {
	// ˮ�ɻ��� ˮ�ɻ�����ָ��һ��N����������N>=3�� ,ÿ��λ�ϵ����ֵ�N����֮�͵�����������Ҫ���д���򣬼�������Nλˮ�ɻ�����
	printf("������һ���и���һ��������N(3<=N<=7)\n") ;
	int N;
	scanf("%d",&N);
	/*
	 ����˼·��3λ�����100��1000
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

			int d=p%10; //��λ��

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
