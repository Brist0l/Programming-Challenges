#include<stdio.h>

int main(){
	char *str;
	size_t len;
	size_t nread;

	while((nread = getline(&str,&len,stdin)) != -1)
		for(int i = 0;i<= nread; i++)
			printf("%d",str[i]);
}
