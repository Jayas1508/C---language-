#include<stdio.h>

int main()
{
	
	int a[5];
	int *ptr,i;
	
		ptr = &a;	


	for(i=0; i<=4; i++)
	{
	printf("enter element = ");
	scanf("%d",&a[i]);
	}
	
	for(i=0; i<=4; i++)
	{
	  printf("%d\n",(*(ptr+i))*(*(ptr+i)),(ptr+i));
    }
}