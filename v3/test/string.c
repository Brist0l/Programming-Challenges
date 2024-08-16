#include<stdio.h>

void getval(char** s){
	*s = "helo";
}

int main(){
	char* str;

	getval(&str);

	printf("%s\n",str);
}
