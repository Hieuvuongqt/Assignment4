#include <stdio.h>

int main(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n<=0){
		printf("The number is: 0");
	}else if(n<=2){
		printf("The number is: 1");
	}else{
		int f0=0,f1=1,f2=1;
		for(int i=3;i<=n;i++){
			f0=f1;
			f1=f2;
			f2=f0+f1;
		}
		printf("The number is: %d",f2);
	}
}
