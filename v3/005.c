#include<stdio.h>
#include<math.h>
#define T 9940 
#define NUM_ELEMENTS	1000

int main(){
	int array[NUM_ELEMENTS];
	int middle;
	int L = 0;
	int R = NUM_ELEMENTS - 1;

	for(int i = 0;i<=NUM_ELEMENTS;i++)
		array[i] = i*10;

	while(L < R){

		middle = floor((L+R)/2);
		
		if(array[middle] < T)
			L = middle+1;
		else if(array[middle] > T)
			R = middle-1;
		else{
			printf("%d\n",middle);
			return middle;	
		}
	}

	return -1;
}
