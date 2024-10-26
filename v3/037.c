#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
	struct tm *ptr;
	time_t t;
	for(int i = 0;i<10;i++){
		t = time(NULL);
		ptr = localtime(&t);
		system("clear");
		printf("\r%s\n",asctime(ptr));
		sleep(1);
	}
}
