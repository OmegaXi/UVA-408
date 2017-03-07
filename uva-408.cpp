#include <iostream>  
#include <cstdlib>  
#include <cstdio>  

using namespace std;  

int gcd( int a, int b )  
{  
	return a%b?gcd(b,a%b):b;  
}  
      
main()  
{  
	int a,b;  
while (cin>>a>>b)
	{  
		printf("%10d%10d",a,b);  
		if(gcd(a,b)==1)  
		printf("    Good Choice\n");  
		else
			printf("    Bad Choice\n");  
		printf("\n");  
}  
}  