#include<stdio.h>
main() 
{
    int a[] = {12,42,18,50,26};
    
    int sum=0, average;
    
    int i,size;
	size= sizeof(a)/sizeof(a[0]);
	printf("size of array = %d\n",size);
    
    for(i=0;i<size;i++)
	{
        sum = sum +  a[i];
    }
    
    average = sum/size;
    
    printf("The average of given numbers = %d", average);
}