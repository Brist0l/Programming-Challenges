#include<stdio.h>
#include<ctype.h>
#include<strings.h>

float get_num(float* convert,char** unit){
	int c;
	float num = 0;

	while((c = getchar()) != EOF){
		if(c == '\n')
			break;
		else if(isdigit(c))
			num = (num * 10) + (c - '0');
		else{
			switch(c){
				case 'r': // rupees
					*convert = 100.0;
					*unit = "dollar";
					break;
				case 'd': //dollar
					*convert = 1000.0;
					*unit = "rupees";
					break;
				case 'p': //pound
					*convert = 1/1000.0;
					*unit = "rupees";
					break;
				case 'e':
					*convert = 1/100.0;
					*unit = "rupees";
					break;
				default:
					printf("char not recogonised\n");
					break;
			}
		}
	}
	return num;
}

int main(){
	float x;
	float convert;
	char* unit;

	//scanf("%f",&x);
	x = get_num(&convert,&unit);
	printf("%.2f %s\n",x*convert,unit);
}


