//06-04 ��������������֮�����е������ĸ��������������
#include <stdio.h>
int main() {

	int N;
	int M;
	scanf("%d %d",&M,&N) ;//������������Χ ��1<=M<=N<=500


	int i=	M ; //m �ǽ�С��ֵ ��
	int sum=0;
	int total=0;
	while  (i<= N) {
		int num=0;
		//�����������1�ͱ������
		for(int j=2; j<i; j++) {

			if((i%j)==0) {
				num=0;
				break;
			} else {
				num++;
			}
		}
		if(num!=0) {
			//˵������ֵi���ʼ죬û�й�Լ��
			total++;
			sum=sum+i;
		}
		i++;
	}
	printf("%d %d",total,sum);

	return 0;
}
