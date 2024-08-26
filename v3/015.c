#include<stdio.h>
#include<math.h>

int main(){
	int d; // It will go from 1->9
	printf("Benford law\n");
	for(int i = 1; i < 10;i++){
		d = i;
		double p = log(d+1) - log(d);
		p = (p)*100;
		for(int j = 1;j<p;j++)
			printf(".");
		printf("\n");
	}
	
}
