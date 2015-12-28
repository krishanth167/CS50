#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        int k = atoi(argv[1]);
        //get user string to encode
        string s = GetString();
        
        for (int i=0, n=strlen(s); i<n; i++)
        {
            //looks for uppercase letters
            if (isupper(s[i]))
            {
                printf("%c", ((s[i] -65 + k) %26) + 65);
            }
            //deals with special characters
            else if (! isalpha(s[i]))
            {
                printf("%c", s[i]);
            }
            //deals with lower case letters
            else
            {
                printf("%c", ((s[i] -97 + k) %26) + 97);
            }
        }
        printf("\n");
        return 0;
    }
    
    else
    {
        printf("Usage: ./caesar <key>");
        return 1;
    }
}
