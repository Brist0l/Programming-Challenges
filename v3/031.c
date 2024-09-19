#include<stdio.h>

#define SHIFT 3

int getindex(int ascii_val,int *letters);

int main(){
	int letters[26];
	int i,j=97;
	int index;


	for(i = 0;i < 26;i++) // store all the letters in the array
		letters[i] = j++;
	
	char input[100] = "hello world"; 
	char output[100];

	for(i = 0;input[i] != '\0';i++){
		if((index = getindex(input[i],letters)) >= 0){ // index range : [0,25]
			if(index == 69){
				output[i] = ' ';
				continue;
			}
			else if(index >= 23)
				index = (index + SHIFT) - 26;
			else
				index = index + SHIFT;
			//printf("%c -> %c\n",input[i],letters[index]);
			output[i] = letters[index];
		}
	
	}

	output[i] = '\0'; 

	printf("%s\n",output);
}

int getindex(int ascii_val,int *letters){
	int i;
	if(ascii_val == ' ')
		return 69;
	for(i = 0; i < 26 ; i++)
		if(*(letters+i) == ascii_val)
			return i;
	return -1;
}
