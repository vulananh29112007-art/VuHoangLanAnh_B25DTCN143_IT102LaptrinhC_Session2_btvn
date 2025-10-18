#include<stdio.h>
#include<math.h>
int main(){
	
	int a=9,b=7,c=8;
	float S;
	S= (pow(a,2)+sqrt(pow(b,2)+4*a*c))/(2*a)-(pow(b,3)/pow(c,2))+sqrt(fabs(a-b));
	printf("%f",S); 
	
	return 0; 
} 

