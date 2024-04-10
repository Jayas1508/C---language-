#include<stdio.h>
 void sum()
 {
 	
	int a[10],sum=0;
	 int n,i;
	 
 		printf("enter count array size = ");
 		scanf("%d",&n);
 		
 	for(i=0; i<n; i++)
	 {
 		printf("enter count number = ");
  		scanf("%d",&a[i]);
     }
 	
 	for(i=0; i<n; i++)
	 {
  		printf(" %d\n",a[i]);
   		sum +=a[i];
 	 }
 		printf("\n\nsum = %d",sum);

}
main()
{
	sum();
}