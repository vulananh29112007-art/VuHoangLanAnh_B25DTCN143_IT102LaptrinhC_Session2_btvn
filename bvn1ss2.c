#include <stdio.h>
int main (){
	//so nguyen nho
	short  age = 18;
	
	//so nguyen
	int  year = 2025;
	
	//so nguyen dai
	long nsx = 12122022; 
    
	//so nguyen rat dai
	long long  phonenumber = 123456789;
	
	//so nguyen ngan khong dau 
	unsigned short a = 1000;
	
	//so nguyen ngan khong dau 
	unsigned int b = 0;
	
	//so nguyen dai khong dau 
	unsigned long ul = 100000000; 
	
	//so nguyen rat dai khong dau 
	unsigned long long ull = 123456789012345;
	
    //ki tu
	char c = 'A';
	
	printf (" short = %d\n", age);
	printf (" int = %d\n",year);
	printf (" long = %d\n",nsx) ;
	printf (" long long = %d\n", phonenumber) ;
	printf ( "unsigned short = %d\n",a) ;
	printf ( " unsigned int = %d\n", b) ;
	printf (" unsigned long = %lu\n",ul);
	printf (" unsinged long long =%llu\n", ull);
	printf (" char = %c\n",c); 
	 
	
	return 0; 
} 
