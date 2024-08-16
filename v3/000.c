#include<stdio.h>
#include<ctype.h>
#include<strings.h>

// to implement : 
// 1) unit detector
// 2) add support to decimals(done)

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
				case 'm':
					*convert = 100.0;
					*unit = "cm";
					break;
				case 'k':
					*convert = 1000.0;
					*unit = "g";
					break;
				case 'g':
					*convert = 1/1000.0;
					*unit = "kg";
					break;
				case 'c':
					*convert = 1/100.0;
					*unit = "m";
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


