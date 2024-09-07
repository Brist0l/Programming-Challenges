#include<stdio.h>
#include<string.h>

#define DELIMETER ' ' 

int len(char words[100]);

int main(){
	char input[100] = "A BC DEF";
	char a[100] = "";
	char tokens[100][100]; //an array which will hold strings
	int i,j=0,k=0; 
	char c;
	int lenght = len(input);

	for(i = 0;i < lenght + 1;i++){
		c=input[i];
		if(c == '\0')
			c = DELIMETER;
		if(c != DELIMETER)
			a[k++] = c;
		else{
			a[k] = '\0';
			k = 0;
			strcpy(tokens[j++],a);
		}
	}
	for(i = 0; i < j-1;i++){
		printf("%s\n",tokens[i]);
	}
}

int len(char words[100]){
	int i;
	for(i = 0;words[i] != '\0';i++);
	return i+1;
}
