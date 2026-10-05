#include <stdio.h>
int main(){
	int number,temp,even = 0,odd = 0;
	int digit;
	printf("Enter a number: ");
	scanf("%d",&number);
	if(number<0){
		printf("Number is negative, please enter again.\n");
	}else if(number==0 || number==1){
		printf("Number has neither even nor odd digits.\n");
		
	}else {
		temp=number;
		for(int i=0;temp>0;i++){
			digit=temp%10;
			if (digit==0 || digit==1){
				i=i+1;
			}else if(digit%2==0){
				even=even+1;
				}else{
					odd=odd+1;
				}
			temp/=10;
				
			}
		}
	printf("The number of even digits is: %d\n",even);
	printf("The number of odd digits is: %d\n",odd);
	}
		

/* 
number = 1234
temp = 1234
digit = 4
temp = 123
digit = 3

*/
