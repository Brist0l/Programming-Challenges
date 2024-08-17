#include<stdio.h>
#define STATE_IN  1 // if inside a word
#define STATE_OUT 0 // if outside the word

/** Hello World **/

int main(){
	int num_word,state;
	int c;
		
	state = STATE_OUT;

	while((c=getchar()) != EOF){
		if( c == '\n' || c == ' ' || c == '\t'){
			num_word++;
			state = STATE_OUT;
		}
		else if(state == STATE_OUT)
			state = STATE_IN;

	}

	printf("%d\n",num_word);
}
