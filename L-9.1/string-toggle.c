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
        else if(str[i]>='a' && str[i]<='z')
		{
        	str[i] = str[i]-32;
		}
    }
    printf("Toggle case string: %s", str);
}