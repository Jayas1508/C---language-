#include <stdio.h>
#include<string.h>

 
main()
{
    char s[25], rs[25] = {'\0'};
    int i, l = 0, f = 0;
 
    printf("Enter a string = ");
    gets(s);
    for (i = 0; s[i] != '\0'; i++)
    {
        l++;
    }
    printf("The length of the string '%s' = %d\n", s, l);
    for (i = l - 1; i >= 0 ; i--)
    {
        rs[l - i - 1] = s[i];
    }
 
    for (f = 1, i = 0; i < l ; i++)
    {
        if (rs[i] != s[i])
            f = 0;
    }
    if (f == 1)
       printf ("%s is a palindrome \n", s);
    else
       printf("%s is not a palindrome \n", s);
}
