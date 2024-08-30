#include<stdio.h>

int reduce_one(int i);

int main(){
	int i = 4;
	int sum =i;
	for(int j= 1; j < i;j++)
		sum *= (i = reduce_one(i));
	printf("%d\n",sum);
}

int reduce_one(int i){
	if(i != 1)
		return (i -1);
}
