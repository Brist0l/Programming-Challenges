#include<stdio.h>

int main(){
	FILE *fp;
	char content[100];
	int i,c;
	if((fp = fopen("src.txt","r")) == NULL)
		printf("lmao");
	while(fgets(content,sizeof(content),fp) != NULL)
		printf("\t\t\t\t\t%s",content);
}
