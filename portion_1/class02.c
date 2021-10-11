#include<stdio.h>
 int main(){
 	
 	int price=0;
	 
	 
	 
	  int amount=0;
	  	printf("请输入票面（元） 和 价格（元）：");
	  	scanf("%d %d" ,&amount ,&price) ; // scanf输入多个数据的时候可用用【空格】 或者其他字符分割，但是建议此处用【空格】 ，输入的时候可以用空格或者回车进行两个字符的分割。 
 	
 	int change=0;
 change=	amount-price;
	 printf("找您%d元",change);
 	
 	
 }

