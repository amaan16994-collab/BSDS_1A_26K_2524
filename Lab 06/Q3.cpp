#include <stdio.h>
int main(){
	int attendance;
	int present = 0, absent;
	for(int i=0;i<15;i++){
		printf("Enter 1 if the student is present,Enter 0 if the student is absent: ");
		scanf("%d",&attendance);
		if(attendance==1){
			present++;
		}
		printf("Enter 1 if the student is present,Enter 0 if the student is absent: ");
		scanf("%d",&attendance);
		if(attendance==1){
			present++;
		}
	}
	absent=30-present;
	printf("Total present students in class are: %d\n",present);
	printf("Total absent students in class are: %d\n",absent);
}
