#include<stdio.h>
//dec -> bin
int main(){
	int bin_num[100];
	int i = 0,len;
	int number = 69;
	int quotient = number / 2;
	int remainder = number % 2;	

	bin_num[i++] = remainder;
	while(quotient != 0){
		remainder = quotient % 2;
		quotient = quotient/2;
		bin_num[i++] = remainder;
	}

	len = i;
	for(i = len;i != -1; i--)
		printf("%d",bin_num[i]);
	printf("\n");

}
