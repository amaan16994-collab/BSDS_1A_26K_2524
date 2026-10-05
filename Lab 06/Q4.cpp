#include <stdio.h>
int main(){
	int lib_code,remain;
	int size,end,temp;
	int start,compare=0;
	
	printf("Enter your library code: ");
	scanf("%d", &lib_code);
	temp = lib_code;
	for (size = 0; temp > 0; size++) temp /= 10;
	end=size-1;
	int myarr[size];
	remain = lib_code;
	for (start = 0; start < size; start++) {
    myarr[start] = remain % 10;
    remain = remain / 10;
	}
	start = 0;
	while (start < end) {
    	if (myarr[start] == myarr[end]) {
        	compare = compare + 1;
        	start = start + 1;
        	end = end - 1;
    	} else {
        	break;
    	}}
	if(compare==(size/2)){
		printf("--Library Code Analysis--\n");
		printf("   This code is valid.\n");
		}else{
			printf("--Library Code Analysis--\n");
			printf("  This code is NOT valid.\n");
		}
	
	
	return 0;
}


/*
lib code = 1221, remain= 122, myarr[1,2,2,1]
start = 0
size=4, end = 4
*/
