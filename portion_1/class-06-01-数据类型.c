#include <stdio.h>
int main(){
	
	/*  一、 整数 char short int long longlong => %ld 表示long int
		浮点数：float double long double 逻辑 bool 指针 自定义类型 
		类型 名称：int long double
		输入输出时的格式化： %d, %ld, %lf
		所表达的数的范围：char <short< int <float< double 
		
		== 二、关于浮点数
		float采用%f占位符。

double采用%lf占位符。测试结果证明，double不可以用%f输入，但可以用%f输出，但是不建议采用%f，因为不同的编译器可能会有差别。

long double采用%Lf占位符，注意，L是大写。

浮点数输出缺省显示小数点后六位。

浮点数采用%lf输出，完整的输出格式是%m.nlf，指定输出数据整数部分和小数部分共占m位，其中有n位是小数。如果数值长度小于m，则左端补空格，若数值长度大于m，则按实际位数输出。 
 
 三、sizeof 查看占用几个字节 
 sizeof 在编译时运行，不会在sizeof内做计算。 
		 
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
