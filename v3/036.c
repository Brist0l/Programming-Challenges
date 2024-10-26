#include<stdio.h>
#include<math.h>

int main(){
	double wind_chill,temp,vel;

	temp = 24;
	vel = 5;
	
	wind_chill = 13.12 + 6215*temp - 11.37*pow(vel,0.16) + 0.3965*temp*pow(vel,0.16);

	printf("%0.2lf\n",wind_chill);
}
