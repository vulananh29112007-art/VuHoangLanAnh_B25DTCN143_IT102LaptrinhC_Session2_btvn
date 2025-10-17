#include<stdio.h>
int main(){
	int number= 12345,result;
	int d1= number%10;
	int d2= (number/10)%10;
	int d3= (number/100)%10;
	int d4= (number/1000)%10;
	int d5= (number/10000)%10;
	result= d1*10000+d2*1000+d3*100+d4*10+d5;
	printf("%d",result); 
	
	return 0; 
} 
