#include <stdio.h>
int main(){
	
	/*  һ�� ���� char short int long longlong => %ld ��ʾlong int
		��������float double long double �߼� bool ָ�� �Զ������� 
		���� ���ƣ�int long double
		�������ʱ�ĸ�ʽ���� %d, %ld, %lf
		���������ķ�Χ��char <short< int <float< double 
		
		== �������ڸ�����
		float����%fռλ����

double����%lfռλ�������Խ��֤����double��������%f���룬��������%f��������ǲ��������%f����Ϊ��ͬ�ı��������ܻ��в��

long double����%Lfռλ����ע�⣬L�Ǵ�д��

���������ȱʡ��ʾС�������λ��

����������%lf����������������ʽ��%m.nlf��ָ����������������ֺ�С�����ֹ�ռmλ��������nλ��С���������ֵ����С��m������˲��ո�����ֵ���ȴ���m����ʵ��λ������� 
 
 ����sizeof �鿴ռ�ü����ֽ� 
 sizeof �ڱ���ʱ���У�������sizeof�������㡣 
		 
	*/
	
//	double ff=70001.538;
//	float m=45.23;
//	printf("%11.4lf",ff) ;
//	printf("%11.4lf",m) ;

int a=6;
float b=19.0;
double c=19.0;

printf ("sizeof: %ld\n",sizeof(a)) ;
printf ("sizeof: %ld\n",sizeof(int) );
printf ("sizeof: %ld\n",sizeof(b) );
printf ("sizeof: %ld\n",sizeof(c) );
	
	return 0;
}
