#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    //get user input
    string s = GetString();
    
    for(int i=0,n=strlen(s); i<n; i++)
    {
        //print first name in uppercase
        if (i==0)
        {
            printf("%c", toupper(s[i]));
        }
        //check space for start of last name
        else if (isspace(s[i]))
        {
            printf("%c", toupper(s[i+1]));
        }
    }
    printf("\n");
}
