#include <stdio.h> 
int main(){
	
	float ab=100.32;
	float af;
	double bf;
   printf("数请输入一个float小数：");

	scanf(" %f" , &af) ; //输出，输入 float类型的数值 
	
	 printf("数请输入一个doublet小数：");
	scanf(" %lf" , &bf) ; //输出，输入 double类型的数值
	printf("数值%6.3f 米：",af);
		printf("数值%6.3f 米：",bf);


}
