#include<stdio.h>
#include<string.h>

main(){
    char str[100];
    int i;

    printf("Enter any string: ");
    gets(str);

    for(i=0;str[i]!='\0';i++) 
	{
        if(str[i]>='A' && str[i]<='Z') 
		{
            str[i] = str[i]+32;
        }
    }
    printf("Lowercase string: %s", str);
}