#include<stdio.h> 

int main(){
	int count=0;
	int a=2;
	printf("������һ��������6��������\n");
	scanf("%d",&a);
	printf("�������������������£�\n");
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
