#include <stdio.h>
main(){
	int p, r, t, Interest;
	printf("Enter The Principal Amount = ");
	scanf("%d", &p);
	
	printf("Enter The Interest Rate  = ");
	scanf("%d", &r);
	
	printf("Enter The Time In Year  = ");
	scanf("%d", &t);
	
	Interest= p*r*t/100;
	printf("Enter The Simple Interest = %d", Interest);
	
}