#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef char* string;

string getHorL(int input,int rand_num);

int main(){
	int input;
	string x;

	srand(time(NULL));
	int rand_num = rand()%100;
	
//	printf("rand num is : %d\n",rand_num);

	scanf("%d",&input);
	while((x = getHorL(input,rand_num)) != "Won"){
		printf("%s\n",x);
		scanf("%d",&input);
	}

	printf("You Won\n");
}

string getHorL(int input,int rand_num){
	if(input > rand_num)
		return "Lower";
	else if(input < rand_num)
		return "Higher";
	else
		return "Won";
}
