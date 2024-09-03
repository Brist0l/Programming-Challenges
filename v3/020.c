#include<stdio.h>

#define STATE_IN 1
#define STATE_OUT 0

int main(){
	int c,wc=0;
	int state;

	state = STATE_OUT;		

	while((c = getchar()) != EOF){
		if((c == ' ' || c == '\n') && state == STATE_IN){
			wc++;
			state = STATE_OUT;
		}	
		else if(state == STATE_OUT)
			state = STATE_IN;
	}

	printf("No. of words: %d\n",wc);
}
