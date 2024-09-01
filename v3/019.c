#include<stdio.h>

int main(){
	int i[10] = {10,9,8,7,6,5,4,3,2,1};
	int j;
	for(j = 0; j < 9; j++)
		if(i[j] > i[j+1]){
			i[j+1] = i[j];
		}
	for(j = 0; j < 10; j++)
		printf("%d\n",i[j]);
}
