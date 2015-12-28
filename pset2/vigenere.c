#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        string k = argv[1];
        int r = strlen(k);
        
        for (int i =0; i < r; i++)
        {
            if (! isalpha(k[i]))
            {
                printf("Bad Keyword\n");
                return 1;
            }
        }
        
        //get user string to encode
        string s = GetString();
        int encoder;
        for (int i=0,j=0, n=strlen(s); i<n; i++)
        {
            //looks for uppercase letters
            if (isupper(k[j%r]))
            {
                encoder = k[j%r]-65;
            }
            else
            {
                encoder = k[j%r]-97;
            }
            
            if (isupper(s[i]))
            {
                printf("%c", ((s[i] -65 + encoder) %26) + 65);
                j+=1;
            }
            //deals with special characters
            else if (! isalpha(s[i]))
            {
                printf("%c", s[i]);
            }
            //deals with lower case letters
            else
            {
                printf("%c", ((s[i] -97 + encoder) %26) + 97);
                j+=1;
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
