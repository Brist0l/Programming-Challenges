#include<stdio.h>
#include<stdlib.h>

void get_month(int month_num);

char *months[12] = {"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};

int main(int argc, char *argv[]){
	int month_num = atoi(argv[argc-1]);
	get_month(month_num);
}

void get_month(int month_num){
	printf("%s\n",months[month_num]);	

	for(int i = 1;i <= days[month_num]; i++){
		if(i % 7 == 0)
			printf("%3d\n",i);
		else
			printf("%3d ",i);
	}
}
