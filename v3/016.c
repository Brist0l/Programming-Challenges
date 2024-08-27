#include<stdio.h>
#include<stdlib.h>

void convert_to_morse(char word[10]);

char *morse_code[26] = {".-","-...","-.-.","-..",
			".","..-.","--.",
			  "....","..",".---","-.-",
			  ".-..","--","-.","---",
			  ".--.","--.-",".-.",
			  "...","-","..--","...-",
			  ".--","-..-","-.--","--.."};

char letters[26] = {'a','b','c','d','e','f','g','h',
		    'i','j','k','l','m','n','o','p',			
		    'q','r','s','t','u','v','x','y','z'};

int main(){
	char *word = NULL;
	size_t len = 0;
	getline(&word,&len,stdin);
	convert_to_morse(word);
}

void convert_to_morse(char word[100]){
	int i;
	int j;

	for(i = 0;word[i] != '\0';i++){
		for(j = 0;j < 27;j++){
			if(word[i] == letters[j]){
				printf("%s ",morse_code[j]);
				break;
			}
			else if(word[i] == ' '){
				printf(" ");
				break;
			}

		}
	}
	printf("\n");
}
