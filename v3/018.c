#include<stdio.h>
#include<stdlib.h>

int main(){
	int n = 100;
	
	double (*A)[n] = malloc(sizeof(double[n][n]));
	printf("%p\n",A);
}
