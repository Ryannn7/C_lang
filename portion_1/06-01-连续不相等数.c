#include<stdio.h> 

int main(){
	int count=0;
	int a=2;
	printf("请输入一个不大于6的正整数\n");
	scanf("%d",&a);
	printf("连续不相等整数输出如下：\n");
	for(int i=a;i<=a+3;i++){
		
		for(int j=a;j<=a+3;j++){
		
			for(int k=a;k<=a+3;k++){
				
				if(i!=j && i!=k && j!=k){
					printf("%d%d%d",i,j,k);
					count++;
					if(count==6){
						printf("\n");
						count=0;
					}else {
						printf(" ");
					} 
				}				
		
	    	}	
		
		}
		
	}
	return 0;

	
	
}
