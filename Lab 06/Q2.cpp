#include <stdio.h>
int main(){
	int ticket_num,count=1;
	int temp,remaining_num;
	printf("Enter a ticket number: ");
	scanf("%d",&ticket_num);
	while(ticket_num>0){
		temp=ticket_num%10;
		remaining_num=ticket_num/10;
		ticket_num=remaining_num;
		printf("%d",temp);
	}
}
/*ticketnumber = 123
 * temp = 4
 *remaining number = 123
 */
