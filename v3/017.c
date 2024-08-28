#include<stdio.h>

int getlen(char word[10]);

int main(){
	char word[10] = "saywot";
	char in_word[10];
	int i,j;
	int count,len;
	
	count = 0;
	len = getlen(word);
	scanf("%s",in_word);

	for(i = 0; in_word[i] != '\0';i++)
		for(j = 0;word[j] != '\0';j++)
			if(in_word[i] == word[j])
				count++;
	
	if(count == len)
		printf("it is anagram\n");
	else
		printf("its not\n");
}

int getlen(char word[10]){
	int i;
	for(i = 0;word[i] != '\0';i++);
	return i;
}
