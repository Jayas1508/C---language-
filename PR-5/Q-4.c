#include<stdio.h>
main()
{

	int large,n,r,c,i,j;
	int x,y;
	int sum=0,add=0;
	
	
	printf("enter the size of row:");
	scanf("%d",&r);
	printf("enter the size of coln:");
	scanf("%d",&c);

	int a[r][c];
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
		printf("enter a[%d][%d] : ",i,j);
		scanf("%d",&a[i][j]);
	}
}

	printf("\nenter row number:");
	scanf("%d",&x);
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(i==x)
				{
					printf("%d ",a[x][j]);
					sum+=a[x][j];
		}
	}
}

	printf("\nsum of the row: %d",sum);
	printf("\nenter cln number: ");
	scanf("%d",&y);

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(j==y){
			printf("%d ",a[i][y]);
			add+=a[i][y];
			}
		}
	}
	printf("\nsum of the col.. %d",add);
}