#include <stdio.h>
int main(){
	int num;
	int C = 1;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num<0){
		printf("Number cannot be negative. Please enter again.");
	}else if(num==0){
		C = 1;
	}else{
		for (int i =1; i <= num; i++){
			C = C * 2 * (2 * i - 1) / (i + 1);
		}
		
	}
	printf("C_%d = %d\n", num, C);
	return 0;
}

