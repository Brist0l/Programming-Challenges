#include<stdio.h>
#include<stdlib.h>


void getterminalwidht(char *command,char output[100]);

int main(){
	char cols[100];
	int col,char_count = 0;
	FILE *rwg;
	char c;

	getterminalwidht("tput cols",cols);
	col = atoi(cols);

	rwg = fopen("misc/rwg.txt","r");
	
	while((c = fgetc(rwg)) != EOF){
		printf("%c",c);
		char_count++;
		if(char_count == col){
			char_count = 0;
			if(c == ' '){
				char_count++;
				printf("\n");
			}
			else{
				char_count++;
				printf("-\n");
			}
		}
	}

}

void getterminalwidht(char *command,char output[100]){
	FILE *fp = popen(command,"r");
	
	fgets(output,100,fp);

	pclose(fp);
}
