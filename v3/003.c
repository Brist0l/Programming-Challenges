#include<stdio.h>

int main(){
	int num;
	
	for(num = 0; num <= 100;num++){
		if(num % 3 == 0)
			printf("%d Fizz\n",num);
		else if(num % 5 == 0)
			printf("%d Buzz\n",num);
		else if(num % 3 == 0 && num % 5 == 0)
			printf("%d FizzBuzz\n",num);
		else
			printf("%d\n",num);
	}
}
