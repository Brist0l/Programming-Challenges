#include<stdio.h>

char *strcrvs(char s1[10],int len);
int getlen(char s1[10]);
int strcomp(char s1[10],char s2[10]);

char s2[10];

int main(){
	char s1[10];	
	scanf("%s",s1);
	if(strcomp(s1,strcrvs(s1,getlen(s1))) == 0)
		printf("Pallindrome\n");
	else
		printf("Not pallindrome\n");
}


char *strcrvs(char s1[10],int len){
	int i,j;
	for(i = len,j = 0;(i <= len && i >= 0);i--,j++)
		s2[j] = s1[i];
	s2[j] = '\0'; 
	return s2;
}

int getlen(char s1[10]){
	int i;
	for(i = 0;s1[i] != '\0';i++);
	return i-1; // if I included the len of s1 including \0 s2 would not print as \0 is the first char

}

int strcomp(char s1[10],char s2[10]){
	int i,j;
	for(i = 0, j = 0;s1[i] != '\0' && s2[j] != '\0';i++,j++)
		if(s1[i] != s2[j])
			return -1;
	return 0;		
}
