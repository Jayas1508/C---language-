#include<stdio.h>
main()
{
	int a[]={3,7,1,8,6};
	
	int i,size;
	size= sizeof(a)/sizeof(a[0]);
	printf("size of array = %d\n",size);
	
	for(i=0;i<size;i++)
	{
		printf("A = %d\n", a[i]);
	}
}