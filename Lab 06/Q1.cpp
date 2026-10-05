#include <stdio.h>
int main(){
	int pin,temp,remain;
	int n=0;
	int sum=0,count=0;
	printf("Enter your pin: ");
	scanf("%d",&pin);
	
	int temp_pin;
	temp_pin = pin;
	while(temp_pin>0){
		count++;
		temp_pin =temp_pin/10;
	}
	if (count==4){
		while(n<=4){
			temp = pin%10;
			remain = pin/10;
			sum = sum + temp;
			pin = remain;
			n=n+1;
		}
		printf("The sum is: %d\n",sum);
			
	}else{
		printf("Please re enter the PIN.\n");
	}
	return 0;
}

// 1234
// temp = 4
// remain = 123
