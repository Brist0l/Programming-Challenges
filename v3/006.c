#include<stdio.h>

int main(){
	float height,weight;
	printf("Enter Height and weight:");
	scanf("%f %f",&height,&weight);

	float bmi = weight/(height*height);

	printf("BMI:%f\n",bmi);
}
